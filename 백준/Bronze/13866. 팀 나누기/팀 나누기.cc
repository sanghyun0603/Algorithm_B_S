#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdlib>

using namespace std;

int main(){
    vector<int> v;
    for(int i = 0; i < 4; i++) {
        int n;
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    cout << abs((v[3] + v[0]) - (v[2] + v[1])) << '\n';
    return 0;
}