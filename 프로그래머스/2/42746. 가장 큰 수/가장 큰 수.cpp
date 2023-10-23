#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool customsort(string a, string b) {
    if(a + b > b + a) {
        return true;
    } else {
        return false;
    }
}

string solution(vector<int> numbers) {
    vector<string> snumbers;
    string answer = "";
    for(int i = 0; i < numbers.size(); i++) {
        snumbers.push_back(to_string(numbers[i]));
    }
    sort(snumbers.begin(),snumbers.end(),customsort);
    for(int i = 0 ; i < snumbers.size(); i++) {
        if(answer.length() == 0 && snumbers[i] == "0") continue;
        answer += snumbers[i];
    }
    if(answer.length() == 0) answer += snumbers[0];
    
    return answer;
}