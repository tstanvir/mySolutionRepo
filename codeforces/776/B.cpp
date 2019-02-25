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
        int arr[n+2]={0};
        int trace=1;
        int lim=sqrt(n+1);
        for(int i=2;i<=lim;i++)
        {
            trace=1;
            if(arr[i]==0) {arr[i]=trace;trace++;}
            for(int j=i*2;j<=n+1;j+=i) if(arr[j]==0) arr[j]=trace;
        }
        set<int>st;
        for(int i=2;i<=n+1;i++) {
                if(arr[i]==0) arr[i]=1;
                st.insert(arr[i]);
        }
         cout<<st.size()<<endl;
         for(int i=2;i<=n+1;i++) cout<<arr[i]<<" ";
         cout<<endl;
    }

	 return 0;

}

