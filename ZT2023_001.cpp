#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // 向 map<int, int> 中插入元素
    map<int, int> int_map;
    int_map.insert(make_pair(1, 10));  // 使用 insert 函数插入元素
    int_map[2] = 20;  // 使用 [] 操作符插入元素，值是20 
    int_map[5]++;// 插入5，值是0再+1 

    // 向 map<string, int> 中插入元素
    map<string, int> string_map;
    string_map["one"] = 1;  // 使用 [] 操作符插入元素

    // 输出 map<int, int> 的内容
    cout << "Map<int, int> elements:" << endl;
    for (map<int, int>::iterator it = int_map.begin(); it != int_map.end(); ++it) {
        cout << it->first << ": " << it->second << " ";
        cout<< int_map[it->first]<< endl;// 等价于it->second 
    }

    // 输出 map<string, int> 的内容
    cout << "Map<string, int> elements:" << endl;
    for (map<string, int>::iterator it = string_map.begin(); it != string_map.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}

