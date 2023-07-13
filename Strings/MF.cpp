//Maximum frequency of a character
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string s="wegtrbstgsrth";

    int freq[26];

    for(int i=0; i<26; i++){
        freq[i]=0;
    }

    for(int i=0; i<s.size(); i++){
        freq[s[i]-'a']++;
    }

    char maxchar;
    int max=0;
    for(int i=0; i<26; i++){
        if(freq[i]>max){
            max=freq[i];
            maxchar=i+'a';
        }
    }
    cout<<maxchar<<endl;
    return 0;

}