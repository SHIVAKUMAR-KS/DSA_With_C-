
/*
#include<iostream>
using namespace std;
int main()
{
            int n;
            cout<<"Enter the number:";
            cin>>n;

            int i=1;

            // while(i<=n)
            // {
            //             cout<<i<<endl;
            //             i++;

            // }
            while(i<=n)
            {
                        cout<<n*i<<endl;
                        i++;
            }
}
*/

   /*        //do -while loop
#include<iostream>
using namespace std;
int main()
{
            int n;
            cout<<"Enter the number:";
            cin>>n;
            int i=1;

            // do{
            //          cout<<i<<endl;
            //             i++;
            // }while(i<=10);
            do{
                     cout<<n*i<<endl;
                        i++;
            }while(i<=10);

            
}
*/ 

/*

//continue and break
#include<iostream>
using namespace std;
int main()
{
//       //break
//       for(int i=1;i<=10;i++){
//             if(i==4)
//             break;
//             cout<<i<<" ";//1 2 3
//       }

       //break
//       for(int i=1;i<=10;i++){
//             if(i==4)
//             continue;
//             cout<<i<<" ";// 1 2 3 5 6 7 8 9 10
//       } 

      for(int i=1;i<=100;i++){
            if(i%4==0)
            continue;
            cout<<i<<" ";
      } 

}

*/


            //switch
#include<iostream>
using namespace std;
int main()
{
     int i;
     cout<<"Enter the number:";
     cin>>i;

     switch (i)
     {
     case 1:
            cout<<"sunday";
            break;
     case 2:
            cout<<"monday";
            break;
     case 3:
            cout<<"tuesday";
            break;
     case 4:
            cout<<"wednesday";
            break;
     case 5:
            cout<<"thursday";
            break;
     case 6:
            cout<<"friday";
            break;
     case 7:
            cout<<"saturday";
            break;
     
     default:
            cout<<"Invalid day";
            
     }  
}