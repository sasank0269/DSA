//Create a matrix with alternating rectangles of O and X
#include<iostream>
using namespace std;

int main(){
    int m;
    cin>>m;

    int n;
    cin>>n;
    char res[m][n];
    int row_start=0;
    int row_end=m-1;
    int column_start=0;
    int column_end=n-1;
    bool flag=false;
    while(row_start<=row_end && column_start<=column_end){

        for(int i=column_start; i<=column_end; i++){
            if (flag)
            {
                res[row_start][i] = 'O';
            }
            else{
                res[row_start][i] = 'X';
            }
            
        }
        row_start++;

        for(int i=row_start; i<=row_end; i++){
            if (flag)
            {
                res[i][column_end] = 'O';
            }
            else{
                res[i][column_end] = 'X';
            }
        }
        column_end--;

        for (int i = column_end; i >= column_start; i--)
        {
            if (flag)
            {
                res[row_end][i] = 'O';
            }
            else{
                res[row_end][i] = 'X';
            }
        }
        row_end--;

        for (int i = row_end; i >= row_start; i--)
        {
            if (flag)
            {
                res[i][column_start] = 'O';
            }
            else{
                res[i][column_start] = 'X';
            }
        }
        column_start++;

        flag = !flag;
        
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
        
    }

    return 0;
    
}