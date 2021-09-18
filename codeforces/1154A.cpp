#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     int n1,n2,n3,n4,a,b,c,l;

     cin>>n1>>n2>>n3>>n4;
     int x[]={n1,n2,n3,n4};

     sort(x,x+4);

     a=x[3]-x[2];
     b=x[3]-x[1];
     c=x[3]-x[0];

     cout<<a<<" "<<b<<" "<<c<<endl;


     return 0;
 }
