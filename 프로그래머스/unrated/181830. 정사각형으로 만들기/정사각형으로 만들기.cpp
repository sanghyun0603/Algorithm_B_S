#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;
    int col = arr[0].size();
    int row = arr.size();
    if(row < col) {
        while(row < col) {
            vector<int> te(col,0);
            arr.push_back(te);
            row++;
        }
    } else if(row > col) {
        int ins = row-col;
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < ins; j++) {
                arr[i].push_back(0);
            }
        }
    }
    return arr;
}