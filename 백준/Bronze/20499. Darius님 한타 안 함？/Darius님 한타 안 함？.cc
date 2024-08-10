#include <iostream>
#include <string>

using namespace std;

int main () {
    int nums[3] = {};
    int dir = 0;
    string s;
    string num;
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '/') {
            nums[dir++] = stoi(num);
            num = "";
        } else {
            num += s[i];
        }
    }
    nums[dir] = stoi(num);
    if(nums[1] == 0 || nums[0] + nums[2] < nums[1]) {
        cout << "hasu" << '\n';
    } else {
        cout << "gosu" << '\n';
    }
    return 0;
}