#include <iostream>
#include <vector>
#include <queue>

using Graph = std::vector<std::vector<int>>;

void dfs(Graph &graph, std::vector<int>& cat, int id, int c){
    
    if (cat[id] != -1) return;
    
    cat[id] = c;
    for(auto g: graph[id]){
        if(cat[g] != -1) continue;
        dfs(graph, cat, g, c);
    }
}

int main(){

    int n,m;
    std::cin >> n >> m;

    Graph graph(n);    
    for (int i = 0; i < m; i++){
        int a,b;
        std::cin >> a >> b;
        
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    std::vector<int> categories(n,-1);
    for (int i = 0; i < n; i++){
        dfs(graph, categories, i, i);
    }
    
    int q; std::cin >> q;
    bool ans[q];

    for (int i = 0; i < q; i++){
        int start, goal;
        std::cin >> start >> goal;

        if(categories[start] == -1){
            ans[i] = false;
        } else if(categories[goal] == -1){
            ans[i] = false;
        } else if(categories[start] == categories[goal]){
            ans[i] = true;
        } else {
            ans[i] = false;
        }
    }

    for (int i = 0; i < q; i++){
        if(ans[i])
            std::cout << "yes" << std::endl;
        else
            std::cout << "no" << std::endl;
    }
    
    return 0;
}