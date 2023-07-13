#include<bits/stdc++.h>
using namespace std;

int main(){

    ofstream fout;
    string line;
    fout.open("file1.txt");

    while (fout)
    {
        getline(cin,line);

        if(line=="-1") break;

        fout<<line<<endl;

    }
    

    fout.close();
/*

//Appending at end.
    ofstream fout1;
    fout1.open("file1.txt",ios::app);
    while (fout1)
    {
        getline(cin,line);

        if(line=="-1") break;

        fout1<<line<<endl;

    }
    fout1.close();
*/
    return 0;
}