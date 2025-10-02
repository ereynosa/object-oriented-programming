#include <string>
#include <iostream>
#include "RPG.h"
#include <ctime>
using namespace std;

int main() {
RPG p1 = RPG("WIZ", 0 , 0.2, 60,1);
RPG p2 = RPG();

printf ("\nPlayer: %s \nCurrent Status\n", p1.getName().c_str());
printf ("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\t\n", p1.getHitsTaken(), p1.getLuck(), p1.getExp(), p1.getLevel());

printf ("\nPlayer: %s \nCurrent Status\n", p2.getName().c_str());
printf ("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\t\n\n", p2.getHitsTaken(), p2.getLuck(), p2.getExp(), p2.getLevel());

srand(time(NULL));
int Rnum1 = rand()%4;
int Rnum2 = rand()%4;
p2.setHitsTaken(Rnum1);
p1.setHitsTaken(Rnum2);
printf("After they both have a turn!\n");
printf ("%s", p1.getName().c_str());
printf( " got hit %i times! \n", p1.getHitsTaken());
printf ("%s", p2.getName().c_str());
printf( " got hit %i times! \n", p2.getHitsTaken());
cout << "\nLets see who is still alive!\n";
cout << "0 = dead and 1 = alive!\n";
printf( "is %s alive? ", p1.getName().c_str());
cout<< p1.isAlive();
cout << endl;
printf( "is %s alive? ", p2.getName().c_str());
cout <<p2.isAlive();
}