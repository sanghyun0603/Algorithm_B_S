#include <iostream>
#include <string>
using namespace std;

int main() {

	string st;
	cin >> st;

	int cnt = 0;
	for (int i = 0; i < st.length(); i++) {
		if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u') {
			cnt++;
		}
	}
	cout << cnt << '\n';

}