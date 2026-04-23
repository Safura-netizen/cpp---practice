#include<iostream>
using namespace std;
int sum(int num1, int num2) {
    int num3 = num1 + num2;
    return num3; //returning the value of num3 to the caller function
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int result = sum(num1, num2); //storing the returned value of sum function in result variable
    cout << result << endl;
    return 0;
}