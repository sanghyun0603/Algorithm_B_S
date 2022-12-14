#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	char cut[100001] = { 0, };
	cin >> cut;
	int iron = 0;
	int ir = 0;//raser
	int cnt = 0;
	while (cut[ir] != 0)
	{
		if (cut[ir] == '(' && cut[ir+1] == ')')
		{
			cnt += iron;
			ir += 2;
		}
		else if (cut[ir] == '(')
		{
			iron += 1;
			ir += 1;
		}
		else if (cut[ir] == ')')
		{
			iron -= 1;
			cnt += 1; //stick end
			ir += 1;
		}
	}
	cout << cnt << '\n';
	return 0;
}