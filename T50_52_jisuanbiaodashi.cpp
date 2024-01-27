#include<bits/stdc++.h>
using namespace std;

int getNum(string str, int& pos) {
    int num = 0;
    while (pos < str.length()) {
        if (str[pos] >= '0' && str[pos] <= '9') {
            num = num * 10 + (str[pos] - '0');
            pos++;
        } else {
            pos--;// 回退一位
            break;
        }
    }
    return num;
}

bool needYunSuan(char c, char top) {
    if ((c == '*' || c == '/') && (top == '+' || top == '-')) {
        return false;
    } else {
        return true;
    }
}

double calculate(double num1, double num2, char c) {
    if (c == '+') {
        return num1+num2;
    } else if (c == '-') {
        return num1-num2;
    } else if (c == '*') {
        return num1*num2;
    } else if (c == '/') {
        return num1/num2;
    } else {
        return -1;
    }
}

void process(stack<double>& nums, stack<char>& fuhao) {
    double num2 = nums.top();
    nums.pop();
    double num1 = nums.top();
    nums.pop();
    char c = fuhao.top();
    fuhao.pop();
    nums.push(calculate(num1, num2, c));
}

int main() {
    string str;
    stack<double> nums;
    stack<char> fuhao;
    while (cin >> str) {
        for (int i = 0; i < str.length(); i++) {
            if (str[i] >= '0' && str[i] <= '9') {
                nums.push(getNum(str, i));
            } else if (!fuhao.empty() && needYunSuan(str[i], fuhao.top())) {
                i--;// 回退一个符号
                process(nums, fuhao);
            } else {
                fuhao.push(str[i]);
            }
        }
    }
    while(!fuhao.empty()) {
        process(nums, fuhao);
    }
    cout<< fixed<< setprecision(0)<< nums.top()<< endl;
    return 0;
}
