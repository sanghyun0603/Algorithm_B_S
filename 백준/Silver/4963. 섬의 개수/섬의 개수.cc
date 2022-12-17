#include <iostream>
#include <queue>
#include <algorithm>

int w, h;
int arr[52][52];
int visited[52][52];
int di[8] = { 1,-1,0,0,-1,1,-1,1};
int dj[8] = { 0,0,1,-1,1,1,-1,-1 };
int g_cnt = 0;

void bfs(int x, int y)
{
	std::queue<std::pair<int, int>> q;
	q.emplace(x, y);
	visited[x][y] = 1;
	while (!q.empty())
	{
		int i = q.front().first;
		int j = q.front().second;
		q.pop();
		for (int k = 0; k < 8; k++)
		{
			int ni = i + di[k];
			int nj = j + dj[k];
			if (ni >=0 && ni < h && nj >= 0 && nj < w && arr[ni][nj] == 1 && visited[ni][nj] == 0)
			{
				visited[ni][nj] = 1;
				q.emplace(ni, nj);
			}
		}
	}
}

int main(void)
{
	while (true)
	{
		g_cnt = 0;
		std::cin >> w >> h;
		if (w == 0 && h ==0)
		{
			return 0;
		}
		std::fill(&visited[0][0], &visited[h - 1][w], 0);
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				std::cin >> arr[i][j];
			}
		}
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				if (arr[i][j] == 1 && visited[i][j] == 0)
				{
					bfs(i, j);
					g_cnt += 1;
				}
			}
		}
		std::cout << g_cnt << '\n';
	}

	return 0;
}