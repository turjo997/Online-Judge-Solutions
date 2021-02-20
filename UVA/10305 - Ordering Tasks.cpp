#include<bits/stdc++.h>
using namespace std;

vector <int> graph[150];
bool visited[150];

vector<int> res;

void dfs(int source){
    visited[source] = 1;
    for (int i = 0; i < graph[source].size(); i++){
        int next = graph[source][i];
        if (visited[next] == 0)
            dfs(next);
    }

    res.push_back(source);

}

int main()
{

    while(true){
    int nodes, edges;
    cin >> nodes >> edges;

       for(int i=0;i<nodes+1;i++){
            visited[i]=0;
            graph[i].clear();
    }
     if(nodes==0 && edges== 0) {
        break ;
     }
    for (int i = 0; i < edges; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);


    }
    for (int i = 1; i<= nodes; i++){
        if (visited[i] == 0){
            dfs(i);
        }
    }

     for(int i=res.size()-1;i>=0;i--){

           cout<<res[i]<<" ";
     }

       cout<<endl;

       res.clear();

    }
    return 0;
}
