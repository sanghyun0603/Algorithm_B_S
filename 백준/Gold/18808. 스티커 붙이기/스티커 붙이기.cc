#include <iostream>
#include <vector>

using namespace std;

int arr[41][41] = {};     // 모눈종이
int sticker[11][11] = {}; // 스티커
int r, c;                 // 스티커영역

void rotate()
{
    int temp[11][11] = {};
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            temp[i][j] = sticker[i][j];
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            sticker[i][j] = temp[r - 1 - j][i];
        }
    }
    int t = r;
    r = c;
    c = t;
}

int checking(int x, int y)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[x + i][y + j] == 1 && sticker[i][j] == 1)
            {
                return 0;
                // 스티커 이미잇슴
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (sticker[i][j] == 1)
            {
                arr[x + i][y + j] = 1;
            }
        }
    }
    // 스티커붙이고
    return 1;

    return 0;
}

int main()
{

    int N, M, K; // N 세로, M 가로, K 스티커의 개수
    cin >> N >> M >> K;
    for (int st = 0; st < K; st++)
    {
        cin >> r >> c;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> sticker[i][j];
            }
        } // 스티커 정보받기
        // 4번의 로테이션 for문
        for (int rt = 0; rt < 4; rt++)
        {
            int check = 0; // 스티커 여부
            for (int i = 0; i <= N - r; i++)
            {
                if (check == 1)
                    break;
                for (int j = 0; j <= M - c; j++)
                {
                    // equal해야 정확하게 비교
                    // 스티커 여부확인후 가능하면 붙이기
                    check = checking(i, j);
                    if (check == 1)
                        break;
                }
            }
            if (check == 1)
                break;
            // 아니면 90도 시계방향 회전.
            rotate();
        }
    }
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] == 1)
                cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}

// 제일 먼저 스티커 정보 저장할곳..을 만든다.
// 어차피 순서대로 붙여야만한다.
// 그럼 받을때마다 붙이면될듯...?