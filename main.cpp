#include<iostream>
#include<algorithm>
using namespace std;
bool ispali(string s){
    long long len = s.length();
    if(len==1)
    return 1;
    for(int i=0;i<len/2;i++){
        if(s[i] != s[len-i-1]){
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    cin>>s;
    if(ispali(s))
    cout<<s.length()-1;
    else
    cout<<s.length();
}
