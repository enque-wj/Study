#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    vector<char> st;
    for(int i=0;i<s.size();i++){
        st.push_back(s[i]);
    }
    
    sort(st.begin(),st.end(),greater<char>());
    
   for(int i=0;i<s.size();i++){
        answer += st[i];
    }
    return answer;
}