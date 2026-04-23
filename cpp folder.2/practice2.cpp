#include<iostream>
using namespace std;
//RETURN FUNCTION
// int sum(int num1, int num2) {
//     int num3 = num1 + num2;
//     return num3; //returning the value of num3 to the caller function
// }

// int main() {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int result = sum(num1, num2); //storing the returned value of sum function in result variable
//     cout << result << endl;
//     return 0;
// }
void dosomething(int num) {
    if(num > 0) {
        cout << "positive" << endl;
    }
    else if(num < 0) {
        cout << "negative" << endl;
    }
    else {
        cout << "zero" << endl;
    }
} 
int main() {
    int num;
    cin >> num;
    dosomething(num);
    return 0;
}