#include <iostream>
#include <string>
using namespace std;

int main () {
    int arr[3] ={};
    int sums = 0;
    int mins = 101;
    int minIdx = -1;
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
        sums += arr[i];
        if (mins > arr[i]) {
            mins = arr[i];
            minIdx = i;
        }
    }
    if (sums >= 100) {
        cout << "OK" << '\n';
    } else {
        if (minIdx == 0) {
            cout << "Soongsil" << '\n';
        } else if (minIdx == 1) {
            cout << "Korea" << '\n';
        } else {
            cout << "Hanyang" << '\n';
        }
    }
    
    return 0;
}