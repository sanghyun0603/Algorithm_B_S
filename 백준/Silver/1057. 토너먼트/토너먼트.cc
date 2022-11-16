#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	int N;
	double p1, p2;
	cin >> N >> p1 >> p2;
	
	int cnt = 0;

	while(p1 != p2){
		p1 = ceil(p1/2);
		p2 = ceil(p2/2);
		cnt += 1;
	}
	
	cout << cnt;
	
	return 0;
}