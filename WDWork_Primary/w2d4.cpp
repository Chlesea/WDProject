//
// Created by Administrator on 2022/2/24.
//

# include "iostream"

int main() {
    using namespace std;
    int n;
    cin >> n;
    if (n % 100 != 0 && n % 4 == 0)
        cout << "yes";
    else if (n % 400 == 0)
        cout << "yes";
    else
        cout << "no";
}