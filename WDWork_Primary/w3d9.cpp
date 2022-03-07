//
// Created by Administrator on 2022/3/3.
//

# include "iostream"
# include "string"
# include "algorithm"

int main() {
    using namespace std;
    string s1, s2;
    getline(cin, s1);
    s2.assign(s1);
    //cout << s1;
    //cout << s2;
    reverse(s2.begin(), s2.end());
    if (s1.compare(s2) < 0)
        cout << -1;
    else if (s1.compare(s2) > 0)
        cout << 1;
    else
        cout << 0;

}