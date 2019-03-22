#include<bits/stdc++.h>
using namespace std;

int  main()
{
	int n,m;
	while(cin>>n>>m)
    {
        vector<int>vec;
        long long  suma=0;
        while(n--)
        {
            int a,b;
            cin>>a>>b;
            suma+=a;
            vec.push_back(a-b);
        }
        int cnt=0;
        sort(vec.begin(),vec.end());
        reverse(vec.begin(),vec.end());
        int i=0;
        while(suma>m&&i<vec.size())
        {
            suma-=vec[i];
            i++;
            cnt++;
        }
        if(i==vec.size()&&suma>m) cout<<"-1"<<endl;
        else  cout<<cnt<<endl;
    }
	return 0;
}
