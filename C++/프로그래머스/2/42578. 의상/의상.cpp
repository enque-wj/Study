#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
map<string,int> count;
    
    for(auto item: clothes){
        count[item[1]]++;
    }
    
    int answer = 1;
    
    for(auto m:count ){
        answer *= (m.second+1);
    }
    
    return answer - 1;
}