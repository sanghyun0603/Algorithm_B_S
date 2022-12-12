#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	stack<char> s;
	char inputs[32] = { 0, };
	int res = 0;//최종값
	int temp = 1; //중간계산값
	int flag = 1; //중간에 괄호 안맞을시 구분지을 변수
	cin >> inputs;
	for (int i = 0; inputs[i] != 0; i++)
	{
		if (inputs[i] == '(' || inputs[i] == '[')
		{
			if (inputs[i] == '(')
			{
				temp *= 2;
				s.push(inputs[i]);
			}
			else
			{
				temp *= 3;
				s.push(inputs[i]);
			}
		}
		else
		{
			if (inputs[i] == ')')
			{
				//닫힌괄호인데 스택이 비어있거나 top과 일치하지않으면 나가리
				if (s.empty() || s.top() != '(' )
				{
					flag = 0;
					break;
				}
				else
				{
					if (inputs[i-1] == '(')
					{
						res += temp;
					}
					temp /= 2;
					s.pop();
				}
			}
			else
			{
				if (s.empty() || s.top() != '[')
				{
					flag = 0;
					break;
				}
				else
				{
					if (inputs[i - 1] == '[')//하나에 대한 괄호 계산이 끝났을경우에만
					{
						res += temp;// 더해준다.
					}
					temp /= 3;
					s.pop();
				}
			}
		}
	}
	// flag가 0이거나 스택에 괄호가 남아 있다면 잘못된 계산
	if (flag == 0 || !s.empty())
	{
		cout << 0;
	}
	else
	{
		cout << res;
	}
	return 0;
}