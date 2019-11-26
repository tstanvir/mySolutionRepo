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
int maxi=-1;
void maxx(vector<int>s)
{
    int sz=s.size();
    if(sz==1){
        maxi=max(1,maxi);
        return;
    }
    if(is_sorted(s.begin(),s.end())) {maxi=max(maxi,sz); return;}
    vector<int>left(s.begin(),s.begin()+(sz/2)),right(s.begin()+((sz/2)),s.end());
    //cout<<left.size()<<" "<<right.size()<<endl;
    maxx(left);
    maxx(right);
}

int main()

{
	IOS;
	int n;
	while(cin>>n)
    {
        vector<int>v;
        for(int i=0;i<n;i++) {
            int a;
            cin>>a;
            v.pb(a);
        }
        maxx(v);
        cout<<maxi<<endl;

    }

	 return 0;

}

