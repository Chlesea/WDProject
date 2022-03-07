//
// Created by Administrator on 2022/2/27.
//

# include "iostream"

int main() {
    int n;
    std::cin >> n;
    int num = 1;
    for (int i = 0; i < n; ++i) {
        num *= (i + 1);
    }
    std::cout << num;
}