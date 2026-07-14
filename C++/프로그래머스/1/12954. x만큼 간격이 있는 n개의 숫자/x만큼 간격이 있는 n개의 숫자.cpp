#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    long long original = x;
    for(int i=0;i<n;i++){
        answer.push_back(original);
      original +=x;
        
    }
    return answer;
}