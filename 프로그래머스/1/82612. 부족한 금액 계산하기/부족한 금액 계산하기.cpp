using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long mo = 0;
    int n = 1;
    while(count--) {
        mo += price * n++;
    }
    if(money - mo >= 0) answer = 0;
    else answer = mo - money;
    
    return answer;
}