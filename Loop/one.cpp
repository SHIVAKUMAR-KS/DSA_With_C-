

//print 101 to 200

/*
#include<iostream>
using namespace std;

int main(){

           for(int i=101;i<=200;i++){
            cout<<i<<endl;
           } 
}
*/


/*//print  a to z
#include<iostream>
using namespace std;

int main(){
           
           for(char name='a';name<='z';name++){
            cout<<name<<endl;
           } 
}
*/

/*
//Reverse the integer
#include<iostream>
using namespace std;

int main(){
            int n;
            cout<<"Enter the number:";
            cin>>n;

           for(int i=n;i>=1;i--){
            cout<<i<<endl;
           } 
}
*/


/*//Print Ap series
#include<iostream>
using namespace std;

int main(){

           for(int i=1;i<=100;i=i+3){
            cout<<i<<endl;
           } 
}
*/


/*
//print the table
#include<iostream>
using namespace std;

int main(){
            int n;
            cout<<"Enter the number:";
            cin>>n;

//            for(int i=1;i<=10;i++){
//             cout<<n<<"*"<<i<<"="<<n*i<<endl;
//            } 

            for(int i=n;i<=10*n;i=i+n){
                        cout<<i<<" ";
            }
}
*/

/*
//Power
#include<iostream>
using namespace std;

int main(){

           int n,pow,num;
           cout<<"Enter the number:";
           cin>>n;
           cout<<"Enter the power:";
           cin>>pow;


           num=n;
           for(int i=1;i<pow;i++)
           {
            num=num*n;
           }
           cout<<num;

            
}
*/


/*//sum of n natural number

#include<iostream>
using namespace std;

int main(){

           int n;
           cout<<"Enter  the number;";
            cin>>n;

            // int sum=0;

            // for(int  i=1;i<=n;i++)
            // {
            //             sum=sum+i;
            // }
            // cout<<sum;

            
                      cout<< n*(n+1)/2;
           

}
*/

/*
//sum of square of natural number

#include<iostream>
using namespace std;

int main(){

            int n;
            cin>>n;

            cout<<(n*(n+1)*(n+2))/2;
}
*/

/*
//factorial
#include<iostream>
using namespace std;

int main(){

            int n;
            cin>>n;
            long long fact=1;

            for(int i=1;i<=n;i++)
            {
                        fact=fact*i;
            }
            cout<<fact;
}
*/

/*
//prime number

#include<iostream>
using namespace std;

int main(){

            int n;
            cout<<"Enter the number:";
            cin>>n;
            
            if(n<2)
            {
                        cout<<"Not a prime Number";
                        return 0;
            }
            else{
                        for(int i=2;i<n;i++)
                        {
                                    if(n%i==0)
                                    {
                                                cout<<"Not a prime number";
                                                return 0;
                                    }
                        }
                        cout<<"Prime numebr";
            }

            return 0;

            
}
*/

//fibonnaci series

#include<iostream>
using namespace std;

int main(){

            int n;
            cin>>n;

            cout<<(n*(n+1)*(n+2))/2;
}