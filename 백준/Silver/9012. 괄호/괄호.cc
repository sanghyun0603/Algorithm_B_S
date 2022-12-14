#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	for (int k = 0; k < N; k++)
	{
		stack <char> s;
		string inp;
		cin >> inp;
		for (int i = 0; i < inp.length(); i++)
		{
			if (inp[i] == '(')
			{
				s.push(inp[i]);
			}
			else
			{
				if (s.empty() || s.top() != '(')
				{
					s.push(inp[i]);
					break;
				}
				else
				{
					s.pop();
				}
			}
		}
		if (s.empty())
		{
			cout << "YES" << '\n';
		}
		else
		{
			cout << "NO" << '\n';
		}
	}
	
	return 0;
}