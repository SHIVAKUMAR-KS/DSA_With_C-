/*   *
    ***
   *****
  *******
 *********
***********
#include<iostream>
using namespace std;

int main()
{
            int row,col;
            int n;
            cout<<"Enter the input:";
            cin>>n;

            for(row=1;row<=n;row++){
                        for(col=1;col<=n-row;col++){
                                    cout<<" ";
                        }
                        for(col=1;col<=2*row-1;col++){
                                    cout<<"*";
                        }
                        cout<<endl;
            }
}
*/

/*Enter the input:5
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
#include<iostream>
using namespace std;

int main()
{
            int row,col;
            int n;
            cout<<"Enter the input:";
            cin>>n;

            for(row=1;row<=n;row++){
                        for(col=1;col<=n-row;col++){
                                    cout<<"  ";
                        }
                        for(col=1;col<=row;col++){
                                    cout<<col<<" ";
                        }
                         for(col=row-1;col>=1;col--){
                                    cout<<col<<" ";
                        }
                        cout<<endl;
            }
}
*/

#include<iostream>
using namespace std;

int main()
{
            int row,col;
            int n;
            cout<<"Enter the input:";
            cin>>n;

            for(row=1;row<=n;row++){
                        for(col=1;col<=n-row;col++){
                                    cout<<"  ";
                        }
                        for(col=1;col<=row;col++){
                                    cout<<col<<" ";
                        }
                         for(col=row-1;col>=1;col--){
                                    cout<<col<<" ";
                        }
                        cout<<endl;
            }
}