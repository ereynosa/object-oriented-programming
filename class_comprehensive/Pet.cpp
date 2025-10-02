#include <iostream>
#include <string>
#include "Pet.h"

Pet::Pet(){
    name= "pet";
    age = 100;
    owner = "You";
    isHouseTrained = true;
}

Pet::Pet(string name, int age , string owner, bool isHouseTrained){

    this->name = name;
    this-> age = age;
    this -> owner= owner;
    this -> isHouseTrained = isHouseTrained;
}

string Pet:: getName() const{
    return name;
}

int Pet:: getAge() const{
    return age;
}

string Pet:: getOwner() const{
    return owner;
}

bool Pet:: getisHouseTrained() const{
    return isHouseTrained;
}

void Pet::updateName(string newName){
    name = newName;
}

void Pet::updateAge(){
    age++;
}

void Pet::updateOwner(string adopter){
    owner=adopter;
}

void Pet:: setHouseTrained(){
    isHouseTrained = true;
}