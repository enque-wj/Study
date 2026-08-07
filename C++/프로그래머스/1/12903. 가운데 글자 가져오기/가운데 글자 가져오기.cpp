#include <string>
#include <vector>

using namespace std;

string solution(string s) {
   string temp = "";
    int length = s.length();
    if(s.length() % 2 == 0){
       for(int i = 0;i<2;i++){
           temp += s[length/2 - 1 + i];
           
       }
  
        
   }
    else if(length % 2 == 1){
        temp += s[length/2];
      
    }
    return temp;
}