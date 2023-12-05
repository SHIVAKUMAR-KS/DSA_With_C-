#include<iostream>
using namespace std;

int sum(int m,int n)
{
            int ans=m+n;
            return ans;
}

int Mul(int m ,int n)
{
            int ans=m*n;
            return ans;
}


void fun()
{
            cout<<"HEllo Ji\n";
}

int main()
{
         int a,b;
         cin>>a>>b;
         //function call
         cout<<sum(a,b)<<endl;;  
         cout<<Mul(a,b)<<endl; 
         fun();
}