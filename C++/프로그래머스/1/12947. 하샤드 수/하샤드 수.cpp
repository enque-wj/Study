#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum = 0;
   int original_x = x;
    vector <int>digit;
    while(x>0){
        digit.push_back(x%10);
        x = x/10;
    }
    for(int i = 0;i<digit.size();i++){
        sum += digit[i];
    }
    
    if(original_x % sum == 0){
        return answer;
    }
    else {
        answer = 0;
        return answer;
    }
    

}