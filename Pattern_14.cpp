/*Pattern_14 -----

A
B B 
C C C

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter Number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    { 
        for(j=1;j<=i;j++)
        {    
            char c='A'+i-1;
            cout<<c<<' ';
        }
        cout<<endl;
    }
}