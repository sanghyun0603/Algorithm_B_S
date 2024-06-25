#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int arr[3];
    while(true) {
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr , arr + 3);
        if(arr[0]==0 && arr[1]==0 && arr[2]==0) break;
        if(arr[0] + arr[1] <= arr[2]) {
            cout << "Invalid" << '\n';
            continue;
        }
        set<int> sets;
        for(int i = 0; i < 3; i++) {
            sets.insert(arr[i]);
        }
        switch (sets.size()) {
            case 1: {
                cout << "Equilateral" << '\n';
                break;
            }
            case 2: {
                cout << "Isosceles" << '\n';
                break;
            }    
            default: {
                cout << "Scalene" << '\n';
            }
        }
    }
    return 0;
}