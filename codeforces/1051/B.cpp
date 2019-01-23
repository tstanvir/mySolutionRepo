#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define p printf

#define s scanf

#define ll long long

#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0);
#define np std::string::npos

//this fuction sorts vector pair according to first element in descending order.
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}

int main()

{
	IOS;
	ll l,r;
	while(cin>>l>>r)
    {
        ll vagfol=(r-l+1)/2;
        if((vagfol*2)!=(r-l+1)) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            ll jor,bijor;
            if(l%2!=0) bijor=l;
            else jor=l;
            for(int i=0;i<vagfol;i++)
            {
                if(l%2!=0)
                {
                    cout<<bijor<<" "<<bijor++;
                    cout<<endl;
                    bijor++;
                }
                else
                {
                    cout<<jor<<" "<<jor++;
                    cout<<endl;
                    jor++;
                }
            }
        }
    }

	 return 0;

}

