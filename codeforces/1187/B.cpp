#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>arr[26];
    for(int i=0;i<n;i++)
    {
        arr[s[i]-'a'].pb(i+1);
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        string ss;
        cin>>ss;
        int trr[26];
        ms(trr);
        vector<int>vec;
        for(int i=0;i<ss.size();i++)
        {
            vec.pb(arr[ss[i]-'a'][trr[ss[i]-'a']]);
            trr[ss[i]-'a']++;
        }
        sort(vec.begin(),vec.end(),greater<int>());
        cout<< vec[0]<<endl;
    }
    return 0;
}

