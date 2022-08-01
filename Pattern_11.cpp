/*Pattern_11 -----

A B C
A B C
A B C

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter Number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    { 
        for(j=1;j<=n;j++)
        {    
            char c='A'+j-1;
            cout<<c<<' ';
        }
        cout<<endl;
    }
}