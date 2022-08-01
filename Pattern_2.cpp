#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=1,j,n;
    cout<<"Enter Number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>0;j--)
        {
            cout<<j<<' ';            
        }
        cout<<endl;
    }
}