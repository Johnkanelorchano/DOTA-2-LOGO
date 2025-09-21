#include <iostream>

int main() {
    int n = 23;                    
    if (n % 2 == 0) ++n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            bool border = (i == 0 || i == n-1 || j == 0 || j == n-1);
            if (border) { std::cout << '#'; continue; }

            if (j == i || j == i+1) { std::cout << '/'; continue; }

            bool holeTL = (i-5)*(i-5) + (j-6)*(j-6) <= 3;              
            bool holeBR = (i-(n-6))*(i-(n-6)) + (j-(n-7))*(j-(n-7)) <= 3;  
            if (holeTL || holeBR) { std::cout << 'o'; continue; }

            std::cout << ' ';
        }
        std::cout << "\n";
    }

    std::string title = "DOTA 2";
    int left = (n - static_cast<int>(title.size())) / 2;
    std::cout << std::string(left, ' ') << title << "\n";
    return 0;
}
