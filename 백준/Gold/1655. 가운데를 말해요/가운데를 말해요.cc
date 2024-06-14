#include <iostream>
#include <queue>

using namespace std;
// 처음생각
// 우선순위 큐 compare에서 해결이 가능할까?
// 검색한결과 불가능 내림차순 오름차순 정돈 가능해도
// 큐하나로 꺼내서 매번 중간값 구하기 -> 시간 0.1초라 안되고
// 이러면 pq안쓰고 매번정렬해도 됨
// 중간값을 어떻게 찾을 수 있을까 pq 두개를 써보자
// cout 동일하게 계속 중간값이 나와야함
// 최대힙에서 중간값이 나와야한다
// 최소힙에선 중간값이 나올수없다.
// 최대힙 1,2,3,4,5.... 최소힙 6,7,......이런식으로
// 중간갑을 찾아야한다.
// 3개이상일때부턴 최대힙이 최소힙보다 같거나 1 커야한다.
// 더 크면 중간값이 아니게됨.
// 홀수일땐 최대힙이 최소힙보다 1 크고
// 짝수일땐 최대힙이랑 최소힙의 size는 같다.
// 그럼 이제 어떻게 넣을것인가.
// 처음엔 무조건 최대힙에 넣는다.
// 두번째 -> 값비교해서 넣기
// 세번째이후론 maxpq에 넣고 값비교, 사이즈비교.

int main()
{
    ios::sync_with_stdio(false);
    priority_queue<int, vector<int>, greater<int>> minpq;
    priority_queue<int, vector<int>> maxpq;
    cin.tie(0);
    int n;
    cin >> n;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (i == 0)
        {
            maxpq.push(num);
        }
        else if (i == 1)
        {
            if (num > maxpq.top())
                minpq.push(num);
            else
            {
                minpq.push(maxpq.top());
                maxpq.pop();
                maxpq.push(num);
            }
        }
        else
        {
            // 세번째이후
            maxpq.push(num);
            if (maxpq.top() > minpq.top())
            {
                minpq.push(maxpq.top());
                maxpq.push(minpq.top());
                minpq.pop();
                maxpq.pop();
            }
            if (maxpq.size() - minpq.size() > 1)
            {
                minpq.push(maxpq.top());
                maxpq.pop();
            }
        }
        cout << maxpq.top() << '\n';
    }
}