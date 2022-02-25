//
// Created by Administrator on 2022/2/25.
//

# include "iostream"
# include "iomanip"

int main() {
    using namespace std;
    int i;
    char j;
    float k;
    cin >> i >> j >> k;
    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << i + j + k;
}