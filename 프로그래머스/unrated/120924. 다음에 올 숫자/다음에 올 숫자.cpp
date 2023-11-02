#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    int n1 = common[1] - common[0];
    int n2 = common[2] - common[1];
    int a = 0;
    int flag = 0; // 등차,등비구별 0은 등차
    if(n1 == n2) {
        a = n1;
    }
    else {
        a = n2/n1;
        flag = 1;
    }
    if(flag == 1) answer = common[common.size()-1] * a;
    else answer = common[common.size()-1] + a;
    return answer;
}