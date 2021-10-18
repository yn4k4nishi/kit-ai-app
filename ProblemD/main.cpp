#include <iostream>
#include <vector>

class Node {
    private:
    int id;
    int distance = -1;
    std::vector<Node*> v;

    public:
    Node(int id):id(id){}

    void search(int distance = 0){
        if(this->distance == -1){
            this->distance = distance;
        } else if(this->distance < distance){
            return;
        } else {
            this->distance = distance;
        }


        for (auto i : v){
            i->search(distance+1);
        }
        
    }

    void add_node(Node &node){
        if(id == node.get_id())
            return;
        
        v.push_back(&node);
    }

    int get_id(){ return id; }
    int get_distance(){ return distance; }
    
    void reset(){
        distance = -1;
    }
};

int main(){
    int n,m;
    std::cin >> n;
    std::cin >> m;

    std::vector<Node> nodes;
    for (int i = 0; i < n; i++){
        nodes.push_back(Node(i+1));
    }
    
    for (int i = 0; i < m; i++){
        int id, id2;
        std::cin >> id;
        std::cin >> id2;

        nodes[id].add_node(nodes[id2]);
        nodes[id2].add_node(nodes[id]);
    }

    int q_num;
    std::cin >> q_num;

    bool ans[q_num];

    for (int i = 0; i < q_num; i++){
        int a, b;
        std::cin >> a;
        std::cin >> b;

        nodes[a].search();
        if(nodes[b].get_distance()>0){
            ans[i] = true;
        }else{
            ans[i] = false;
        }

        for (auto i : nodes){
            i.reset();
        }

    }

    for (int i = 0; i < q_num; i++){
        if(ans[i])
            std::cout << "yes" << std::endl;
        else
            std::cout << "no" << std::endl;
    }
    

    

    return 0;
}