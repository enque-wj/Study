#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    
    for(long long k = left;k<= right;k++){
        long long r = k /n;
        long long c = k % n;
        
        int val = max(r,c) + 1;
        answer.push_back(val);
    }
    return answer;
}