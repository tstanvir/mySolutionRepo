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
	int n,m;
	while(cin>>n>>m)
    {
        multiset<int>aa[n+m],bb[n+m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++) {
                int a;
                cin>>a;
                aa[i+j].insert(a);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++) {
                int b;
                cin>>b;
                bb[i+j].insert(b);
            }
        }
        bool b=false;
        for(int i=0;i<n+m;i++)
        {
          if(aa[i]!=bb[i])
            {
                cout<<"NO"<<endl;
                b=true;
                break;
            }
        }
        if(!b) cout<<"YES"<<endl;
    }

	 return 0;

}

