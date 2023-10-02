#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    for(int i = 0; i < board.size(); i++) {
        for(int j = 0; j < board[0].size(); j++) {
            if(board[i][j] == 1) {
                if(i - 1 > -1 && j - 1 > -1 && board[i-1][j-1] != 1) {
                    board[i-1][j-1] = 2;
                }
                if(i - 1 > -1 && board[i-1][j-1] != 1) {
                    board[i-1][j] = 2;
                }
                if(i - 1 > -1 && j + 1 < board[i].size() && board[i-1][j+1] != 1) {
                    board[i-1][j+1] = 2;
                }
                if(j + 1 < board[i].size() && board[i][j+1] != 1) {
                    board[i][j+1] = 2;
                }
                if(i + 1 < board.size() && j + 1 < board[i].size() && board[i+1][j+1] != 1) {
                    board[i+1][j+1] = 2;
                }
                if(i + 1 < board.size() && board[i+1][j] != 1) {
                    board[i+1][j] = 2;
                }
                if(i + 1 < board.size() && j - 1 > -1 && board[i+1][j-1] != 1) {
                    board[i+1][j-1] = 2;
                }
                if(j - 1 > -1 && board[i][j-1] != 1) {
                    board[i][j-1] = 2;
                }
            }
        }
    }
    for(int i = 0; i < board.size(); i++) {
            for(int j = 0; j < board[0].size(); j++) {
                if(board[i][j] == 0) {
                    answer += 1;
                }
            }
        }
    return answer;
}