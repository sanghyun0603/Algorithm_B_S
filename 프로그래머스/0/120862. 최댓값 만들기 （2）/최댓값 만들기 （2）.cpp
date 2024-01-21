#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int num1,num2;
    sort(numbers.begin(),numbers.end());
    int lens = numbers.size();
    num1 = numbers[lens-1] * numbers[lens-2];
    num2 = numbers[0] * numbers[1];
    answer = num1 > num2 ? num1 : num2;
    return answer;
}