// Sololearn
// You are given an array of size 12.
// Write a program to print only the first, fifth and last letters of the array sequentially.
// Remember that array indexing starts from 0.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char word[] = {'c', 'h', 'a', 'm', 'p', 'i', 'o', 'n', 's', 'h', 'i', 'p'};
    // your code goes here
    cout << word[0] << word[4] << word[11];
    return 0;
}