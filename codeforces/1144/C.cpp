#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
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
	int n;
	while(cin>>n)
    {
        vector<int>v;
        map<int,int>m;
        while(n--)
        {
            int a;
            cin>>a;
            v.pb(a);
            m[a]++;
        }
        sort(ALL(v));
        bool b=false;
        for(int i=0;i<v.size();i++)
        {
            if(m[v[i]]>2)
            {
                cout<<"NO"<<endl;
                b=true;
                break;
            }
        }
        if(b) continue;
        else
        {
            cout<<"YES"<<endl;
            vector<int>dec;
            for(int i=0;i<v.size();)
            {
                if(m[v[i]]==2)
                {
                    dec.pb(v[i]);
                    m[v[i]]--;
                    v.erase(v.begin()+i);
                }
                else i++;
            }
            cout<<v.size()<<endl;
            for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
            cout<<endl;
            cout<<dec.size()<<endl;
            for(int i=dec.size()-1;i>=0;i--) cout<<dec[i]<<" ";
            cout<<endl;
        }
    }

	 return 0;

}

