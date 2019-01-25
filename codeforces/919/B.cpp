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
int arr[10005];
int sumOfdigits(int n)
{
    int sum=0;
    while(n/10!=0)
    {
        sum+=n%10;
        n/=10;
    }
    sum+=n%10;
    return sum;
}
int  numOfdigits(int n)
{
    int cnt=0;
    while(n/10!=0)
    {
        cnt++;
        n/=10;
    }
    return cnt;
}

int main()

{
	int k;
	for(int i=19,j=1;j<=10000;i++)
    {
        if(sumOfdigits(i)==10) {arr[j]=i; j++;}
    }
	while(cin>>k) cout<<arr[k]<<endl;


	 return 0;

}

