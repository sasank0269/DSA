//Sub array with given sum
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int sum;
    cout<<"Enter sum value: "<<endl;
    cin>>sum;
    int s=0;
    int start=0;
    int end=0;
    
    while (end<n && s+a[end]<=sum)
    {
        s+=a[end];
        end++;

    }
    

    if (s==sum){
        cout<<"Indexes are: "<<start<<", "<<end-1<<endl;
        return 0;
    }

    while (end<n)
    {
        s+=a[end];
        while(s>sum){
            s-=a[start];
            start++;
            cout<<s<<endl;
        }

        if (s==sum)
        {
            cout<<"Indexes are: "<<start<<", "<<end<<endl;
            return 0;
        }
        end++;
        
    }
    
    return 0;
    
    
    

}