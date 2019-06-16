#include<bits/stdc++.h>

using namespace std;

const long long MOD = 1000000007;
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

template<typename T>inline T Bigmod(T base, T power, T MOD){
    T ret=1;
    while(power)
    {
        if(power & 1)ret=(ret*base)%MOD;
        base=(base*base)%MOD;
        power>>=1;
    }
    return ret;
}
string sum(string s,string t)
{
    reverse(s.begin(),s.end());
    reverse(t.begin(),t.end());
    if(s.size()>t.size())
        swap(s,t);
    int n1=s.size(),n2=t.size();
    string res="";
    int carry=0;
    for(int i=0;i<n1;i++)
    {
        int ss=(s[i]-'0')+(t[i]-'0')+carry;
        res.pb((ss%10)+48);
        carry=ss/10;
    }
    for(int i=n1;i<n2;i++)
    {
        int ss=(t[i]-'0')+carry;
        res.pb((ss%10)+'0');
        carry=ss/10;
    }
    if(carry)
        res.pb(carry+'0');
    reverse(ALL(res));
    return res;
}

int main()

{
	IOS;
	int n;
	while(cin>>n)
    {
        string s;
        cin>>s;
        vector<pair<int,string> >v;
        int mid=n/2;
        if(s[mid]!='0')
        {
            string  a=s.substr(0,mid),b=s.substr(mid,n-mid);
            string res=sum(a,b);
            v.pb(mp(res.size(),res));
        }
        if(n%2!=0&&s[mid+1]!='0')
        {
            string a=s.substr(0,mid+1),b=s.substr(mid+1,n-mid+1);
            string res=sum(a,b);
            v.pb(mp(res.size(),res));
        }
        else if(s[mid]=='0')
        {
            for(int i=mid;i<n;i++)
            {
                if(s[i]!='0')
                {
                    string a=s.substr(0,i),b=s.substr(i,n-i);
                    string res=sum(a,b);
                    v.pb(mp(res.size(),res));
                    break;
                }
            }
            for(int i=mid-1;i>=0;i--)
            {
                if(s[i]!='0')
                {
                    string a=s.substr(0,i),b=s.substr(i,n-i);
                    string res=sum(a,b);
                    v.pb(mp(res.size(),res));
                    break;
                }
            }
        }
        sort(ALL(v));
        cout<<v[0].second<<endl;

    }

	 return 0;

}

