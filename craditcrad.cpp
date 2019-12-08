#include <iostream>
using namespace std;

long long check1();

int main() {
    long long num = check1();
    int x= 0;
    int y = 0;
    int z = 0;
    int total = 0; // x,y 偶數位  z 奇數位  total 檢查值
    if (num / 10000000000000 >= 34 && num / 10000000000000 <= 37) {   // American Express：15
        z = z + num % 10;
        num = num / 10;
        x = x + num % 10 * 2 / 10;
        y = y + num % 10 * 2 % 10;
        for (int i = 0; i < 6; i++) {
            z = z + (num / 10) % 10;
            num = num / 100;
            x = x + num % 10 * 2 / 10;
            y = y + num % 10 * 2 % 10;
        }
        z = z + (num / 10) % 10;
        total = x + y + z;
        if (total % 10 == 0) {
            cout << "卡號正確，此卡為American Express";
        } else {
            cout << "錯誤卡號";
        }
    } else if (num / 100000000000000 >= 51 && num / 100000000000000 <= 55) {   // MasterCard：16
        z = z + num % 10;
        num = num / 10;
        x = x + num % 10 * 2 / 10;
        y = y + num % 10 * 2 % 10;
        for (int i = 0; i < 7; i++) {
            z = z + (num / 10) % 10;
            num = num / 100;
            x = x + num % 10 * 2 / 10;
            y = y + num % 10 * 2 % 10;
        }
        total = x + y + z;
        if (total % 10 == 0) {
            cout << "卡號正確，此卡為MasterCard";
        } else {
            cout << "錯誤卡號";
        }
    } else if (num / 1000000000000000 == 4) {  // Visa：16
        z = z + num % 10;
        num = num / 10;
        x = x + num % 10 * 2 / 10;
        y = y + num % 10 * 2 % 10;
        for (int i = 0; i < 7; i++) {
            z = z + (num / 10) % 10;
            num = num / 100;
            x = x + num % 10 * 2 / 10;
            y = y + num % 10 * 2 % 10;
        }
        total = x + y + z;
        if (total % 10 == 0) {
            cout << "卡號正確，此卡為Visa";
        } else {
            cout << "錯誤卡號";
        }
    } else if (num / 1000000000000 == 4) {    // Visa：13
        z = z + num % 10;
        num = num / 10;
        x = x + num % 10 * 2 / 10;
        y = y + num % 10 * 2 % 10;
        for (int i = 0; i < 5; i++) {
            z = z + (num / 10) % 10;
            num = num / 100;
            x = x + num % 10 * 2 / 10;
            y = y + num % 10 * 2 % 10;
        }
        z = z + (num / 10) % 10;
        total = x + y + z;
        if (total % 10 == 0) {
            cout << "卡號正確，此卡為Visa";
        } else {
            cout << "錯誤卡號";
        }
    } else {
        cout << "錯誤卡號";
    }

}
long long check1() {
    long long n;
    do {
    cout << "請輸入欲檢查的信用卡號(至少13碼)：";
    cin >> n;
    } while (n < 1000000000000);
    return n;
}
