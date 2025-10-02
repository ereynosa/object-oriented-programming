#include <string>
#include <iostream>
#include "Pet.h"
using namespace std;

int main(){

    Pet pet1 = Pet();
    Pet pet2 = Pet("Flash the turtle", 2, "the group's",false );

    cout << "---- Pet 1 Private Variables! ----\n";
    cout << "Name: "<<pet1.getName()<<endl;
    cout <<"Age: "<< pet1.getAge()<<endl;
    cout <<"Owner: " << pet1.getOwner()<<endl;
    cout <<"House Trained? "<< pet1.getisHouseTrained()<<endl<<endl;

    cout << "---- Pet 2 Private Variables! ----\n";
    cout << "Name: "<<pet2.getName()<<endl;
    cout <<"Age: "<< pet2.getAge()<<endl;
    cout <<"Owner: " << pet2.getOwner()<<endl;
    cout <<"House Trained? "<< pet2.getisHouseTrained()<<endl<<endl;
    
    pet2.updateName("Slowly the Turtle");
    pet2.updateAge();
    pet2.updateOwner("Has no owner :(");
    pet2.setHouseTrained();

    cout << "---- Pet 2 Updated Private Variables! ----\n";
    cout << "Name: "<<pet2.getName()<<endl;
    cout <<"Age: "<< pet2.getAge()<<endl;
    cout <<"Owner: " << pet2.getOwner()<<endl;
    cout <<"House Trained? "<< pet2.getisHouseTrained()<<endl;
}