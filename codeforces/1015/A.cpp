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
        bool arr[m+1]={0};
        while(n--)
        {
            int l,r;
            cin>>l>>r;
            for(int i=l;i<=r;i++)
            {
                if(arr[i]!=1) arr[i]=1;
            }
        }


        vector<int>vec;
        for(int i=1;i<=m;i++)
        {
            if(arr[i]==0) vec.pb(i);
        }
        cout<<vec.size()<<endl;
        for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
        cout<<endl;
    }
	 return 0;

}

