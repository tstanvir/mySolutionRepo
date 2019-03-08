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
	int h1,h2,m1,m2;
	char ch1,ch2;
	while(cin>>h1>>ch1>>m1)
    {
        cin>>h2>>ch2>>m2;
        int strt,en;
        strt=h1*60+m1;
        en=h2*60+m2;
        int dif=en-strt;
        int haf=dif/2;
        int ans=strt+haf;
        int hh=ans/60;
        if(hh<10) cout<<"0";
        cout<<hh<<ch1;
        int mm=ans-(hh*60);
        if(mm<10) cout<<"0";
        cout<<mm;
        cout<<endl;

    }


	 return 0;

}

