#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    vector<int> v;

	int N;
	cin >> N;

	int num;

	for (int i = 0; i < N; ++i) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; ++i) {
		cout << v[i] << '\n';
	}

	return 0;
}