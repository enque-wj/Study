using namespace std;

long long solution(int price, int money, int count)
{
    long long result = 0;
  for(int n = 1; n<=count; n++){
      result += price * n;
  }
if((money - result) >= 0){
    return 0;
}
    return result - money;
   
}