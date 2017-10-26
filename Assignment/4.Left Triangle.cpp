#include<iostream>
using namespace std;
int main()
{

 //Left Triangle pattern using stars
 int k,i,j,space=0;
 cout<<"Enter The Size: ";
 cin>>k;
 space=k;
 for(i=1;i<=k;i++)
 {
  for(j=1;j<=space;j++)
  {
   cout<<" ";
  }
  for(int l=1;l<=i;l++)
  {
   cout<<"*";
  }
  cout<<endl;
  space--;
 }

}
