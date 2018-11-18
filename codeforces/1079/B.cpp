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
	string bal;
	while(cin>>bal)
    {
        int chal=bal.length()/20;
        if(chal*20<bal.length()) chal++;
        int heda=bal.length()/chal;
        if(heda*chal<bal.length()) heda++;
        cout<<chal<<" "<<heda<<endl;
        int limit=chal*heda;
        int aster=limit-bal.length();
        bool row=true;
        int k=0;
        for(int i=0;i<limit;i++)
        {
            if(aster>0 && row) { cout<<"*"; aster--;row=false;continue;}
            row=false;
            if(i%heda==0 && i!=0) {cout<<endl; row = true;}
            cout<<bal.at(k);k++;
        }
        cout<<endl;
    }

	 return 0;

}

