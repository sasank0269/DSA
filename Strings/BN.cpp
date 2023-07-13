//Form the maximum number from the given numeric string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string s="235465325";

    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
    return 0;

}