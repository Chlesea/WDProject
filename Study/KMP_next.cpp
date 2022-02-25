//
// Created by Administrator on 2022/2/25.
//

# include "iostream"
# include "string"

void get_next(std::string T, int next[]) {
    int i = 1, j =0;
    next[1] = 0;
    while (i < T.size()) {
        if (j == 0 || T[i] == T[j]) {
            i++;
            j++;
            next[i] = j;
        } else {
            j = next[j];
        }
    }

}

int main() {
    using namespace std;
    string T = "ababccd";
    int next[T.size()];
    get_next(T, next);
}