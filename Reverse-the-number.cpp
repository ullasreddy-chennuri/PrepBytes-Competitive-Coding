//Question Link: https://mycode.prepbytes.com/problems/fundamentals/RVSREUM


//Reverse the given number and print


//Solution 

#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int n,rem,sum=0;
  cin>>n;
  while(n){
    rem=n%10;
    n=n/10;
    sum=sum*10+rem;
  }
  cout<<sum;
  return 0;
}
