
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int top = 0;
		string s;
		cin >> s;
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == '(')
			{
				top += 1;
			}
			else if (s[j] == ')')
			{
				top -= 1;
			}
			if (top < 0)
			{
				break;
			}
		}
		if (top == 0)
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