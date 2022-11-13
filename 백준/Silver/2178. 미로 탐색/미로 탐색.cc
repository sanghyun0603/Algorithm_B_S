#include <iostream>
#include <deque>
using namespace std;

int arr[101][101] = { 0, };
int visited[101][101] = { 0, };
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };
int N, M;

int bfs(int x, int y)
{
	deque<pair<int,int>> Q;
	Q.push_back(make_pair(x,y));
	while (!Q.empty())
	{
		int x = Q.front().first;
		int y = Q.front().second;
		Q.pop_front();
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && nx < N && ny >= 0 && ny < M && visited[nx][ny] == 0 && arr[nx][ny] == 1)
			{
				visited[nx][ny] = visited[x][y] + 1;
				Q.push_back(make_pair(nx, ny));
			}
		}

	}
	return visited[N - 1][M - 1]+1;
}
int main(void)
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			scanf("%1d", &arr[i][j]);
		}
	}
	cout << bfs(0, 0) << '\n';

	return 0;
}