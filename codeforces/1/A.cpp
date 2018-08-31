
#include<bits/stdc++.h>

using namespace std;

#define p printf

#define s scanf

#define ll long long

#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


#define np std::string::npos

int main()

{
    double n,m,a;
    while(cin>>n>>m>>a)
    {

        long long ans;
        ans=ceil(n/a)*ceil(m/a);
        cout<<ans<<endl;
    }

	 return 0;

}
