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
    char st,en;
    while(cin>>st>>en)
    {
        int n;
        cin>>n;
        n%=4;
        if(n%2==0) cout<<"undefined"<<endl;
        else if(n==1){
            if(st=='v')
            {
                if(en=='<') cout<<"cw"<<endl;
                else if(en=='>') cout<<"ccw"<<endl;
            }
            else if(st=='>')
            {
                if(en=='v') cout<<"cw"<<endl;
                else if(en=='^') cout<<"ccw"<<endl;
            }
           else  if(st=='^')
            {
                if(en=='>') cout<<"cw"<<endl;
                else if(en=='<') cout<<"ccw"<<endl;
            }
            else if(st=='<')
            {
                if(en=='^') cout<<"cw"<<endl;
                else if(en=='v') cout<<"ccw"<<endl;
            }
        }
        else if(n==3)
        {
            if(st=='v')
            {
                if(en=='>') cout<<"cw"<<endl;
                else if(en=='<') cout<<"ccw"<<endl;
            }
            else if(st=='>')
            {

                 if(en=='^') cout<<"cw"<<endl;
                 else if(en=='v') cout<<"ccw"<<endl;
            }
           else  if(st=='^')
            {
                if(en=='<') cout<<"cw"<<endl;
                else if(en=='>') cout<<"ccw"<<endl;
            }
            else if(st=='<')
            {
                if(en=='v') cout<<"cw"<<endl;
                else if(en=='^') cout<<"ccw"<<endl;
            }
        }
    }

	 return 0;

}

