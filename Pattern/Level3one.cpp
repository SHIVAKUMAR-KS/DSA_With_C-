
/*
    *
   **
  ***
 ****
*****

#include<iostream>
using namespace std;

int main()
{
             int n;
            cout<<"Enter the number:";
            cin>>n;

            for(int row=1;row<=n;row++){
                        for(int col=1;col<=n-row;col++)
                                    cout<<" ";
                        
                        for(int col=1;col<=row;col++){
                                    cout<<"*";
                        }
                        cout<<endl;
            }
                      
}           
*/

/*

 ENter the numebr:5
        1
      2 2
    3 3 3
  4 4 4 4
5 5 5 5 5


#include<iostream>
using namespace std;
int main()
{
            int row,col;
            int n;
            cout<<"ENter the numebr:";
            cin>>n;
            for( row=1;row<=n;row++){
                        //print space
                        for( col=1;col<=n-row;col++)
                                    cout<<"  ";
                        //print number
                        for( col=1;col<=row;col++)
                                    cout<<row<<" ";
                       cout<<endl;
            } 
            
}
*/

/*
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5

#include<iostream>
using namespace std;
int main()
{
            int row,col;
            int n;
            cout<<"ENter the numebr:";
            cin>>n;
            for( row=1;row<=n;row++){
                        //print space
                        for( col=1;col<=n-row;col++)
                                    cout<<" ";
                        //print number
                        for( col=1;col<=row;col++)
                                    cout<<row<<" ";
                       cout<<endl;
            } 
            
}
*/

/*
        ENter the numebr:8
              1
            1 2
          1 2 3
        1 2 3 4
      1 2 3 4 5
    1 2 3 4 5 6
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8

#include<iostream>
using namespace std;
int main()
{
            int row,col;
            int n;
            cout<<"ENter the numebr:";
            cin>>n;
            for( row=1;row<=n;row++){
                        //space print
                        for( col=1;col<=n-row;col++)
                        cout<<"  ";
                        //print numebr
                        for( col=1;col<=row;col++)
                         cout<<col<<" ";


                       cout<<endl;
            } 
            
}
*/

/*
   ENter the numebr:8
       1
      1 2
     1 2 3
    1 2 3 4
   1 2 3 4 5
  1 2 3 4 5 6
 1 2 3 4 5 6 7
1 2 3 4 5 6 7 8

#include<iostream>
using namespace std;
int main()
{
            int row,col;
            int n;
            cout<<"ENter the numebr:";
            cin>>n;
            for( row=1;row<=n;row++){
                        //space print
                        for( col=1;col<=n-row;col++)
                        cout<<" ";
                        //print numebr
                        for( col=1;col<=row;col++)
                         cout<<col<<" ";


                       cout<<endl;
            } 
            
}
*/

/*
  ENter the numebr:5
        A
      A B
    A B C
  A B C D
A B C D E

#include<iostream>
using namespace std;
int main()
{
            int row,col;
            int n;
            cout<<"ENter the numebr:";
            cin>>n;
            for( row=1;row<=n;row++){
                        //print spacce
                        for( col=1;col<=n-row;col++)
                                    cout<<"  ";
                        //print number
                        for( char name='A';name<='A'+row-1;name++)
                                    cout<<name<<" ";
                       cout<<endl;
            } 
            
}
*/

/*
  ENter the numebr:5
    A 
   A B 
  A B C 
 A B C D 
A B C D E 
*/

#include<iostream>
using namespace std;
int main()
{
            int row,col;
            int n;
            cout<<"ENter the numebr:";
            cin>>n;
            for( row=1;row<=n;row++){
                        //print spacce
                        for( col=1;col<=n-row;col++)
                                    cout<<" ";
                        //print number
                        for( char name='A';name<='A'+row-1;name++)
                                    cout<<name<<" ";
                       cout<<endl;
            } 
            
}



