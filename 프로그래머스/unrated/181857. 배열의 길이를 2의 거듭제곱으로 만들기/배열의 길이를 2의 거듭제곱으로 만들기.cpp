#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    while((arr.size() & (arr.size() - 1)) != 0) {
        arr.push_back(0);
    }
    return arr;
}