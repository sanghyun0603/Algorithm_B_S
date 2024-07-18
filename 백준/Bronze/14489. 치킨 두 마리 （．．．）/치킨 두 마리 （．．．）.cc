#include <iostream>

using namespace std;

int main()
{
	long long a, b, c;
	cin >> a >> b >> c;
	if (a + b - 2 * c >= 0) cout << a + b - 2 * c << '\n';
	else cout << a + b << '\n';
}