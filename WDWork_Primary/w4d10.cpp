//
// Created by Administrator on 2022/3/4.
//
# include "iostream"

void change(int n);
int main() {
    using namespace std;
    int m;
    cin >> m;
    change(m);
    return 0;
}

void change(int n) {
    std::cout << n / 2;
}