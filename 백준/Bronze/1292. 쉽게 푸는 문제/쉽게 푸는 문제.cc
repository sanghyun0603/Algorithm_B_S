#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a,b;
    int sums = 0;
    vector<int> v;
    for(int i = 1; i <= 100; i++) {
        if(v.size() == 1001) break;
        for(int j = 0 ; j < i; j++) {
            v.push_back(i);
        }
    }
    cin >> a >> b;
    for(int i = a - 1; i <= b -1; i++) {
        sums += v[i];
    }
    cout << sums << '\n';
    return 0;
}