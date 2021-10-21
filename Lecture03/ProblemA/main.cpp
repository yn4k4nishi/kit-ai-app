#include <iostream>

int main(){
    int n;
    std::cin >> n;
    
    int v[n][n];
    
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            v[i][j] = 0;
        }

        int k;
        std::cin >> k;
        std::cin >> k;

        for (int j = 0; j < k; j++){
            int a;
            std::cin >> a;
            v[i][a-1] = 1;
        }
        
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cout << v[i][j];
            if(j != n-1){
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}