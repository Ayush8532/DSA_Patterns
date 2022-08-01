/*Pattern_15 -----

A
B C 
D E F

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n;
    char c='A';
    cout<<"Enter Number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    { 
        for(j=1;j<=i;j++)
        {    
            cout<<c<<' ';
            c+=1;
        }
        cout<<endl;
    }
}