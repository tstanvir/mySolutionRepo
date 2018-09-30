#include<bits/stdc++.h>

using namespace std;


int main()

{

	long long a,b,x,y;
	while(cin>>a>>b>>x>>y)
    {
        long long  gc=__gcd(x,y);
        //cout<<bal<<endl;
        if(gc>0) {x=x/gc; y=y/gc;}
        long long A,B;
        A=a/x; B=b/y;
        cout<<min(A,B)<<endl;
    }

	 return 0;

}
