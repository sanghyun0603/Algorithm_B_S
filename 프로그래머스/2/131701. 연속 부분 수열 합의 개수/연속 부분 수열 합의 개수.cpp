#include <string>
#include <vector>
#include <set>
using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    int ele_len = elements.size();
    set<int> s;

    for (int lens = 1; lens <= ele_len; lens++) {
        int sums = 0;

        for (int i = 0; i < lens; i++) {
            sums += elements[i];
        }
        s.insert(sums);

        for (int i = 1; i < ele_len; i++) {
            sums = sums - elements[i - 1] + elements[(i + lens - 1) % ele_len];
            s.insert(sums);
        }
    }

    answer = s.size();
    return answer;
}