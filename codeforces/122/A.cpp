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
	int arr[]={4,7,44,47,74,77,444,447,474,477};
	int n;
	while(cin>>n)
    {
        bool b=false;
        for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
        {
            if(n%arr[i]==0 && !b)
            {
                cout<<"YES"<<endl;
                b=true;
                break;
            }
        }
        if(!b) cout<<"NO"<<endl;
    }

	 return 0;

}

