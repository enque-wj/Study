#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
  long long p_num = stoll(p);
    
    for(int i = 0 ; i<=t.length()-p.length();i++){
        string sub = t.substr(i,p.length());
        if(stoll(sub) <= p_num){
            answer ++;
        }
    }
    return answer;
}