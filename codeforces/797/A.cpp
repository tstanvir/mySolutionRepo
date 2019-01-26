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
void divisor(int n)
{
    int limit=sqrt(n);
    bool paichi=false;
    for(int i=2;i<=limit;i++)
    {
        if(n%i==0)
        {cout<<i<<" "<<n/i<<endl;paichi=true; break;}
    }
    if(!paichi) cout<<-1<<endl;
}
int arr[100];
int primDivisor(int n)
{
    int cnt=0;
    SET(arr);
    int trace=0;
    while(n%2==0)
    {
        cnt++;
        arr[trace]=2;
        trace++;
        n/=2;
    }
    int limit=sqrt(n);
    for(int i=3;i<=limit;i+=2)
    {
        while(n%i==0)
        {
            cnt++;
            arr[trace]=i;
            trace++;
            n/=i;
        }
    }
    if(n>2)
    {
        arr[trace]=n;cnt++;trace++;
    }
    return cnt;

}
int main()

{
	IOS;
	int n,k;
	while(cin>>n>>k)
    {
        int bal=primDivisor(n);//cout<<bal<<endl;
        if(k==2) divisor(n);
        else if(bal>=k)
        {
            for(int i=0;i<k-1;i++) cout<<arr[i]<<" ";
            int prd=1;
            for(int i=k-1;i<bal;i++) prd*=arr[i];
            cout<<prd<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;

}

