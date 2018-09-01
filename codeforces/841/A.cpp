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
    int n ,k;
    while(cin>>n>>k)
    {
        string s;
        cin>>s;
        int counts[26];
        memset(counts,0,26*sizeof(counts[0]));
        //cout<<counts[10]<<endl;
        for(int i=0;i<s.size();i++) counts[s[i]-'a']++;
        int* maxi=max_element(counts,counts+26);
        //cout<<*maxi<<endl;
        *maxi>k?cout<<"NO\n":cout<<"YES\n";

    }

	 return 0;

}

