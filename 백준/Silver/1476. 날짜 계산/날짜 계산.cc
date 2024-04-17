#include <iostream>

using namespace std;

int main(){
    int e,s,m;
    int cnt = 0;
    int re=0,rs=0,rm=0;
    cin >> e >> s >> m;
    while(true){
        if(re == 16){
            re = 1;
        }
        if(rs == 29){
            rs = 1;
        }
        if(rm == 20){
            rm = 1;
        }
        //넘어가는 경우
        if(re == e && rs == s && rm == m){
            cout << cnt;
            break;

        }
        re++;
        rs++;
        rm++;
        cnt++;
    }
    
}
