#include <string>
#include <vector>

using namespace std;

int visited[201] = {};
int net = 0;

void dfs(vector<vector<int>>& computers, int i) {
    for (int j = 0; j < computers[i].size(); j++) {
        if (visited[j] == 0 && computers[i][j] == 1) {
            visited[j] = 1;
            dfs(computers, j);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < computers[i].size(); j++) {
            if(visited[j] == 0 && computers[i][j] == 1) {
                net ++;
                visited[j] = 1;
                if(j != computers.size() - 1) {
                    dfs(computers, j);
                }
            }
        }
    }
    return net;
}