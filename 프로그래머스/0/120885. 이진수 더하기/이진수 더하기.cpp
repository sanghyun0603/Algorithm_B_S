#include <string>
#include <vector>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    int next = 0;
    int num = 0;
    while(bin1.length() != bin2.length()) {
        if(bin1.length() > bin2.length()) bin2 = '0' + bin2;
        else bin1 = '0' + bin1;
    }
    for(int i = bin1.length() - 1; i > -1 ; i--) {
        if(bin1[i] == '1') next ++;
        if(bin2[i] == '1') next ++;
        if(next == 0 || next == 2) {
            answer = '0' + answer;
            if(next == 2) next--;
        }
        else if(next == 1 || next == 3) {
            answer = '1' + answer;
            if(next == 3) next--;
            next--;
        }
    }
    if(next != 0) {
        char a = next + '0';
        answer = a + answer;
    }
    
    return answer;
}