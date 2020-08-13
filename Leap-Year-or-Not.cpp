// Question Link: https://mycode.prepbytes.com/problems/fundamentals/LEAP

//To find whether the given year is leapyear or not


//Solution

#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n%4==0){
      if(n%100==0){
        if(n%400==0){
          cout<<"Yes"<<endl;
        }
        else{
          cout<<"No"<<endl;
        }
      }
      else{
        cout<<"Yes"<<endl;
      }
    }
    else{
      cout<<"No"<<endl;
    }
  }
  
  return 0;
}



