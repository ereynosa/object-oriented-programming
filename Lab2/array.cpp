#include <iostream>
#include <vector>
using namespace std;
/**
 * @brief 
 * 
 * @param arr 
 * @param size 
 */
void printMemArr(const int arr[], int size)
{
    printf ("Array - Each int is worth %lu bytes\n", sizeof(arr[0]));
    for (int i=0; i < size; i++)
    {
        printf("Value: %i at Memory Location: %p\n", arr[i], arr +i);
    }
}
/**
 * @brief 
 * 
 */
void incArrBy10(int arr[], int size)
{
    for(int i=0; i < size; i++)
    {
        arr[i]+=10;
    }
}

int main()
{
    const int SIZE = 5;
    int arr[SIZE];
    for (int i=0; i<SIZE; i++)
    {
        arr[i]= 100+i;
    }
    printf("BEFORE------------------\n");
    printMemArr(arr,SIZE);

    //change the value
    incArrBy10(arr,SIZE);
    printf("AFTER-------------------\n");
    printMemArr(arr,SIZE);
    return 0;
}