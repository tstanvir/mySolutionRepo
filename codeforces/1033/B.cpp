#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
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
    int t;
    cin>>t;
    while(t--)
    {
        ll a ,b;
        cin>>a>>b;
        //cout<<a<<endl<<b<<endl;
        if(a-b>1) {cout<<"NO"<<endl; continue;}
        else
        {
            bool bb=true;
            //cout<<a<<" "<<b<<endl;
            ll lim=a+b;
            //cout<<"LIM: "<<lim<<endl;
            if(lim%2LL==0) bb=false;
            else
            {
                for(ll i=3LL;i*i<=lim;i+=2LL){
                    if(lim%i==0)
                    {
                        bb=false;
                        break;
                    }

                }
                //cout<<b<<endl;

            }
            //cout<<b<<endl;

            if(bb) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

	 return 0;

}

