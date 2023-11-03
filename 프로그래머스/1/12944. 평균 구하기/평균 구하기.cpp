#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int sums = 0;
    for(int i : arr) {
        sums += i;
    }
    return (double)sums/arr.size();
}