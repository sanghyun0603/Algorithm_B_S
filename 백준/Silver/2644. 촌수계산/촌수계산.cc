#include <iostream>
using namespace std;

int arr[101][101] = { 0, };
int n;
int p1 , p2 ;
int m;
int visited[101] = { 0, };
int cnt = 1;
void dfs(int v){
	visited[v] += cnt;
	for (int i = 0; i<101 ; i++)
	{
		if (arr[v][i] == 1 && visited[i] == 0)
		{
			cnt++;
			dfs(i);
			cnt--;
			
		}
	}
}
int main(void)
{
	cin >> n;
	cin >> p1 >> p2;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		arr[x][y] = 1;
		arr[y][x] = 1;
	}
	dfs(p1);
	cout << visited[p2] -1;
	return 0;
}