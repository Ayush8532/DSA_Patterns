/*Pattern_17 -----

D
C D 
B C D
A B C D

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
        c='A'+n-i;
        for(j=1;j<=i;j++)
        {    
            cout<<c<<' ';
            c+=1;

        }
        cout<<endl;
    }
}