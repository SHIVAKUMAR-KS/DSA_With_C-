/*

1 4 9 16
1 4 9 16
1 4 9 16
 
#include<iostream>
using namespace std;

int main(){
            for(int row=1;row<=5;row++){
                        for(int col=1;col<=5;col++){
                                    cout<<col*col<<" ";
                        }
                        cout<<endl;
            }
            
}
*/
/*
1 8 27 64 125
1 8 27 64 125
1 8 27 64 125


#include<iostream>
using namespace std;

int main(){
            for(int row=1;row<=5;row++){
                        for(int col=1;col<=5;col++){
                                    cout<<col*col*col<<" ";
                        }
                        cout<<endl;
            }
            
}
*/

/*
 a a a a a
 b b b b b
 c c c c c
 d d d d d 
 e e e e e


#include<iostream>
using namespace std;

int main(){
            for(int row=1;row<=5;row++){
                        char name ='a' + row-1;
                        for(int col=1;col<=5;col++){
                              cout<<name<<" ";      
                        }
                        cout<<endl;
            }
            
}
*/
/*
a b c d e
a b c d e
a b c d e


#include<iostream>
using namespace std;

int main(){
            for(int row=1;row<=5;row++){
                        char name ='a' + row-1;
                        for(char col='a';col<='e';col++){
                              cout<<col<<" ";      
                        }
                        cout<<endl;
            }
            
}
*/

/*

1 2 3 4 5
6 7 8  9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25


 
#include<iostream>
using namespace std;

int main(){
            int count=1;
            for(int row=1;row<=5;row++)
            {
                        for(int col=1;col<=5;col++)
                        {
                                    cout<<count<<" ";
                                    count++;
                        }
                        cout<<endl;
            }
            
}
*/