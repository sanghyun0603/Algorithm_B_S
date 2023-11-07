#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    vector<int> a1;
    for(int i = 1; i <= sqrt(n); i++) {
        if(n%i == 0) {
            answer.push_back(i);
            if(i != n/i) a1.push_back(n/i);
        }
    }
    sort(a1.begin(),a1.end());
    answer.insert(answer.end(),a1.begin(),a1.end());
    
    return answer;
}