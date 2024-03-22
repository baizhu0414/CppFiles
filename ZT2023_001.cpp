#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // �� map<int, int> �в���Ԫ��
    map<int, int> int_map;
    int_map.insert(make_pair(1, 10));  // ʹ�� insert ��������Ԫ��
    int_map[2] = 20;  // ʹ�� [] ����������Ԫ�أ�ֵ��20 
    int_map[5]++;// ����5��ֵ��0��+1 

    // �� map<string, int> �в���Ԫ��
    map<string, int> string_map;
    string_map["one"] = 1;  // ʹ�� [] ����������Ԫ��

    // ��� map<int, int> ������
    cout << "Map<int, int> elements:" << endl;
    for (map<int, int>::iterator it = int_map.begin(); it != int_map.end(); ++it) {
        cout << it->first << ": " << it->second << " ";
        cout<< int_map[it->first]<< endl;// �ȼ���it->second 
    }

    // ��� map<string, int> ������
    cout << "Map<string, int> elements:" << endl;
    for (map<string, int>::iterator it = string_map.begin(); it != string_map.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}

