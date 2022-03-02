//
// Created by Administrator on 2022/2/28.
//

# include "iostream"

int main() {
    int num = 0;
    for (int x = 1; x < 10; ++x) {
        for (int y = 1; y < 20; ++y) {
            for (int z = 1; z < 40; ++z) {
                if (10 * x + 5 * y + z * 2 + (40 - x - y - z) == 100 &&
                x + y + z < 40)
                    num++;
            }
        }
    }
    std::cout << num;
}