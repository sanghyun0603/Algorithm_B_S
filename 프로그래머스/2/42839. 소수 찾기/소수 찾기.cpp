#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;

int solution(string numbers) {
    int answer = 0;
    int flag = 1;
    int so = 0;
    set<int> s;
    sort(numbers.begin(),numbers.end());
    do {
        for(int i = 1; i < numbers.length() + 1; i++) {
            so = stoi(numbers.substr(0,i));
            if(so == 0 || so == 1) {
                flag = 0;
            } else {
                for(int i =2; i <= sqrt(so); i++) {
                    if(so % i == 0) {
                        flag = 0;
                        break;
                    }
                }
            }
            if(flag) {
                s.insert(so);
            }
            flag = 1;
        }
    } while(next_permutation(numbers.begin(),numbers.end()));
    
    return s.size();
}