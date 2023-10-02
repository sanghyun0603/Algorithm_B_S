#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int gong = denom1 * denom2;
    int n1 = numer1 * (gong / denom1);
    int n2 = numer2 * (gong / denom2);
    int numer = n1 + n2;
    int denom = gong;
    int gc = gcd(numer,denom);
    answer.push_back(numer/gc);
    answer.push_back(denom/gc);
    return answer;
}