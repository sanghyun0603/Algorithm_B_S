#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";
    for(int i = 0; i < queries.size(); i++) {
        int start = queries[i][0];
        int end = queries[i][1];
        string s = my_string.substr(start,end - start + 1);
        int cnt = 0;
        for(int j = end; j >= start; j--) {
            my_string[j] = s[cnt];
            cnt ++;
        }
    }
    return my_string;
}