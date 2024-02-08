#include <string>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    set<string> word;
    int cnt = 0;
    for(int i = 0; i < words.size(); i++) {
        if(i % n == 0) cnt ++; // 차례
        if(word.find(words[i]) != word.end()) {
            answer.push_back(i % n + 1);
            answer.push_back(cnt);
            break;
        } else {
            word.insert(words[i]);
        }
        if(i > 0) {
            if(words[i][0] != words[i-1][words[i-1].size() - 1]) {
                answer.push_back(i % n + 1);
                answer.push_back(cnt);
                break;
            }
        }
    }
    if(answer.empty()) {
        answer.push_back(0);
        answer.push_back(0);
    }
    return answer;
}