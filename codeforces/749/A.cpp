#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define PII pair<int, int>
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
	int n;
	while(cin>>n)
    {
        if(n%2==0)
        {
            cout<<n/2<<endl;
            while(n>0) {cout<<2<<" ";n-=2;}
            cout<<endl;
        }
        else
        {
            cout<<n/2<<endl;
            while(n>3){cout<<2<<" ";n-=2;}
            cout<<3<<endl;
        }

    }

	 return 0;

}

