#include <iostream>
#include <vector>

class Node {
    private:
    int id;
    int d = 0; // 発見時刻
    int f = 0; // 終了時刻 
    std::vector<Node*> v;

    public:
    Node(int id):id(id){}

    bool is_reached(){
        if(d != 0){
            return true;
        }
        return false;
    }

    int search(int time=1){
        if (is_reached()){
            return time;
        }
        
        
        d = time;
        time++;
        
        for (auto i : v){
            time = i->search(time);
        }

        f = time;
        time++;

        return time;
    }

    void add_node(Node &node){
        if(id == node.get_id())
            return;
        
        v.push_back(&node);
    }

    int get_id(){ return id; }

    int get_f(){ return f; }
    
    int get_d(){ return d; }

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
    
    int time = 1;
    for (int i=0; i<n; i++){
        time = nodes[i].search(time);
    }

    for (auto l : nodes){
        std::cout << l.get_id() << " ";
        std::cout << l.get_d() << " " ;
        std::cout << l.get_f() << std::endl;
    }
    

    return 0;
}