//
// Created by Administrator on 2022/2/23.
//

# include "iostream"

int main() {
    int n;
    std::cin >> n;
    if (n >= 65 && n <= 122)
        std::cout << char(n);
    return 0;
}