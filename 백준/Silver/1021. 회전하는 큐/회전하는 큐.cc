#include <iostream>
#include <deque>

int main(void)
{
	std:: deque<int> Q;
	int N, M, inp, position = 0, cnt = 0;
	std:: cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		Q.push_back(i);
	}	
	while (M--)
	{
		std:: cin >> inp;
		for (int i = 0; i < Q.size(); i++)
		{
			if (Q[i] == inp)
			{
				position = i;
				break;
			}
		}
		//앞에서 뺄지 뒤에서 뺄지 정하기
		if (position <= Q.size()/2 )
		{
			while (true)
			{
				if (Q.front() == inp)
				{
					Q.pop_front();
					break;
				}
				cnt += 1;
				Q.push_back(Q.front());
				Q.pop_front();
			} 
		}
		else
		{
			while (true)
			{
				if (Q.front() == inp)
				{
					Q.pop_front();
					break;
				}
				cnt += 1;
				Q.push_front(Q.back());
				Q.pop_back();
			}
		}
	}
	std:: cout << cnt << '\n';
	return 0;
}