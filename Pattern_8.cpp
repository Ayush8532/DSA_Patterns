/*Pattern_8 -----

1
2 3
3 4 5
4 5 6 7

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter Number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
       // int val=i;
        for(j=1;j<=i;j++)
        {    
            //cout<<val<<' ';
            //val+=1;  
            cout<<i+j-1<<" ";
        }
        cout<<endl;
    }
}