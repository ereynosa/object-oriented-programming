#include <string>
#include <iostream>
#include <random>
#include "RPG.h"
#include "Game.h"
using namespace std;

int main() {
     
    Game game = Game();
    int num_players = 10;
    game.generatePlayers(num_players);
    game.gameLoop();
    game.printFinalResults();
    
    return 0;
}