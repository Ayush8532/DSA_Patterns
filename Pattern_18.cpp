/*Pattern_18 -----
   *
  **
 ***
****

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i=1,j,n,spaces;
    cout<<"Enter Number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {    
        spaces=n-i;
        while(spaces)
        {
            cout<<" ";
            spaces-=1;
        }
        for(j=1;j<=i;j++)
        {    
            cout<<'*';

        }
        cout<<endl;
    }
}