#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    int sums = 0;
    int lens = numbers.size();
    for(int i = 0; i < lens; i++) {
        sums += numbers[i];
    }
    answer = sums / float(lens);
    return answer;
}