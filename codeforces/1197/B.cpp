#include<bits/stdc++.h>

using namespace std;

const long long MOD = 1000000007;
#define SET(x) memset(x, 0, sizeof(x))
#define SET2d(x,m,n) memset(x, 0, sizeof(x[0][0]) * m * n)
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define PII pair<int, int>
#define pf printf

#define sf scanf

#define ALL(x) x.begin(),x.end()
#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0);
#define np std::string::npos
#define for0(i,n) for(int i=0;i<n;i++)
#define forn(i,n) for(int i=n-1;i>=0;i--)
#define highest(x) numeric_limits<x>::max()
#define lowest(x) numeric_limits<x>::min()
#define Inf INFINITY
typedef long long ll;


//this fuction sorts vector pair according to first element in descending order.
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}

template<typename T>inline T Bigmod(T base, T power, T MOD){
    T ret=1;
    while(power)
    {
        if(power & 1)ret=(ret*base)%MOD;
        base=(base*base)%MOD;
        power>>=1;
    }
    return ret;
}

int main()

{
	IOS;
	int n;
    while(cin>>n){
        vector<int>vec;
        int index,maxi=-1;
        for0(i,n) {
        int a;
        cin>>a;
        vec.pb(a);
        if(a>=maxi) {
            maxi=a;
            index=i+1;
        }
        }
        if(index==1){
            stack<int>st;
            st.push(vec[index-1]);
            bool bb=false;
            for(int i=1;i<vec.size();i++){
                if(st.top()>vec[i]){
                    st.push(vec[i]);
                }
                else {
                    bb=true;
                    break;
                }
            }
            if(bb) cout<<"no"<<endl;
            else cout<<"yes"<<endl;
        }
        else if(index==n){
            stack<int>st;
            st.push(vec[index-1]);
            bool bb=false;
            for(int i=n-2;i>=0;i--){
                if(st.top()>vec[i]){
                    st.push(vec[i]);
                }
                else {
                    bb=true;
                    break;
                }
            }
            if(bb) cout<<"no"<<endl;
            else cout<<"yes"<<endl;
        }
        else{
            stack<int>st;
            st.push(vec[index-1]);
            bool bb=false;
            int i=index-2;
            int j=index;
            while(i>=0&&j<n){
               // cout<<st.top()<<endl;
                if(vec[i]>vec[j]&&vec[i]<st.top()){
                    st.push(vec[i]);
                    i--;
                    //vec.erase(vec.begin()+i+1);
                }
                else if(vec[i]<vec[j]&&vec[j]<st.top()){
                    st.push(vec[j]);
                    j++;
                }
                else {
                    bb=true;
                    break;
                }
                //cout<<"i:  "<<i<<endl;
           // for0(i,vec.size()) cout<<vec[i]<<" ";
            //cout<<endl;
            }
            if(i==-1){
                for(int k=j;k<n;k++){
                    if(vec[k]<st.top())
                        st.push(vec[k]);
                    else {
                        bb=true;
                        break;
                    }
                }
            }
            else if(j==n){
                for(int k=i;k>=0;k--){
                    if(vec[k]<st.top()){
                        st.push(vec[k]);
                    }
                    else {
                        bb=true;
                        break;
                    }
                }
            }
            if(bb) cout<<"no"<<endl;
            else cout<<"yes"<<endl;
        }

    }
	 return 0;

}
