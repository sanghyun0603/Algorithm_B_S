#include <iostream>
#include <queue>
#include <algorithm>
int N, M, K;
int arr[1002][1002];
int visited[1002][1002][11];
int di[4] = { 1,-1,0,0 };
int dj[4] = { 0,0,1,-1 };
int bfs()
{
	std::queue<std::pair<std::pair<int, int>, int>> q;
	q.emplace(std::make_pair(0, 0), K);
	visited[0][0][K] = 1;
	while (!q.empty())
	{
		int x = q.front().first.first;
		int y = q.front().first.second;
		int bk = q.front().second;
		q.pop();
		if (x == N - 1 && y == M - 1)
		{
			return visited[x][y][bk];
		}
		for (int i = 0; i < 4; i++)
		{
			int ni = x + di[i];
			int nj = y + dj[i];
			if (ni >= 0 && ni < N && nj >= 0 && nj < M)
			{
				if (arr[ni][nj] == 1 && bk != 0 && visited[ni][nj][bk-1] ==0)
				{
					visited[ni][nj][bk - 1] = visited[x][y][bk] + 1;
					q.emplace(std::make_pair(ni, nj), bk -1);
				}
				else if (arr[ni][nj] == 0 && visited[ni][nj][bk] == 0)
				{
					visited[ni][nj][bk] = visited[x][y][bk] + 1;
					q.emplace(std::make_pair(ni, nj), bk);
				}
			}
		}
	}
	return -1;
}

int main(void)
{
	int res = 0;
	int mins = 1000000;
	std::cin >> N >> M >> K;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
		    scanf("%1d", &arr[i][j]);
		}
	}
	res = bfs();
	std::cout << res << '\n';



	return 0;
}