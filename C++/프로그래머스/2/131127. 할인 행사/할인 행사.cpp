#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    
    map<string,int> wantmap;
    for(int i = 0;i<want.size();i++){
        wantmap[want[i]] = number[i];
    }
    
    for(int i = 0;i<= (int)discount.size() - 10;i++){
        map<string, int>discountmap;
        
        for(int j =i;j < i+10;j++){
            discountmap[discount[j]]++;
        }
     
        
       if(wantmap == discountmap){
            answer ++;
    }
        
    }
    
    
    return answer;
}