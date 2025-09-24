#include <iostream>
#include <vector>
using namespace std;

void printMemVec(const vector<int> &v )
{
    printf ("Vector - Each int is worth %lu bytes\n", sizeof(v[0]));
    for (int i=0; i < v.size(); i++)
    {
        printf("Value: %i at Memory Location: %p\n", v[i], &v[i]);
    }
}

void incVecBy10(vector<int> &v)
{
    for(int i=0; i < v.size(); i++)
    {
        v[i] += 10;
    }
}

int main()
{
    const int SIZE = 5;
    vector<int> vec;

    for (int i=0; i < SIZE; i++)
    {
        vec.push_back(100 + i);
    }
    printf("\nBefore Increment - - - - - - - - - - - - - - - - - -\n");
    printMemVec(vec);

    
    incVecBy10(vec);

    printf("\nAFTER Increment - - - - - - - - - - - - - - - -\n");
    printMemVec(vec);

    // remove the last element using pop_back()
    vec.pop_back();

    printf("\nAFTER (pop_back) - - - - - - - - - - - - - - - - -\n");
    printMemVec(vec);

    vec.push_back(101);
    vec.push_back(102);
    printf("\nAFTER (push_back) - - - - - - - - - - - - - - - - -\n");
    printMemVec(vec);
}