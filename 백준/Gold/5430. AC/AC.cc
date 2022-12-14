#include <iostream>
#include <deque>
#include <string>
using namespace std;
//내가 미처 생각못한 부분 입력배열이 []이면 무조건 에러처리를 하였다.!!!
// 입력배열이 []이어도 명령이 R만 있는 경우는 에러가 아니다!
// 왜냐 문제 조건에서 비어있는 경우에 D를 하였을때만 에러라고 명시했기 때문이다.
int main(void)
{
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int T;
	cin >> T;
	for (int j = 0; j < T; j++)
	{
		deque <int> dq;
		string order ="";
		int len;
		int err = 0;
		string arr = "";
		int swa = 1; //R에 따라 뒤집기 0이면 팝프론트 1이면 팝백
		cin >> order;
		cin >> len;
		cin >> arr;
		string divi = "";
		int arr_length = arr.length();
		for (int i = 1; i < arr_length; i++)
		{
			if (arr[i] == ',' || arr[i] == ']')
			{
				if (arr[1] != ']' )
				{
					int num = stoi(divi);
					divi = "";
					dq.push_back(num);
				}
			}
			else
			{
				divi.push_back(arr[i]);
			}
		}
		int order_length = order.length();
		for (int i = 0; i < order_length; i++)
		{
			if (order[i] == 'R')
			{
				swa = 1- swa;
			}
			else
			{
				if (dq.empty())
				{
					err = 1;
					break;
				}
				else
				{
					if (swa)
					{
						dq.pop_front();
					}
					else
					{
						dq.pop_back();
					}
				}
			}
		}
		if (err == 1)
		{
			cout << "error" << '\n';
		}
		else
		{
			cout << '[';
			if (swa)
			{
				int dq_size = dq.size();
				for (int i = 0; i < dq_size; i++)
				{
					if (i + 1 == dq.size())
					{
						cout << dq[i];
					}
					else
					{
						cout << dq[i] << ',';
					}
				}
			}
			else
			{
				int dq_size = dq.size();
				for (int i = dq_size-1; i > -1; i--)
				{
					if (i == 0)
					{
						cout << dq[i];
					}
					else
					{
						cout << dq[i] << ',';
					}
				}
			}
			cout << "]\n";
		}
		dq.clear();
	}

	return 0;
}