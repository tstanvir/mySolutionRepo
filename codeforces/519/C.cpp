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

int main()

{
	IOS;
	int n,m;
	while(cin>>n>>m)
    {
        int cnt=0;
        while((n-1)>=0&&(m-2)>=0 || (n-2)>=0 && (m-1)>=0)
        {
            if(n>0 && m>0) cnt++;
            if(n<m)
            {
                n-=1;
                m-=2;
            }
            else
            {
                n-=2;
                m-=1;
            }
        }
        cout<<cnt<<endl;
    }

	 return 0;

}

