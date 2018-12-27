#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
 int n;
 cin>>n;
 cin>>s;
 int chal=0;
 for(int i=1;i<=n;i++){
  chal+=i-1;
  if(chal>=n) break;
  cout<<s.at(chal);
}
return 0;
}