#include <bits/stdc++.h>
using namespace std;

 map<pair<int,int>,int>visited;

void printArray(int a[3][3]){
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(visited[{i,j}]==0)
                cout<<"("<<i<<","<<j<<")"<<"\n";
    }

int main(){
    int min[3][3]={{0,1,2},{3,4,5},{6,7,8}};
    visited[{0,0}]=1;
    visited[{1,0}]=1;
    visited[{1,1}]=1;
    visited[{2,2}]=1;

    printArray(min);
    return 0;
}