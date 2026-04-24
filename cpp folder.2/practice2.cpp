#include<iostream>
using namespace std;
// void printName(string name){   //void function is used when we don't want to return any value from the function
//     cout<<"Hello "<<name<<endl;
// }
// int main(){
//     string name;
//     cin>>name;
//     printName(name);

//     string name2;
//     cin>>name2;
//     printName(name2);
//     return 0;

// int sum(int num1, int num2) {
//     int num3 = num1 + num2;
//     return num3;
// }
// int main(){
//     int num1, num2;
//     cin>>num1>>num2;
//     int result = sum(num1, num2);
//     cout<<result<<endl;
//     return 0;
// }
// void sum(int num1, int num2) {
//     int num3 = num1 + num2;
//     cout<<num3<<endl;
// }
// int main(){
//     int num1, num2;
//     cin>>num1>>num2;
//     sum(num1, num2);
//     return 0;
// }
int maxx(int num1, int num2) {
    if (num1 >num2) {
        return num1;
}   else{
    return num2;
}
}
int main(){
    int num1, num2;
    cin>>num1>>num2;
    int maxium = maxx(num1, num2);
    cout<<maxium<<endl;
    return 0;
}










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
// void dosomething(int num) {
//     if(num > 0) {
//         cout << "positive" << endl;
//     }
//     else if(num < 0) {
//         cout << "negative" << endl;
//     }
//     else {
//         cout << "zero" << endl;
//     }
// } 
// int main() {
//     int num;
//     cin >> num;
//     dosomething(num);
//     return 0;
// }
