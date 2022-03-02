//
// Created by Administrator on 2022/3/2.
//

# include "iostream"

int main() {
    using namespace std;
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a == 2)
            sum++;
    }
    cout << sum;

}