
// Question Link : https://mycode.prepbytes.com/problems/fundamentals/TWOTEN


// Solution/Code : 


#include <bits/stdc++.h>
using namespace std;


int div2(int n){
  int count=0;
  while(n%10!=0){
    n=n*2;
    count++;
  }
  return count;
}




int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n%10==0){
      cout<<"0"<<endl;
    }
    else if(n%5==0){
      int c=div2(n);
      cout<<c<<endl;
    }else{
      cout<<"-1"<<endl;
    }
  }
  
  return 0;
}
