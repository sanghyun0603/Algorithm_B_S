#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int gob = 1;
    int sumje = 0;
    for(int i = 0; i < num_list.size(); i++) {
        gob *= num_list[i];
        sumje += num_list[i];
    }
    sumje = sumje * sumje;
    return gob < sumje ? 1 : 0;
}