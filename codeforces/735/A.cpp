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
	int n,k;
	while(cin>>n>>k)
    {
        string s;
        cin>>s;
        int t,g;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='T') t=i+1;
            if(s[i]=='G') g=i+1;
        }
        if(t<=g)
        {
            bool b=false;
            for(int i=g-1;i>t;i--)
            {
                if(s[i]=='#') if((abs(g-(i+1))%k==0)) {b=true;break;}
            }
            if(b) cout<<"NO"<<endl;
            else if((abs(t-g))%k==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            bool b=false;
            for(int i=g;i<t;i++)
            {
                if(s[i]=='#') if((abs((g-1)-i)%k==0)) {b=true;break;}
            }
            if(b) cout<<"NO"<<endl;
            else if((abs(t-g))%k==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

	 return 0;

}

