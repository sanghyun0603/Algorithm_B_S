#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(int i = 0; i < myString.length(); i++) {
        if(myString[i] == 'a') {
            myString[i] -= 32;
        } else if(isupper(myString[i]) && myString[i] != 'A') {
            myString[i] += 32;
        }
    }
    return myString;
}