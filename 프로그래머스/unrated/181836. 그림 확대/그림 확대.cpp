#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    int row = picture.size();
    int col = picture[0].size();
    int krow = k * row;
    int kcol = k * col;
    //먼저 늘어난 행을 만든다.
    
    for(int i = 0; i < row; i++) {
        string ar;
        for(int j = 0; j < col; j++) {
            for(int w = 0; w < k; w++) {
                ar += (picture[i][j]);
            }
        }
        for(int w = 0; w < k; w++) {
            answer.push_back(ar);
        }
    }
    return answer;
}