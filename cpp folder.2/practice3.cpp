#include <iostream>
using namespace std;
//functions (pass by valeu and pass by reference)
// in pass by value the func takes the value, creates copies, changes and modifies the copies but the original value remains unchanged
// void doSomething(int num) {  for an integer
//     cout<<num<<endl;
//     num += 5;
//     cout<<num<<endl;
//     num += 5;
//     cout<<num<<endl;
// }
// int main(){
//     int num = 10;
//     doSomething(num);
//     cout<<num<<endl;

// return 0;
// }
// void doSomething(string s){  //for string
//     s[0] = 't';
//     cout<<s<<endl;
// }
// int main(){
//     string s = "raj";
//     doSomething(s);
//     cout<<s<<endl;
// return 0;
// }
//PASS BY REFERENCE (it takes original value and changes it, no copies made ORIGINAL value itself is changed)
void doSomething(string &s){  //for string pass by reference we use & sign after the data type and before the variable name 
    s[0] = 't';
    cout<<s<<endl;
}
int main(){
    string s = "raj";
    doSomething(s);
    cout<<s<<endl;
return 0;
}