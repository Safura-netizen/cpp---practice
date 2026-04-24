// #include <iostream>
// using namespace std;
// int main() {
    // int a = 5;
    // cout << a << endl;
    // char ch = 'b';
    // cout << ch << endl;
    // bool bl = true;
    // cout << bl << endl;
    // double d = 1.234;
    // cout << d << endl;
    // int size = sizeof(d);
    // cout << "Size of d is: " << size << endl; 
//     int a = 'a';
//     cout << a << endl;
//     char ch = 98;
//     cout << ch << endl;
//     char ch1 = 123456;
    //    cout<<ch1<<endl;
    //    int a = 2;
    //    int b = 3;
    //    bool i = (a<=b);
    //    cout << i << endl;
    //    bool p = (a>=b);
    //    cout << p <<endl;
    // int n;
    // cin>>n;
    // cout << "the value of n is: " << n <<endl;
    // if(n>0){
    //     cout << "A is positive" << endl;
    // }
    // else{
        // cout << "A is negative" << endl;
    // int a;
        // cin>>a>>b;
        // cout << "the value of a and b is: "<<a<<" "<<b<<endl;
    // a = cin.get();
    // cout << "value of a is: " <<a<<endl;

#include<iostream>
using namespace std;
    // int a,b;
    // cout <<"envter value of a = "<< endl;
    // cin>>a;
    // cout <<"enter value of b= "<< endl;
    // cin>>b;
    // if(a>b){
    //     cout <<"a is bigger" << endl;
    // }
    // else{
    //     cout <<"b is bigger"<<endl;
    // }
    // int a;
    // cout  <<"enter the value of a:" << endl;
    // cin>>a;
    // if(a>0){
    //     cout << " a is positive" << endl;
    // }
    // else{
    //     if(a<0){
    //         cout <<"a is negative "<<endl;
    //     }
    //     else{
    //         cout << "a is 0" << endl;
    //     }
    // }
    // if(a>0){
    //     cout << " a is positive" << endl;
    // }
    // else if(a<0){
    //     cout << " a is negative" << endl;
    // }
    // else if(a==0){
    //     cout<<"a is 0" << endl;
    // }
    // char ch;
    // cout <<"enter the character "<< endl;
    // cin>>ch;
    // if(ch >= 'a' && ch <= 'z'){
    //     cout << " lowercase" <<endl;
    // } 
    // else if(ch >= 'A' && ch <= 'Z'){
    //     cout << " uppercase " <<endl;
    // }
    // else if(ch >= '1' && ch <= '9'){
    //     cout << "number"<<endl;
    // }
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     cout<<i<<" ";
    //     i = i+1;
    // }
    // int n;
    // cin>>n;
    // int i = 1;
    // int sum = 0;
    // while(i<=n){
    //     sum = sum + i;
    //     i = i+1;12
    
    // }
    // cout<<sum<< endl;
    // int n;
    // cin>>n;
    // int i = 0;
    // int sum = 0;
    // while(i<=n){
    //     sum = sum + i;
    //     i = i+2;
    // }
    // cout<<sum<< endl;
    // int n;
    // cin>>n;
    // int i =2;
    // while(i<n){
    //     if(n%i==0){
    //     cout <<"not prime"<< i << endl;
    // }
    //     else {
    //         cout <<"prime"<<i<<endl;
    //     }
    //     i = i + 1;
    // }
    // string str;
    // getline(cin, str); //GETLINE FUNCTION IS USED TO TAKE INPUT IN THE FORM OF STRING
    // cout << str;
    // return 0;
    // int day;
    // cin>>day;
    // switch(day){  //SWITCH CASE IS USED TO CHECK THE VALUE OF DAY AND PRINT THE CORRESPONDING DAY OF THE WEEK
    //     case 1:
    //     cout <<"Monday"<<endl;
    //     break;
    //     case 2:
    //     cout <<"Tuesday"<<endl;
    //     break;
    //     case 3:
    //     cout <<"Wednesday"<<endl;
    //     break;
    //     case 4:
    //     cout <<"Thursday"<<endl;
    //     break;
    //     case 5:
    //     cout <<"Friday"<<endl;
    //     break;
    //     case 6:
    //     cout <<"Saturday"<<endl;
    //     break;
    //     case 7:
    //     cout <<"Sunday"<<endl;
    //     break;
    //     default:
    //     cout<<"invalid day"<<endl;
    // }
    // int age;
    // cin>>age;
    // cout<<age<<endl;
    // int arr[5];
    // cin>> arr[0]>> arr[1]>> arr[2]>> arr[3] >> arr[4];

    // arr[3] += 1; //can modify an array my addin replacing or anything else
    // cout<<arr[3]<<endl;
    // string s = "safura"; //these are characters stored in indexes of a string and we can modify a string by replacing or anything else
    // int len = s.size();
    // s[len - 1] = 't'; //can modify a string by replacing or anything else
    // cout << len << endl;
    // cout << s << endl;

    //FOR LOOP

    // for(int i = 1; i<=5; i = i + 1){
    //     cout << "safura" <<endl;
    // }

    // int i;  
    // for( i = 1; i<=5; i = i + 1){
    //     cout << "safura"<< " " << i << endl;
    // }
    // cout << i << endl; //will print 6 because it is when loop will terminate and i will be 6 at that time IF STATEMENTS CAN BE WRITTEN INSIDE FOR AND WHILE LOOPS

    // int i = 1;          //initialization of i
    // while(i<=5){        //condition of while loop
    //     cout << "safura" << " " << i << endl;
    //     i = i + 1;     //increment of i
    // }
    
    //DO WHILE LOOPS  
//     int i =2;
//     do {
//         cout << "safura" << " " << i << endl;
//         i = i + 1;
//     }while(i<=1);   //will execute the loop body at least once(even if the condition is false initially) because the condition is checked after the loop body is executed
// }
        //FUNCTION
        // void printName() {  //function definition
        //     cout << "safura" << endl;
        // }
        // int main() {
        //     printName();   //function call
        //     return 0;
        // }

// void printName(string name) {
//     cout << "hey " << name << endl;
// }

// int main() {
//     string name;
//     cin >> name;
//     printName(name);
//     return 0;
// }





