#include<bits/stdc++.h>
using namespace std;


class node{

    public:
    string house;
    node *west;
    node* east;

    node(string h){
        house = h;
        west=NULL;
        east=NULL;
    }

};


int main(){

    int n;
    cin>>n;
    unordered_map<string,node*> mp;
    for(int i=0; i<n; i++){
        string j;
        cin>>j;
        mp[j]=new node(j);
    }

    int k;
    cin>>k;

    for(int i=0; i<k; i++){
        string s,s1,s2,s3;
        cin>>s;
        stringstream ss(s);
        string word;
        int j=0;
        while(j<3){
            getline(ss,word,',');
            if(j==0) s1=word;
            if(j==1) s2=word;
            if(j==2) s3=word;
            j++;
        }
        if(s3=="West"){
            cout<<s1<<endl;
            mp[s1]->west=mp[s2];
        }
        else{
            mp[s1]->east=mp[s2];
        }
    }

    map<int,vector<string>> mp1;

    queue<pair<int,node*>> q;

    q.push({0,mp["President"]});

    while(!q.empty()){

        int level = q.front().first;
        node* temp=q.front().second;
        q.pop();
        mp1[level].push_back(temp->house);

        if(temp->west){
            q.push({level-1,temp->west});
        }

        if(temp->east){
            q.push({level+1,temp->east});
        }
    }

    for(auto it:mp1){
        int i=0;
        for(; i<it.second.size()-1; i++){
            cout<<it.second[i]<<",";
        }
        cout<<it.second[i]<<endl;
    }
    return 0;
}

