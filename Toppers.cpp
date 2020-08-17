
// Question Link : https://mycode.prepbytes.com/problems/fundamentals/TOPPER


// Solution/Code : 


#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    int arr[n];
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    for(int i=3;i<n;i++){
      arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
    }
    
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
  
  return 0;
}
