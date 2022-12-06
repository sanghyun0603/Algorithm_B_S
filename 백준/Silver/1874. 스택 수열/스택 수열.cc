#include <iostream>
#include <stack>
using namespace std;

stack<int> s;
char addminus[200000] = { '0', };
int main(void) {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	int cnt = 1;// n은 1부터 n까지 
	int cntadd = 0; //배열에 넣을 +- idx변수
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int number;
		cin >> number;//들어오는 입력보다 낮으면 전부 스택에넣는다.
		while (cnt <= number) {	
			s.push(cnt);
			addminus[cntadd] = '+';
			cnt++;
			cntadd++;
		}
		if (number == s.top()) {
			//만약 입력값이 스택의 최상단과 같으면
			s.pop(); //빼주고 - 값
			addminus[cntadd] = '-';
			cntadd++;
		}
		else {
			cout << "NO";
			return 0;
		}
	}
	for (int i = 0; addminus[i] == '+' || addminus[i] == '-'; i++) {
		cout << addminus[i] << "\n";
	}

	return 0;
}