// 回文数，输入一个数字，判断是否为回文数，是输出 ture，否输出 false
// 此题目给出的数字范围需要用到 long 类型
#include "iostream"
#include "cmath"


using namespace std;
// 判断回文数
bool isPalindrome(long x);
void Output(bool x);

int main() {
    // 判断回文数
    cout << "Enter a number for judge" << endl;
    long x;
    cin >> x;
    Output(isPalindrome(x));
    return 0;
}

bool isPalindrome(long x){
    // 所有负数都不是回文数
    if (x < 0)
        return false;
    // 所有个位数都是回文数
    if (x >= 0 && x <= 9)
        return true;
    // 所有以 0 结尾的数字都不是回文数
    if (x % 10 == 0){
        return false;
    }
    // 剩余数字判断
    long y = 0, z = x;
    while (z > 0){
        y += z % 10;
        y *= 10;
        z = (z - z % 10) / 10;
    }
    y /= 10;
    if (y == x)
        return true;
    else return false;
}

void Output (bool x){
    if (x == true)
        cout << "true\n";
    else
        cout << "false\n";
}
