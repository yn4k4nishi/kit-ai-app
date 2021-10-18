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
};

int main(){
    int n;
    std::cin >> n;

    std::vector<Node> nodes;
    for (int i = 0; i < n; i++){
        nodes.push_back(Node(i+1));
    }
    
    for (int i = 0; i < n; i++){
        int id;
        std::cin >> id;

        int a;
        std::cin >> a;

        for (int j = 0; j < a; j++){
            int k;
            std::cin >> k;
            nodes[id-1].add_node(nodes[k-1]);
        }
        
    }

    nodes[0].search();

    for (auto i : nodes){
        std::cout << i.get_id() << " " << i.get_distance() << std::endl;
    }
    

    return 0;
}