/*Pattern ---
  
 * * * * *
 *  * * *
 * * *
 * *
 *  
 
 */





#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter Number: ";
    cin>>n;
    for(i=n;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
            cout<<"*"<<' ';            
        }
        cout<<endl;
    }
}