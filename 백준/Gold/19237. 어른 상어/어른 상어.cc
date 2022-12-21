#include <iostream>
#include <algorithm>
int N, M, k;
int arr[22][22];
std::pair<int, int> visited[22][22];//상어 번호,채취
std::pair<int, int> tmp_visited[22][22];//한번의 이동 다 끝나기까지 저장할임시배열
int shark[402][5][5]; // 상어 최대, 4방향 4우선순위
int dire[402]; // 상어 현재 방향
std::pair<int,int> posi[402]; // 상어 이동좌표
int di[5] = {0,-1,1,0,0};//위아래왼쪽오른쪽
int dj[5] = {0,0,0,-1,1};

bool dead_shark() {
	for (int i = 2; i <= M; i++)
	{
		if (dire[i] == 0)
		{
			continue;
		}
		return false;
	}
	return true;
}

int main(void)
{
	int cnt = 1;
	int check = 0;
	std::cin >> N >> M >> k;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			std::cin >> arr[i][j];
			if (arr[i][j] != 0)
			{
				posi[arr[i][j]] = std::make_pair(i, j);//상어 좌표저장
				visited[i][j] = std::make_pair(arr[i][j], k);// 상어 번호 채취저장
			}
		}
	}
	for (int i = 1; i <= M; i++)
	{
		std::cin >> dire[i];
	}
	for (int i = 1; i <= M; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			for (int k = 1; k < 5; k++)
			{
				std::cin >> shark[i][j][k];
			}
		}
	}
	while (cnt <= 1000)
	{
		/*for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				std::cout << visited[i][j].first << ',' << visited[i][j].second << " ";
			}
			std::cout << '\n';
		}
		std::cout << "111111111111111111111111111111111111" << '\n';*/
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (visited[i][j].first != 0)
				{
					visited[i][j].second -= 1;
				}
			}
		}//채취 까고 시작후 나중에 0 정리하기
		for (int i = 1; i <= M; i++)
		{
			check = 0; //냄새 없는거 확인
			//상어 죽이는걸 dire[i] = 0 처리 할예정
			if (dire[i] != 0)
			{
				int r = posi[i].first;//이전 좌표 꺼내서
				int c = posi[i].second;
				
				for (int j = 1; j < 5; j++)//냄새 없는 경우
				{
					int ni = r + di[shark[i][dire[i]][j]];//우선순위에 따라서 확인
					int nj = c + dj[shark[i][dire[i]][j]];
					if (ni >= 0 && ni < N && nj >= 0 && nj < N )
					{
						if (visited[ni][nj].first == 0 )
						{
							//아직 냄새가 없을때
							check = 1;
							posi[i] = std::make_pair(ni, nj);//위치 재저장
							dire[i] = shark[i][dire[i]][j];// 방향 재저장
							if (tmp_visited[ni][nj].first == 0)
							{
								tmp_visited[ni][nj] = std::make_pair(i, k);
							}
							else if (tmp_visited[ni][nj].first < i)
							{
								dire[i] = 0;
							}
							else if (tmp_visited[ni][nj].first > i)
							{
								tmp_visited[ni][nj] = std::make_pair(i, k);
							}
							break;// 우선순위 하나 끝나면 끝
						}
						

					}
				}
				if (check == 0) // 4방향 모두 내 냄새나 다른 냄새가 있음.
				{
					int r = posi[i].first;//이전 좌표 꺼내서
					int c = posi[i].second;
					for (int j = 1; j < 5; j++)
					{
						int ni = r + di[shark[i][dire[i]][j]];//우선순위에 따라서 확인
						int nj = c + dj[shark[i][dire[i]][j]];
						if (ni >= 0 && ni < N && nj >= 0 && nj < N)
						{
							if (visited[ni][nj].first == i)
							{
								posi[i] = std::make_pair(ni, nj);//위치 재저장
								dire[i] = shark[i][dire[i]][j];// 방향 재저장
								visited[ni][nj].second = k; // 냄새 초기화
								break;//우선순위 하나 끝나면 끝
							}
						}
					}
				}
			}
		}
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (visited[i][j].first != 0 && visited[i][j].second == 0)
				{
					visited[i][j] = std::make_pair(0, 0);//냄새 없애기
				}
				if (tmp_visited[i][j].first != 0)
				{
					visited[i][j] = std::make_pair(tmp_visited[i][j].first, tmp_visited[i][j].second);
					tmp_visited[i][j] = std::make_pair(0, 0);
				}
			}
		}
		/*for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				std::cout << visited[i][j].first << ',' << visited[i][j].second << " ";
			}
			std::cout << '\n';
		}
		std::cout << "222222222222222222222222222222222222" << '\n';*/
		if (dead_shark())
		{
			break;
		}
		cnt += 1;
	}
	if (cnt == 1001)
	{
		std::cout << -1 << '\n';
	}
	else
	{
		std::cout << cnt << '\n';
	}
	
	return 0;
}
////1,2,3,4 각각 위 아래 왼쪽 오른쪽의미
////방향 우선순위가 상어 당 4줄씩 차례대로 주어짐
///첫줄은 위 두 아래 세번째 왼쪽 네번째 오른쪽 순
// 가장 먼저 나오는 방향이 최우선, 1 3 2 4라면 위 왼쪽 아래 오른쪽