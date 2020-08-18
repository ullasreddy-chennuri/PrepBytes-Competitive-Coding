
// Question Link : https://mycode.prepbytes.com/problems/fundamentals/TOYS


// Solution/Code :


#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int d,c,m,p,s,k,n;
  int tc=0;
  cin>>d>>c>>m;
  cin>>p>>s>>k;
  cin>>n;
  int sum1=d+c+m;
  int sum2=p+s+k;
  int count1=sum1/5;
  int rem1=sum1%5;
  int count2=sum2/10;
  int rem2=sum2%10;
  if(rem1>0){
    tc++;
  }
  if(rem2>0){
    tc++;
  }
  
  tc=tc+count1+count2;
  
  if(tc>n){
    cout<<"NO";
  }else{
    cout<<"YES";
  }
  
  return 0;
}
