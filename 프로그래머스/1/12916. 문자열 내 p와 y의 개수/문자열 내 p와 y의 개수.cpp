#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int a = 0;
    int z = 0;
    for(char st : s) {
        if(st == 'P' || st == 'p') a ++;
        else if(st == 'y' || st == 'Y') z ++;
    }
    return a == z ? true : false;
}