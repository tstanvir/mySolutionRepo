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
        double a=0.0,b=0.0,reca=0,recb=0;
        while(n--)
        {
            int t,d,c;
            cin>>t>>d>>c;
            if(t==1)
            {
                a+=(d+c);
                reca+=d;
            }
            else
            {
                b+=(d+c);
                recb+=d;
            }
        }
        if(reca>=(a/2)) cout<<"LIVE"<<endl;
        else cout<<"DEAD"<<endl;
        if(recb>=(b/2)) cout<<"LIVE"<<endl;
        else cout<<"DEAD"<<endl;

    }
	 return 0;

}

