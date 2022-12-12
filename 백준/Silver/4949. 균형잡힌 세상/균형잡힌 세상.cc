#include <iostream>
#include <stack>
#include <string>
using namespace std;
//파이썬 풀이후 c++풀이
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	while (true)
	{
		stack<char> s;
		string inputs;//한줄입력 고생함.
		getline(cin, inputs);
		if (inputs == ".")
		{
			break;
		}
		for (int i = 0; i < inputs.length(); i++)
		{
			if (inputs[i] == '[' || inputs[i] == '(')
			{
				s.push(inputs[i]);
			}
			else if (inputs[i] == ']')
			{
				if (!s.empty() && s.top() == '[')
				{
					s.pop();
				}
				else
				{
					s.push('1');
				}
			}
			else if (inputs[i] == ')')
			{
				if (!s.empty() && s.top() == '(')
				{
					s.pop();
				}
				else
				{
					s.push('1');
				}
			}
		}
		if (s.empty())
		{
			cout << "yes" <<'\n';
		}
		else
		{
			cout << "no" << '\n';
		}
	}
	return 0;
}