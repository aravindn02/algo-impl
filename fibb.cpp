#include<bits/stdc++.h>
using namespace std;
//1,1,2,3,5,8,13,21....

int fibb(int n) //x-number of terms
{
 if(n<=1)
 return n;
 else 
 return fibb(n-1)+fibb(n-2);
}
int main()
{
 int n;
 cout<<"Enter the term whose value you want:";
 cin>>n;
 int result=fibb(n);
 cout<<"The value of "<<n<<" th term="<<result<<endl;
 return 1;
 }
 
