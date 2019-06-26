#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        int mini=INT_MAX;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mini=min(mini,arr[i]);
        }
        mini+=k;
        bool b=false;
        for(int i=0;i<n;i++)
        {
            if(abs(mini-arr[i])>k) {
                b=true;
                break;
            }
        }
        if(b) cout<<-1<<endl;
        else cout<<mini<<endl;
    }
    return 0;
}
