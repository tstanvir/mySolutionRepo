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
        vector<int>vec;
        for(int i=0;i<n;i++) {int a;cin>>a;vec.pb(a);}
        sort(ALL(vec));
        reverse(ALL(vec));
        list<int>li;
        for(int i=1;i<=n;i++){
            if(i%2) li.push_back(vec[i-1]);
            else li.push_front(vec[i-1]);
        }
        for(auto i=li.begin();i!=li.end();i++)
            cout<<*i<<" ";
        cout<<endl;

    }

	 return 0;

}

