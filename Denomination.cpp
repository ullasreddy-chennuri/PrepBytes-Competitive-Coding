
// Question Link : https://mycode.prepbytes.com/problems/arrays/DENOM


// Solution/Code :

#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    int a[]={1,2,5,10,20,50,100,500,1000};
    int l=8;
    int n;
    cin>>n;
    int count=0;
    for(int i=8;i>=0;i--){
      count+= n/a[i];
      n=n%a[i];
    }
    
    cout<<count<<endl;
  }
  
  return 0;
}
