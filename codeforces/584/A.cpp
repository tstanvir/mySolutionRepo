#include<bits/stdc++.h>

using namespace std;

#define p printf

#define s scanf

#define ll long long

#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


int main()

{
    int n,t;
    while(cin>>n>>t)
    {
        if(n==1 && t==10) {cout<<-1<<endl; continue;}
        vector<int>bal;
        if(t==10) t/=10;

        bal.pb(t);
        --n;
        while(n--)
            bal.pb(0);
        for(int i=0;i<bal.size();i++) cout<<bal[i];
        cout<<endl;
    }
    return 0;
}

