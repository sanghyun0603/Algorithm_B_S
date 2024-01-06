#include <string>
#include <vector>

using namespace std;

int gcb(int a, int b) {
    return b? gcb(b, a % b) : a;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    int GCB = gcb(n,m);
    int LCM = n * m / GCB;
    answer.push_back(GCB);
    answer.push_back(LCM);
    return answer;
}