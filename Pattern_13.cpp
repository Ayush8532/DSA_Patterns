/*Pattern_13 -----

A B C
B C D
C D E

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter Number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    { 
        char c='A'+i-1;
        for(j=1;j<=n;j++)
        {    
            cout<<c<<' ';
             c='A'+i+j-1;
        }
        cout<<endl;
    }
}