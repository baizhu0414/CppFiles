#include<bits/stdc++.h>
using namespace std;
/**
azure C silver C orange blue AAAA azure silver red gold CCCCC orange CCCC orange gold III BBB azure CCCCCC
CCC(red/III)
silver
*/
int main() {
    string str;
    string res;
    string a, b;
    while (getline(cin, str)) {
        getline(cin, a);// ���뷽ʽҪͳһ��������ֶδ��󣡣���
        getline(cin, b);// s�еĵ���a�滻Ϊ����b
        res = "";
        int flag = 0; // ���һ�γ���λ��
        for (int i = 0; i < str.length() - a.length(); i++) {
            for (int j = 0; j < a.length(); j++) {
                if (str[i + j] != a[j]) {
                    res += str[i];
                    break;
                } else if (j == a.length() - 1) {
                	// ��һ���ַ��������ַ���ǰΪ' ' 
                    if ((i - 1 <= 0 || str[i - 1] == ' ')
                    // ���һ���ַ��������ַ�����Ϊ' ' 
                            && (i + j + 1 == str.length() || str[i + j + 1] == ' ')) {
                        flag = i;
                        res += b;
                        i = i + a.length() - 1; // ���и�i++
                    } else {
                        res += str[i];
                    }
                }
            }
        }
        int restPos = max(str.length() - a.length(), flag + a.length());
        res += str.substr(restPos);
        cout << res << endl;
    }
    return 0;
}
