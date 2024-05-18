#include <iostream>

using namespace std;

int main() {
	int n, count = 0;
	cin >> n;
	if (n % 5 == 0)
		cout << n / 5 << '\n';
	else
		while (n > 0) {
			n -= 2;
			count++;
			if (n % 5 == 0) {
				cout << count + n / 5 << '\n';
				break;
			}
		}
	if (n < 0)
		cout << -1 << '\n';
	return 0;
}