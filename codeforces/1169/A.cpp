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
    int n,a,x,b,y;
    while(cin>>n>>a>>x>>b>>y)
    {
        bool bb=false;
        while(1)
        {
            if(a==b) {bb=true;break;}
            if(a==x||b==y) break;
            a++;
            b--;
            if(a>n) a=1;
            if(b<1) b=n;
            //cout<<a<<" "<<b<<endl;
            //cout<<bb<<endl;
        }
        if(bb) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	 return 0;

}

