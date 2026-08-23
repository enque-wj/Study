#include <string>
#include <vector>
#include <stack>

using namespace std;


bool isValid(const string& s, int start) {
    stack<char> st;
    int n = s.length();
    
    for (int i = 0; i < n; i++) {
       
        char c = s[(start + i) % n];
        

        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } 
 
        else {
 
            if (st.empty()) return false;
            
            char top = st.top();
            if ((c == ')' && top == '(') ||
                (c == ']' && top == '[') ||
                (c == '}' && top == '{')) {
                st.pop();
            } else {
                return false;
            }
        }
    }
    

    return st.empty();
}

int solution(string s) {
    int answer = 0;
    int n = s.length();
    

    for (int x = 0; x < n; x++) {
        if (isValid(s, x)) {
            answer++;
        }
    }
    
    return answer;
}