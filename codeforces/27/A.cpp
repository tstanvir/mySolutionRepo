#include<bits/stdc++.h>

using namespace std;

#define p printf

#define s scanf

#define ll long long

#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


#define np std::string::npos
list<int>bal;


int main()

{
    for(int i=1;i<=3002;i++ ) bal.pb(i);
    int n;
    while(cin>>n)
    {
        for(int i=0;i<n;i++) {int a; cin>>a; bal.remove(a);}
        bal.sort();
        cout<<bal.front()<<endl;
    }

	 return 0;

}

