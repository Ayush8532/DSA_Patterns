/*Pattern_12 -----

A B C
D E F
G H I

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n,count;
    cout<<"Enter Number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    { 
        for(j=1;j<=n;j++)
        {    
            char c='A'+count;
            cout<<c<<' ';
            count+=1;
        }
        cout<<endl;
    }
}