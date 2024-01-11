#include <string>
#include <vector>
#include <cmath>

using namespace std;

double facto(int n, int m) {
    if(n == m) return 1;
    if(n == 1) return 1;
    return n * facto(n - 1,m);
}

int solution(int balls, int share) {
    double answer = facto(balls, balls - share)/facto(share,0);
    return round(answer);
}