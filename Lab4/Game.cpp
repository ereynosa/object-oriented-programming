#include "Game.h"
#include <random>
#include <set>
Game::Game(){}

void Game:: generatePlayers (int n){
    for (int i =0; i < n; i++){
        players.push_back(new RPG());
        //rename players
        string new_name = "NPC_"+to_string(i);
        players[i]->setName(new_name);
        live_players.insert(i);
    }
}

int Game::selectPlayer() {
    if (live_players.empty()) return -1;  // safety

    // persistent RNG
    static thread_local std::mt19937 gen(std::random_device{}());
    std::uniform_int_distribution<int> dist(0, static_cast<int>(live_players.size()) - 1);

    int k = dist(gen);                     // position inside the set
    auto it = live_players.begin();
    std::advance(it, k);
    return *it;                            // actual player index
}

void Game:: endRound(RPG *winner,RPG *loser, int loserIndex){
    winner-> setHitsTaken(0);
    live_players.erase(loserIndex);
    winner->updateExpLevel();
    cout << "NPC_"<< winner->getName() << " won against NPC_"<< loser->getName()<<endl;
}

void Game:: battleRound(){

    int playerIndex1 = selectPlayer();
    int playerIndex2 = selectPlayer();

    if ( playerIndex2 == playerIndex1){
       battleRound();
       return;
       
    }
    
    RPG* player1 = players[playerIndex1];
    RPG* player2 = players[playerIndex2];

    while(player1->isAlive() && player2->isAlive()){
        player1->attack(player2);
        if (!player2->isAlive()) break;
        player2->attack(player1); 
    }
    if(player1->isAlive()){
        endRound(player1,player2,playerIndex2);
    }
    else{endRound(player2,player1,playerIndex1);}
}

void Game::gameLoop(){
    while(live_players.size() > 1){
        battleRound();
    }
}

void Game::printFinalResults(){
    for (int i = 0; i < players.size(); i++) {
        players[i]->printStats();
    }
}

Game::~Game(){}