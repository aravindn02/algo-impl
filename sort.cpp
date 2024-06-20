#include<bits/stdc++.h>
#include<ctime>
using namespace std;
void print(long long int arr[])
{
for(long long int i=0;i<10;i++)
cout<<arr[i]<<" ";
cout<<endl;
}
int main()
{long long int arr[100000];
for(long long int i=99999,j=0;i>=0,j<100000;i--,j++)
arr[j]=i;
cout<<"Before Sorting="<<endl;
print(arr);

time_t now=time(0);
/*for(long long int i=1;i<100000;i++)
{
 long long int curr=arr[i];
 long long int j=i-1;
 while(arr[j]>curr && j>=0)
 {
  arr[j+1]=arr[j];
  j--;
 }
 arr[j+1]=curr;
}*/
for(long long int i=1;i<10000;i++)
for(long long int j=0;j<i;j++)
if(arr[i]<arr[j])
{
long long int temp=arr[j];
arr[j]=arr[i];
arr[i]=temp;
}
time_t now2=time(0);
cout<<"After Sorting="<<endl;
print(arr);
cout<<"Difference is:"<<now2-now<<endl;
return 0;
}


