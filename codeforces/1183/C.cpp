#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long  k,n,a,b;
        cin>>k>>n>>a>>b;
        long long  ca;
        long long ans=0;
        if(k<=(n*b)){
            cout<<-1<<endl;
        }
        else{
            ca=(k-(n*b)-1LL);
            ans=ca/(a-b);
            cout<<min(ans,n)<<endl;

        }



    }
    return 0;
}
