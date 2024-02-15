#include <string>
#include <vector>
#include <stack>

using namespace std;
//스택활용하면 될거같은데
//문제가 한칸씩 미루는걸 어떻게 할지가..?
//흠...문자열을 한번 더 한뒤 길이만큼 해주면
//그럼 될거같은디?


int solution(string s) {
    int answer = 0;
    int lens = s.length();
    stack<char> st;
    s += s;
    for(int i = 0; i < lens; i++) {
        while(!st.empty()) st.pop();
        for(int j = i; j < lens + i; j++) {
            if(s[j] == '[' || s[j] == '{' || s[j] == '(') st.push(s[j]);
            else{
                if(st.empty()) {
                    st.push(s[j]);
                    break;
                } else {
                    if(st.top() == '[' && s[j] == ']') st.pop();
                    else if(st.top() == '{' && s[j] == '}') st.pop();
                    else if(st.top() == '(' && s[j] == ')') st.pop();
                    else st.push(s[j]);
                }
            }
        }
        if(!st.size()) answer++;
    }
    return answer;
}