#include<bits/stdc++.h>

using namespace std;

#define PI 3.1415926535897932384626433832795
#define REP(i,n) for(int i=0;i<(n);i++)
#define SET(x) memset(x, 0, sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define mp make_pair
#define p printf

#define s scanf

#define ll long long

#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


#define np std::string::npos
#define INF Ox3f3f3f3f

//this fuction sorts vector pair according to first element in descending order.
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}

int main()

{
	IOS;
	int n,k;
	cin>>n>>k;
	set<int>st;
	set<int>::iterator stit;
	for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        st.insert(a);
    }
    stit=st.begin();int sz=st.size();
    cout<<*stit<<endl;
    int arr[sz+1];
int bal=0;
    for( stit=st.begin();stit!=st.end();stit++,bal++)
    {

        arr[bal]=*stit;
    }
    if(sz>=k) sz=k;
    //for(int i=0;i<sz;i++) cout<<arr[i]<<endl;
    for(int i=0;i<sz;i++) if(i+1<sz) cout<<arr[i+1]-arr[i]<<endl;

    for(int i=sz;i<k;i++)
        cout<<0<<endl;


	 return 0;

}

