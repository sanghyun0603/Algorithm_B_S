#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    //n = 6을 예로 들면
    //첫줄은 1 ~ 6
    //둘째 2 2 3~6
    //셋째 3 3 3 4~6
    //넷째 4 4 4 4 5~6
    //다섯 5 5 5 5 5 6
    //여섯 6~
    //이차원 배열을 만들어서 자를필요는 없다.
    //마찬가지로 일차원배열도 전부 만들필요는 없다.
    //규칙을 안 이상 left ~ right구간만 만들면됨
    int startRow = left / n;
    int startCol = left % n;
    int endRow = right / n;
    int endCol = right % n;
    for(int i = startRow; i <= endRow; i++) {
        if(i == endRow && i == startRow) {
            int value = i + 1;
            for(int j = startCol; j <= endCol; j++) {
                while(j >= value) value++;
                answer.push_back(value);
            }
        } 
        else if(i == startRow) {
            int value = i + 1;
            for(int j = startCol; j < n; j++) {
                while(j >= value) value++;
                answer.push_back(value);
            }
        }
        else if(i == endRow ) {
            int value = i + 1;
            for(int j = 0; j <= endCol; j++) {
                while(j >= value) value++;
                answer.push_back(value);
            }
        } 
        else {
            int value = i + 1;
            for(int j = 0; j < n; j++) {
                while(j >= value) value++;
                answer.push_back(value);
            }
        }
    }
    return answer;
}