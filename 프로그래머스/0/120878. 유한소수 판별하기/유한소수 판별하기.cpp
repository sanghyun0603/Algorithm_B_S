#include <string>
#include <vector>

using namespace std;

//유클리드 호제법으로 최대공약수 구하기
//그걸로 나뉘어지나 확인
//안나뉘어지는 경우에도 분모에 2,5만있으면 유한소수이므로 주의.
// 분모에 2,5만있는지 확인

int gcb(int a, int b) {
    return b ? gcb(b, a%b) : a;
}

int solution(int a, int b) {
    int answer = 1;
    int GCB = gcb(a,b);
    int i = 2;
    b /= GCB;
    while( b != 1) {
        if(b % i == 0) {
            b /= i;
            if(i != 2 && i != 5) {
                answer = 2;
                break;
            }
        } else i++;
    }
    return answer;
}