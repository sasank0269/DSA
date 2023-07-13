//Matrix search
#include<iostream>
using namespace std;

int main(){

    int arr[4][4] = {{1,4,7,11},{2,5,8,12},{3,6,9,16},{10,13,14,17}};

    int key;
    cout<<"Enter value to search: ";
    cin>>key;
    int r=0,c=3; //take first row and last column i.e start from the element of first row and last column to search.

    while (r<4 && c<4)
    {
        if(key==arr[r][c]){
            cout<<"True"<<endl;
            return 0;
        }
        else if (key>arr[r][c])
        {
            r++;
        }
        else{
            c--;
        }
        
    }
    cout<<"False"<<endl;
    return 0;
    
}