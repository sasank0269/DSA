//Upper to lower and lower to upper
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    string str="rtgyhyhr6j";

    //Lower to upper case  transform(str.begin(),str.end(),str.begin(),::toupper)

    for(int i=0; i<str.size(); i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
    }

    cout<<str<<endl;

    //upper to lower transform(str.begin(),str.end(),str.begin(),::tolower)
    for(int i=0; i<str.size(); i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
    }
    cout<<str;

    return 0;


}