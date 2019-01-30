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
	int p1,p2,p3,p4,a,b;
	while(cin>>p1>>p2>>p3>>p4>>a>>b)
    {
        int arr[4]={p1,p2,p3,p4};
        int cnt=0;
        int fx;
        while(b>=a){
            do{
                fx=(((b%arr[0])%arr[1])%arr[2])%arr[3];
                if(fx==b)
                {
                    cnt++;
                    break;
                }
            }
            while(next_permutation(arr,arr+4));
            b--;
        }
        cout<<cnt<<endl;
    }

	 return 0;

}

