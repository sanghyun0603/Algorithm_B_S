#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> st;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '(') {
            st.push(s[i]);
        } else {
            if(!st.empty() && st.top() == '(') {
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
    }
    if(!st.empty()) {
        answer = false;
    }

    return answer;
}