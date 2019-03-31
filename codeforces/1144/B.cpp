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
        vector<int>odd,even;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a%2==0) even.pb(a);
            else odd.pb(a);
        }
        if(abs(even.size()-odd.size())==0 || abs(even.size()-odd.size())==1) cout<<0<<endl;
        else
        {
           if(even.size()>odd.size())
           {
               sort(ALL(even));
               reverse(ALL(even));
               for(int j=0;j<=odd.size();j++)
                    even.erase(even.begin());
                int sum=0;
                for(int j=0;j<even.size();j++)
                {
                    sum+=even[j];
                }
                cout<<sum<<endl;
           }
           else
           {
               sort(ALL(odd));
               reverse(ALL(odd));
               for(int j=0;j<=even.size();j++)
                    odd.erase(odd.begin());
                int sum=0;
                for(int j=0;j<odd.size();j++)
                {
                    sum+=odd[j];
                }
                cout<<sum<<endl;
           }

        }
    }

	 return 0;

}

