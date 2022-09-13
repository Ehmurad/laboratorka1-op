#include<iostream>
using namespace std;
int main()
{
  int a=0;
  cin>>a;
  cout<<(a/100)*((a%100)/10)*(a%10)<<endl;
}