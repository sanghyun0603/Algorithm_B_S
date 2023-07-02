#include <iostream>
#include <queue>
using namespace std;

#define MAX_N 50

int front, rear;
pair<int, int> q[MAX_N * MAX_N];
int maze[MAX_N][MAX_N];

void enqueue(pair<int, int> gil) {
    rear++;
    q[rear] = gil;
}

pair<int, int> dequeue() {
    front++;
    return q[front];
}

int bfs(int i, int j, int N) {
    int visited[MAX_N][MAX_N] = {0};
    enqueue(make_pair(i, j));
    visited[i][j] = 1;
    int di[] = {0, 1, 0, -1};
    int dj[] = {1, 0, -1, 0};
    while (front != rear) {
        pair<int, int> current = dequeue();
        int a = current.first;
        int b = current.second;
        if (maze[a][b] == 3) {
            return visited[a][b] - 2;
        }
        for (int k = 0; k < 4; k++) {
            int ni = a + di[k];
            int nj = b + dj[k];
            if (0 <= ni && ni < N && 0 <= nj && nj < N && maze[ni][nj] != 1 && visited[ni][nj] == 0) {
                enqueue(make_pair(ni, nj));
                visited[ni][nj] = visited[a][b] + 1;
            }
        }
    }
    return 0;
}

int main() {
    int T, N;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        cin >> N;
        front = rear = -1;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                char c;
                cin >> c;
                maze[i][j] = c - '0';
            }
        }
        int si = 0, sj = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (maze[i][j] == 2) {
                    si = i;
                    sj = j;
                    break;
                }
            }
        }
        cout << "#" << tc << " " << bfs(si, sj, N) << endl;
    }
    return 0;
}