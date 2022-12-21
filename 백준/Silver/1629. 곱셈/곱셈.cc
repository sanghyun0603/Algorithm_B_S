#include <iostream>

long long a, b, c, val;


long long gohb(long long a, long long b, long long c)
{
	if (b == 1)
	{
		return a % c;
	}
	else
	{
		val = gohb(a,b/2,c) % c;
		if (b%2 == 0)
		{
			return val * val % c;
		}
		else
		{
			return val * val % c * a % c;
		}
	}
}

int main(void)
{
	std::cin >> a >> b >> c;
	std::cout << gohb(a, b, c) << '\n';
	return 0;
}