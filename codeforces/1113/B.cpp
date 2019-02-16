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

//this fuction sorts ltor pair according to first element in descending order.
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}
bool isprime(int n)
{
    bool b=true;int lim=sqrt(n);
    if(n%2==0) { b=false;return 1;}
    else {
    for(int i=3;i<=lim;i+=2)
    {
        if(n%i==0) {b=false;return 1;}
    }
    }
    if(b) return 0;

}/*
int div(int n)
{
    int lim=sqrt(n);
    int p;
    for(int i=2;i<=lim;i++)
    {
        if(n%i==0)
        {
            p=n/i;
        }
    }
    //cout<<p<<endl;
    return p;
}*/
int main()

{
	IOS;
	int n;
	while(cin>>n)
    {
        vector<int>l;
        int ager=0,sum=0;
        for(int i=0;i<n;i++) {int x;  cin>>x;ager+=x;l.pb(x);}
        sort(ALL(l));
        reverse(ALL(l));
        int tmp,tmpindex,ans=1000000000;
        sum=ager;
        bool b=false;
        for(int i=0;i<n;i++)
        {
            if(isprime(l[i]))
            {
                //cout<<l[i]<<endl;
                int lim=sqrt(l[i]);
                for(int j=1;j<=lim;j++)
                {
                    if(l[i]%j==0)
                    {
                        //cout<<"i: "<<j<<endl;
                        sum-=l[i]-(l[i]/j);
                        sum+=(l[l.size()-1]*j)-l[l.size()-1];
                        ans=min(ans,min(sum,ager));
                        sum=ager;
                        //cout<<"Ans1: "<<ans<<endl;
                        if(l[i]%j==j) continue;
                        sum-=l[i]-(l[i]/(l[i]/j));
                        sum+=(l[l.size()-1]*(l[i]/j))-l[l.size()-1];

                        //cout<<"Ans2: "<<ans<<endl;
                    }
                    ans=min(ans,min(sum,ager));
                    sum=ager;
                }
                b=true;
                //cout<<"ans: "<<ans<<endl;
            }
        }
        if(!b) ans=min(ans,ager);
        cout<<ans<<endl;

    }

	 return 0;

}

