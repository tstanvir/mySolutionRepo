#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
//#define mp make_pair
#define PII pair<int, int>
#define pf printf

#define sf scanf

#define ALL(x) x.begin(),x.end()
#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0);
#define np std::string::npos
typedef long long ll;


//this fuction sorts vector pair according to first element in descending order.
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}

int main()

{
	IOS;
    int n,m;
    while(cin>>n>>m)
    {
        unordered_map<int,int>mp;
        int j=1;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mp[a]=j;
            j++;
        }
        vector<pair<int,int> >v;
        for(int i=0;i<m;i++)
        {
            int a;
            cin>>a;
            if(mp[a]>0)
            {
                v.pb(make_pair(mp[a],a));
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++) cout<<v[i].second<<" ";
        cout<<endl;

    }
	 return 0;

}

