#include<bits/stdc++.h>
using namespace std;

int fact(int n){
if(n==0)
return 1;
else if(n==1)
return 1;
else
return n*fact(n-1);
}

 int main()
 {int x;
  cout<<"Enter a number to find its factorial:";
  cin>>x;
  cout<<"The factorial is="<<fact(x)<<endl;
  return 0;}
