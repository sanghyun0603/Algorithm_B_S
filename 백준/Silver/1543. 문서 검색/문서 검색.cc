#include <iostream>
#include <string>

using namespace std;

int main () {
    string moon, search;
    int pivot = 0;
    int cnt = 0;
    getline(cin, moon);
    getline(cin, search);
    while(pivot < moon.length()) {
        int check = 0;
        for(int i = pivot; i < moon.length(); i++) {
            if(moon[i] == search[0] && i + search.length() <= moon.length()) {
                check = 1;
                for(int j = 0; j < search.length(); j++) {
                    if(moon[i + j] != search[j]) {
                        //검색실패
                        check = 0;
                        break;
                    }
                }
                if(check) {
                    cnt ++;
                    pivot = search.length() + i;
                    break;
                }                
            }   
        }
        if(!check) break;
    }
    cout << cnt << '\n';
    return 0;
}