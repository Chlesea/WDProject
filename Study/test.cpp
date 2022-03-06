//
// Created by Administrator on 2022/3/6.
//

# include "iostream"

int main() {
    using namespace std;
    int m = 2;
    int n = 6;
    int s1 = 1;
    for (int i = 0; i < n; ++i) {
        s1 *= (i+1);
        //m!
    }
    cout << s1;
    int s2 = 1;
    for (int i = 0; i < n - m; ++i) {
        s2 *= (i+1);
        //(n-m)!
    }
    cout << s2;
    std::cout << s1/s2;
    return 0;
}