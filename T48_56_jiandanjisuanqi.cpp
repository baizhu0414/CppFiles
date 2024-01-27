#include<bits/stdc++.h>
#include <iomanip>
using namespace std;

// +、-无法压住+、-、*、/，因此需要提前运算一次
bool needYunSuan(char c, char top) {
    if ((c == '*' || c == '/') && (top == '+' || top == '-')) {
        return false;
    } else {
        return true;
    }
}

double calculate(double num1, double num2, char c) {
    if (c == '+') {
        return num1 + num2;
    } else if (c == '-') {
        return num1 - num2;
    } else if (c == '*') {
        return num1 * num2;
    } else if (c == '/') {
        return num1 / num2;
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

// 表达式中只有非负整数
int getCurNum(string str, int &pos) {
    int num=0;
    while(pos< str.length()) {
        if(str[pos]>='0'&& str[pos]<='9') {
            num = num*10+(str[pos]-'0');
            pos++;
        } else {
            break;
        }
    }
    return num;
}

// 例题:5.6
int main() {
    string str;
    while (getline(cin, str)) {
        if (str == "0") {
            break;
        }
        stack<double> nums;
        stack<char> fuhao;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == ' ') {
                continue;
            }
            // 采用两个栈进行中缀表达式运算
            if (str[i] >= '0' && str[i] <= '9') {
                nums.push(getCurNum(str, i));
            } else if (!fuhao.empty() && needYunSuan(str[i], fuhao.top())) {
                i--;
                process(nums, fuhao);
            } else {
                fuhao.push(str[i]);
            }
        }
        while(!fuhao.empty()) {
            process(nums, fuhao);
        }
        cout<< fixed<<setprecision(2)<< nums.top()<< endl;
        nums.pop();
    }
    return 0;
}


