#include <iostream>
#include <string>

using namespace std;

int main()
{
	int count = 0;
	float sum = 0;
	float grades[9] = { 0 };
	string str[9] = { "A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F"};

	for (int i = 0; i < 20; i++)
	{
		float score;
		string grade, name;

		cin >> name >> score >> grade;

		if (grade == "P")
		{
			continue;
		}

		count += score;

		float num = 5.0;
		for (int i = 0; i < 9; i++)
		{
			num -= 0.5;
			if (grade == str[i])
			{
				grades[i] += num * score;
				break;
			}
		}
	}

	grades[8] = 0;

	for (int i = 0; i < 8; i++)
		sum += grades[i];

	cout << sum / (count);
}