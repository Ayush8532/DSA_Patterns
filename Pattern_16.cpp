/*Pattern_16 -----

A
B C 
C D E
D E F G

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n;
    char c;
    cout<<"Enter Number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    { 
        for(j=1;j<=i;j++)
        {    
            c='A'+i+j-2;
            cout<<c<<' ';

        }
        cout<<endl;
    }
}