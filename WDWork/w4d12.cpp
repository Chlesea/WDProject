//
// Created by Administrator on 2022/3/6.
//

# include "iostream"

int solve(int n);

int main() {
    using namespace std;
    int n;
    cin >> n;
    cout << solve(n);
}

int solve(int n) {
    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return solve(n-1) + solve(n - 2);
}
