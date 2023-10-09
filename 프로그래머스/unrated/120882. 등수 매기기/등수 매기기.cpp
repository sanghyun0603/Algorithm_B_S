#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    int rank = 0;
    int same = 0;
    vector<pair<double,int>> aver;
    vector<pair<int,int>> ranks;
    for(int i = 0; i < score.size(); i++) {
        double avg = (score[i][0] + score[i][1]) / 2.0;
        aver.push_back(make_pair(avg,i));
    }
    sort(aver.begin(),aver.end(), greater<>());
    for(int i = 0; i < aver.size(); i++) {
        if(i == 0 || aver[i].first != aver[i-1].first) {
            rank += 1 + same;
            ranks.push_back(make_pair(aver[i].second,rank));
            same = 0;
        } else {
            ranks.push_back(make_pair(aver[i].second,rank));
            same ++;
        }
    }
    sort(ranks.begin(),ranks.end());
    for(int i = 0; i < ranks.size(); i++) {
        answer.push_back(ranks[i].second);
    }
    return answer;
}