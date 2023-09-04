#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    int cnt;
    for (int i = 0; i < str2.length(); i++) {
        //조건설정 str2의 i번째 문자가 st1[0]의 문자와 같구
        //i번째 문자열부터 비교하기때문에 조건을 하나 더 추가한다.
        if (str1[0] == str2[i] && i - str1.length() <= -1 ) {
            cnt = 0;
            for (int j = 0; j < str1.length(); j++) {
                if (str1[j] == str2[j+i]) {
                    cnt += 1;
                } else {
                    break;
                }
            }
            if (cnt == str1.length()) {
                answer = 1;
            }
        }
        if ( answer == 1) {
            break;
        }
    }
    return answer;
}