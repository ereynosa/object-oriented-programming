#ifndef PET_H
#define PET_H
#include <string>
using namespace std;

class Pet{
    public:
        Pet();
        Pet(string name, int age , string owner, bool isHouseTrained);

        string getName() const;
        int getAge() const;
        string getOwner() const;
        bool getisHouseTrained() const;

        void updateName(string newName);
        void updateAge();
        void updateOwner(string adopter);
        void setHouseTrained();

    private:
        string name;
        int age;
        string owner;
        bool isHouseTrained;
};
#endif