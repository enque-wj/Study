#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> elements) {
    int n = elements.size();
    unordered_set<int> sum_set;
    
    for (int len = 1; len <= n; len++) {
        for (int i = 0; i < n; i++) {
            int current_sum = 0;
            
            for (int j = 0; j < len; j++) {
                current_sum += elements[(i + j) % n];
            }
            
       
            sum_set.insert(current_sum);
        }
    }
    
    return sum_set.size();
}