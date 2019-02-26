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
	    set<char>st;
        vector< set<char> >vec;
        while(n--)
        {
            string s;
            cin>>s;
            for(int i=0;i<s.size();i++) st.insert(s[i]);
            vec.pb(st);
            st.clear();
        }
        sort(ALL(vec));
        /*for(int i=0;i<vec.size();i++){
            for(auto y=vec[i].begin();y!=vec[i].end();y++) cout<<*y;
        cout<<endl;
        }*/

        int cnt=1;
        for(int i=0;i<vec.size()-1;i++)
        {
            if(vec[i]!=vec[i+1]) cnt++;
            //cout<<cnt<<endl;
        }
        cout<<cnt<<endl;

    }
	 return 0;

}

