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
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        vector<char>st(s.begin(),s.end());
        sort(ALL(st));
        if(st.size()==1) cout<<"Yes"<<endl;
        else
        {
            bool b=false;
            for(auto i=1;i<st.size();i++)
            {
                int test=st[i]-st[i-1];
                if(test==0 || test>1)
                {
                    b=true;
                    break;
                }
            }
            if(b) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    }
	 return 0;

}

