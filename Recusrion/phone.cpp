//Print all possible word from phone digits.

#include<iostream>
using namespace std;
void phone(string s1, string s2){
    
    if(s1.size()==0 || s2.size()==0) return;
    
    string ans=""+s1.substr(0,1)+s2.substr(0,1);
    cout<<ans<<endl;
    phone(s1,s2.substr(1));
    phone(s1.substr(1),s2);
}


int main(){

    string arr[] = {"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int a,b;
    cin>>a>>b;

    phone(arr[a],arr[b]);

    return 0;
}