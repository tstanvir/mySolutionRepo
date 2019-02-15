#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define PII pair<int, int>
#define p printf

#define s scanf

#define ALL(x) x.begin(),x.end()
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
	ll n,b;
	while(cin>>n>>b)
    {
        ll prothom=0, cnt=0;
        vector< pair<ll , int > > vec;

        while(b%2==0)
        {
            prothom=2;
            cnt++;
            b/=2;
        }
        if(cnt!=0&& prothom!=0) vec.pb(mp(prothom,cnt));
       //cout<<"prothom1: "<<prothom<<endl<<"cnt1: "<<cnt<<endl;

            ll limit =sqrt(b);
            for(int i=3;i<=limit;i+=2)
            {
               // cout<<"kahinip: "<<prothom<<endl;
                //cout<<"kahini: "<<cnt<<endl;
                //cnt=0;
                int bal=1;
                if(b%i==0)
                {
                    while(b%i==0)
                    {
                        prothom=i;
                        b/=i;

                        if(bal==1) cnt=0;
                        bal++;
                        cnt++;
                        //cout<<"cnt: "<<cnt<<endl;

                    }
               if(cnt!=0&&prothom!=0) vec.pb(mp(prothom,cnt));
                }

            }
            //cout<<b<<endl;
      //  cout<<"prothom2: "<<prothom<<endl<<"cnt2: "<<cnt<<endl;
        if(b>2LL)
        {
            vec.pb(mp(b,1));
        }
      //for(int i=0;i<vec.size();i++) cout<<vec[i].first<<" "<<vec[i].second<<endl;
        //cout<<endl;
        //cout<<"prothom3: "<<prothom<<endl<<"cnt3: "<<cnt<<endl;
        ll ans=1000000000000000000LL;
        for(int i=0;i<vec.size();i++)
        {
            //cout<<"pfBaire: "<<pf<<endl;
            ll mul=1;
            ll tmp=0;
            while(mul<=n/vec[i].first)
            {
               mul*=vec[i].first;
               tmp+=n/mul;
              // cout<<"tmp: "<<tmp<<endl;
                //cout<<"pfVItore: "<<pf<<endl;
            }
            ans=min(ans,tmp/vec[i].second);

        }

        cout<<ans<<endl;
    }

	 return 0;

}

