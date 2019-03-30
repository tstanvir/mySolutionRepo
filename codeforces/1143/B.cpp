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
	string s;
	int n;
	while(cin>>s)
    {
        n=stoll(s);
        ll m=n,bal=1;
        while(m>1)
            {
                bal*=(m%10);
                m/=10;
            }
            //cout<<bal<<endl;
        ll maxi=-1;
        for(int i=0;i<s.size();i++)
        {
            char b=s[i];
            b--;
            //cout<<"b: "<<b<<endl;
             ll prod=1;
             for(int j=i+1;j<s.size();j++) prod*=9;
             //cout<<prod<<endl;
             for(int j=0;j<i;j++)
             {
                 //cout<<"i: "<<i<<endl;
                if(s[j]!='0') prod*=s[j]-'0';//cout<<"d"<<endl;
             }
             if(b!='0') prod*=(ll)(b-'0');
             if(prod>=maxi) maxi=prod;
             //cout<<prod<<endl;
        }
        cout<<max(maxi,bal)<<endl;
    }

	 return 0;

}

