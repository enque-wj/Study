#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
 long long result = 0;
    if(a==b){
        result = (long long)a;
        return result;
    }
    if(b>a){ 
       int temp = a;
        a = b;
        b = temp;
        }
    for(int i = 0;i<a-b+1;i++){
        result += b+i;
    }
    return result;
}