#include<bits/stdc++.h>

using namespace std;

#define p printf

#define s scanf

#define ll long long

#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


#define np std::string::npos

int main()

{
    int n,k;
    while(cin>>n>>k)
    {
        vector<int>bal;
        int c=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a>0 && i<=(k-1)) c++;
            bal.pb(a);
        }
        int j=k;
        while(bal[j]==bal[k-1] && bal[j]>0) {c++;j++;}
        cout<<c<<endl;
    }

    return 0;

}

