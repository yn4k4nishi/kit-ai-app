#include <iostream>
#include <vector>
#include <utility>

using Puzzle = std::vector<std::vector<int>>;

int N = 3;

int heuristic(Puzzle puzzle){
    int ret = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            int i_r, j_r;
            if(puzzle[i][j] != 0){
                i_r = (puzzle[i][j]-1) / N;
                j_r = (puzzle[i][j]-1) % N;
            } else {
                i_r = 2;
                j_r = 2;
            }

            ret += abs(i - i_r) + abs(j - j_r);
        }
    }
    return ret;   
}

std::vector<std::pair<int, int>> get_next(int i, int j){
    std::vector<std::pair<int, int>> ret;

    if(i != 0){
        std::pair<int, int> pos = std::make_pair( i-1, j);
        ret.push_back(pos);
    }

    if(i != N-1){
        std::pair<int, int> pos = std::make_pair( i+1, j);
        ret.push_back(pos);
    }

    if(j != 0){
        std::pair<int, int> pos = std::make_pair( i, j-1);
        ret.push_back(pos);
    }

    if(j != N-1){
        std::pair<int, int> pos = std::make_pair( i, j+1);
        ret.push_back(pos);
    }

    return ret;
}

Puzzle swap(Puzzle p, int i1, int j1, int i2, int j2){
    Puzzle r = p;
    int t = r[i1][j1];
    r[i1][j1] = r[i2][j2];
    r[i2][j2] = t;
    return r;
}

void print_puzzle(Puzzle p, int depth){
    std::cout << "d : " << depth << std::endl;
    for(auto a : p){
        for(auto b : a){
            std::cout << b << " ";
        }

        std::cout << std::endl;
    }

    char dummy;
    std::cin >> dummy;  
}

// Depth Limit Search
int DLS(Puzzle puzzle, int zi, int zj, int limit, int depth = 0){
    
    // print_puzzle(puzzle, heuristic(puzzle));

    if(heuristic(puzzle) == 0)
        return depth;

    if(limit < depth + heuristic(puzzle))
        return -1;

    auto next = get_next(zi, zj);
    for (auto nx : next){
        int i = nx.first;
        int j = nx.second;
        int t = DLS(swap(puzzle,zi, zj, i, j), i, j, limit, depth+1); 
        if( t > 0)
            return t;
    }
    
    return -1;
}

int main(){
    Puzzle puzzle;
    int zi,zj; // ゼロの位置

    // input
    std::vector<int> a;
    for (int i = 0; i < N; i++){
        a.clear();
        for (int j = 0; j < N; j++){
            int b; std::cin >> b;
            a.push_back(b);

            if(b == 0){
                zi = i;
                zj = j;
            }
        }
        puzzle.push_back(a);
    }

    std::cout << heuristic(puzzle) << std::endl;

    int limit = 1;
    int ans;
    while (DLS(puzzle, zi, zj, limit) < 0){
        limit ++;
    }
    std::cout << ans << std::endl;

    return 0;
}