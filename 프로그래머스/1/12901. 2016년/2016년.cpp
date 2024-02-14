#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(int a, int b) {
    map<int,string> m = {{1,"FRI"},{2,"SAT"},{3,"SUN"},{4,"MON"},{5,"TUE"},{6,"WED"},{0,"THU"}};
    int cnt = 0;
    for(int i = 1; i < a; i++) {
        if(i == 2) cnt += 29;
        else if(i <= 7) {
            if(i % 2 == 0) cnt += 30;
            else cnt += 31;
        } else {
            if(i % 2 == 0) cnt += 31;
            else cnt += 30;
        }
        
    }
    cnt += b;
    return m[cnt % 7];
}