#include <string>
#include <vector>
#include <algorithm>
#include <sstream> 

using namespace std;

string solution(string s) {
    stringstream ss(s); 
    vector<int> v;      
    int number;

   
    while (ss >> number) {
        v.push_back(number);
    }


    sort(v.begin(), v.end());



    string answer = to_string(v.front()) + " " + to_string(v.back());
    
    return answer;
}