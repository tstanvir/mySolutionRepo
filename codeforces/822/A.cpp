#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
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
int fact(int n)
{
    if(n==1) return 1;
    return n*fact(n-1);
}

int main()

{
	IOS;
	int a,b;
	while(cin>>a>>b)
    {
        int mini=min(a,b);
        cout<<fact(mini)<<endl;

    }

	 return 0;

}

