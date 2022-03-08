//
// Created by Administrator on 2022/3/7.
//
# include "iostream"
# include "string"

struct student{
    int id;
    std::string name;
    char sex;
} s;

int main() {
    using namespace std;
    cin >> s.id >> s.name >> s.sex;
    cout << s.id  << " " + s.name + " "<< s.sex;
    return 0;
}