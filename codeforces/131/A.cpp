#include<iostream>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        bool a=1;
        for(int i=0;i<s.size();i++){
            a&=((s[i]-'A')>=0&&(s[i]-'A')<=25);
        }
        if(a){
            for(int i=0;i<s.size();i++){
                cout<<(char)(s[i]+32);
            }
            cout<<endl;
            continue;
        }
        if(s[0]-'a'>=0 && (s[0]-'a'<=25)){
            a=1;
            for(int i=1;i<s.size();i++){
                a&=((s[i]-'A')>=0&&(s[i]-'A')<=25);
            }
            if(a){
                cout<<(char)(s[0]-32);
                for(int i=1;i<s.size();i++){
                cout<<(char)(s[i]+32);
            }
            cout<<endl;
            continue;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
