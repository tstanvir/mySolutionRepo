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

//this fuction sorts vector pair according to first element in descending order.
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}

int main()

{
	IOS;
	size_t n,k;
	while(cin>>n>>k)
    {
        string s;
        cin>>s;
        int arr[k];
        SET(arr);
        for(int i=0;i<n;i++) arr[s.at(i)-'A']++;
        //for(int i=0;i<k;i++) cout<<arr[i]<<endl;
        int sum=0;
        int* mini=min_element(arr,arr+k);
        //cout<<*mini<<endl;
        bool bal=true;
        for(int i=0;i<k;i++) if(*mini==0 || arr[i]<*mini) { bal=false; break;}
       // vector<int>chal(arr,arr+k);
        if(!bal) sum=0;
        else {
            sum=*mini*k;
        }

        cout<<sum<<endl;
    }

	 return 0;

}

