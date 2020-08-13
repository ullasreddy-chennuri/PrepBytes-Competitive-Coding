// Question Link : https://mycode.prepbytes.com/problems/fundamentals/PATTERN3


// Solution/Code:


#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  char c;
  cin>>c;
  for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=10-(2*i);k>=1;k--){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
    cout<<endl;
  }
  return 0;
}
