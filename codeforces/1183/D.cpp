#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=1;i<=n;i++){
            arr[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            arr[a]++;
        }

        vector<int>vec;
        for(int i=1;i<=n;i++){
            if(arr[i]>0) vec.push_back(arr[i]);
            //cout<<arr[i]<<endl;
        }
        sort(vec.begin(),vec.end());
        reverse(vec.begin(),vec.end());
        long long  ans=vec[0];
        int i=1;
        vec[0]--;
        while(vec[0]>0&&i<vec.size()){

                ans+=min(vec[0],vec[i]);
                vec[0]=min(vec[0],vec[i]);

            vec[0]--;
            i++;
        }
        cout<<ans<<endl;

    }
    return 0;
}
