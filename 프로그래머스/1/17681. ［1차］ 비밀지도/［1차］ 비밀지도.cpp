#include <string>
#include <vector>

using namespace std;

string bin(int n, int lens) {
    string a = "";
    while(n >= 1) {
        if(n % 2 == 0) a = '0' + a;
        else a = '1' + a;
        n /= 2;
    }
    while(a.size() < lens) a = '0' + a;
    return a;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for(int i = 0; i < n; i++) {
        string a = bin(arr1[i],n);
        string b = bin(arr2[i],n);
        string c = "";
        for(int j = 0; j < n; j++) {
            if(a[j] == '1' || b[j] == '1') c += '#';
            else c += ' ';
        }
        answer.push_back(c);
    }
    return answer;
}