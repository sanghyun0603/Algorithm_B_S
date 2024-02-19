#include <string>
#include <vector>

using namespace std;

int gi(vector<int> a1 , vector<int> a2, vector<int> b1, vector<int> b2) {
    double x1 = a1[0] - a2[0];
    double y1 = a1[1] - a2[1];
    double x2 = b1[0] - b2[0];
    double y2 = b1[1] - b2[1];
    if(y1 / x1 == y2 / x2) return 1;
    return 0;
}

int solution(vector<vector<int>> dots) {
    int answer = 0;
    if(gi(dots[0],dots[1], dots[2], dots[3]) || gi(dots[0], dots[2], dots[1], dots[3]) || gi(dots[0], dots[3], dots[1], dots[2])) {
        answer = 1;
    }
    return answer;
}