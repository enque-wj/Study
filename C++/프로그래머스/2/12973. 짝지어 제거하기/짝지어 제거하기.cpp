#include <iostream>
#include<string>
using namespace std;

int solution(string s)
{
    string st = "";
for(char c:s){
    if(st.empty() != 1 && st.back() == c){
        st.pop_back();
    }
    else st.push_back(c);
}
   return st.empty() ? true : false;
    
}