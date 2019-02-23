#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define p printf

#define s scanf

#define ll long long

#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0);
#define np std::string::npos

//this fuction sorts vector pair according to first element in descending order.
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}

int main()

{
	IOS;
	string s;
	while(cin>>s)
    {
        stack<char>st;
        st.push(s[0]);
        bool p1=false,p2=false;
        for(int i=1;i<s.size();i++)
        {
            if(!st.empty()&&st.top()==s[i])
            {
                st.pop();
                if(!p1) {p1=true; p2=false;}
                else {p2=true;p1=false;}
            }
            else st.push(s[i]);
        }
        if(p1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

	 return 0;

}

