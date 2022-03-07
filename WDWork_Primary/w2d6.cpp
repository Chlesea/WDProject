//
// Created by Administrator on 2022/2/26.
//

# include "iostream"
# include "string"
# include "algorithm"

int main() {
    using namespace std;
    string s1, s2;
    cin >> s1;
    s2.assign(s1);
    cout << s2;
    reverse(s1.begin(), s1.end());
    if (s1 == s2)
        cout << "yes";
    else
        cout << "no";
}