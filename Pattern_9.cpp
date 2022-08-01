/*Pattern_9 -----

1
2 1
3 2 1
4 3 2 1

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter Number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        //int val=i;
        for(j=1;j<=i;j++)
        {    
           // cout<<val<<' ';
           // val+=1; 
            cout<<i-j+1<<' ';
        }
        cout<<endl;
    }
}