//Largest word in a sentence
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr,n);
    

    int i=0;

    int curr_len=0;
    int max_len=0;

    while(1){

        if(arr[i] ==' ' || arr[i] == '\0'){
            max_len = max(max_len,curr_len);
            curr_len=0;
        }
        else
        curr_len++;
        
        if(arr[i]=='\0'){
            break;
        }
        i++;
    }

    cout<<max_len<<endl;
    return 0;
}