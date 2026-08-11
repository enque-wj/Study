#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    unordered_set<string> used_words;
    
    used_words.insert(words[0]);
    
    for(int i =0;i<words.size()-1;i++){
        string current_words = words[i];
        string next_words = words[i+1];
        
        if(current_words.back() != next_words.front() || used_words.count(next_words)>0){
            int index = i + 1;
            
            return {(index % n)+1,(index/n)+1};
        }
        used_words.insert(next_words);
    }
    
   
    
    


    return {0,0};
}