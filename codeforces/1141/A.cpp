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
        if(m%n!=0) {cout<<-1<<endl; continue;}
        else
        {
            int vagfol=m/n;
            int s=0;
            bool b=false;
            while(vagfol>1)
            {
                if(vagfol%3==0) vagfol/=3;
                else if(vagfol%2==0) vagfol/=2;
                else {
                        b=true;
                        break;
                }
                s++;
            }
            if(!b) cout<<s<<endl;
            else cout<<-1<<endl;
        }
    }

	 return 0;

}

