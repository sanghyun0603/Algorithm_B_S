#include <string>
#include <vector>
#include <set>
using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    int sums = 0;
    int ele_len = elements.size();
    set<int> s;
    for(int lens = 1; lens <= ele_len; lens++) {
        for(int i = 0; i < ele_len; i++) {
            sums = 0;
            for(int j = i; j < lens + i; j++) {
                if(j >= ele_len) sums += elements[j - ele_len];
                else sums += elements[j];
            }
            s.insert(sums);
        }
    }
    answer = s.size();
    return answer;
}