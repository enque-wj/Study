#include <string>
#include <vector>
#include<map>
#include<algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
 map<int ,int> counts;
    for(int size : tangerine){
        counts[size]++;
    }
    
    vector<int> freq;
    for(auto pair : counts){
        freq.push_back(pair.second);
    }
    sort(freq.rbegin(),freq.rend());
    
    int answer = 0;
    for(int count : freq){
        k -= count;
        answer++;
        if(k <= 0)break;
    }
    return answer;
}

