 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test  long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 1000000
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
# define INF 0x3f3f3f3f
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int>> pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};

long double power(long double p,long double q)
{
    long double ans=pow(p,q);
    return ans;
}

v99 koita_ache(v99 n,v99 base)
{
    v99 kot=0;
    while(n)
    {
        n/=base;
        kot+=n/2;
    }
    return kot;
}
int main()
{
    //v99 k=1;
    //test
    //while(1)
    {
        v99 n;cin>>n;
        if(n&1)cout<<0<<ses;
        else cout<<koita_ache(n,5)<<ses;

        //cout<<min(ache_2,ache_5)<<ses;
    }
    return 0;
}