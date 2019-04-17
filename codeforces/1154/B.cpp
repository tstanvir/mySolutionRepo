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
        set<int>st;
        while(n--)
        {
            int a;
            cin>>a;
            st.insert(a);
        }
        if(st.size()>3) cout<<-1<<endl;
        else if(st.size()==3)
        {
            auto it1=st.begin(),it2=it1;
            ++it2;
            //cout<<*it1<<" "<<*(--st.end())<<endl;
            if((*it2-*it1)!=(*(--st.end())-*it2)) cout<<-1<<endl;
            else cout<<*it2-*it1<<endl;
        }
        else if(st.size()==2)
        {
            if((*(--st.end())-*st.begin())%2==0) cout<<(*(--st.end())-*st.begin())/2<<endl;
            else cout<<(*(--st.end())-*st.begin())<<endl;
        }
        else cout<<0<<endl;

    }

	 return 0;

}

