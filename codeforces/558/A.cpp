#include<bits/stdc++.h>

using namespace std;

#define p printf

#define s scanf

#define ll long long

#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


#define np std::string::npos
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}


int main()

{
   // ios::sync_with_stdio(false);
   cin.tie(0);
       int n;
    while(cin>>n)
    {
        vector< pair<int,int> > pos,neg;
        int sum;
        int a,b;
        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&a,&b);
            if(a<0) neg.pb(make_pair(a,b));
            else if(a>0) pos.pb(make_pair(a,b));
        }
        sort(pos.begin(),pos.end());
        sort(neg.begin(),neg.end(),sortinrev);
        int i=0;
        int balpos,chalneg;
        balpos=pos.size();
        chalneg=neg.size();
        if(balpos>chalneg)
        {
            sum=0;
            if((balpos-chalneg)>1)
            {
                int sub=balpos-chalneg-1;
               // if(chalneg==0) sub=balpos-chalneg-1;
                for(int i=0;i<sub;i++) pos.pop_back();
            }
            for(int i=0;i<pos.size();i++)
                sum+=pos[i].second;
            for(int i=0;i<neg.size();i++)
                sum+=neg[i].second;
        }
        else{
                sum=0;
        if((chalneg-balpos)>1)
            {
                int sub=chalneg-balpos-1;
              //  if(balpos==0) sub=chalneg-balpos-1;

                for(int i=0;i<sub;i++) neg.pop_back();
            }
            for(int i=0;i<pos.size();i++)
                sum+=pos[i].second;
            for(int i=0;i<neg.size();i++)
                sum+=neg[i].second;
        }
        cout<<sum<<endl;

    }

	 return 0;

}

