#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;

	int res = 0;
	for ( int k = 0 ; k < N; k++) // N번만큼 반복
	{
		stack<char> stack;
		char word[100001] = { 0, };// 최대 단어길이는 10만을 넘지 않는다.
		cin >> word;

		for (int i = 0; i<100001; i++) {
			if (word[i]==0)// 0이나오면 그 단어는 끝난단어
			{
				break;
			}
			if (stack.empty()) {// 만약 비어있으면 단어를 넣는다.
				stack.push(word[i]);
			}
			else {
				if (stack.top() == word[i]) {//비어있지 않는경우 현재 스택의 맨위와 넣으려는 단어가 같으면
					stack.pop();//빼주고
				}
				else {//아니면 넣는다.
					stack.push(word[i]);
				}
			}
		}

		if (stack.empty()) {//바른단어는 스택이 비어있는 경우이다.
			res++;
		}
	}

	cout << res;
}