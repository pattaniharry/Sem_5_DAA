#include <iostream>
#include <string>
using namespace std;

// int main() {

//   float a, b;
//   cout << "Enter First Number ";
//   cin >> a;

//   cout << "Enter Second Number ";
//   cin >> b;

//   cout << "The Sum is " << a + b << endl;
//   cout << "The Difference is " << a - b << endl;
//   cout << "The Multiplication is " << a * b << endl;
//   cout << "The division is " << a / b << endl;
// }

// int main() {
//   float age;
//   cout << "Enter your age ";
//   cin >> age;

//   return 0;
// }

//   if (age > 150) {
//     cout << "age is invalid" << endl;

//   } else if (age >= 18) {
//     cout << "Your are an adult" << endl;
//   } else {
//     cout << "You are a child" << endl;
//   }
// }

// int main() {
//   int index = 0;
//   do {
//     cout << "we are at index number " << index << endl;
//     index++;
//   } while (index < 34);
//   return 0;
// }

// for loop
// int main() {
//   int index = 24;
//   for (int i = 0; i <= index; i++) {
//     cout << "you are at index number" << i << endl;
//   };
//   return 0;
// }

// functions

// int sum(int num1, int num2) {
//   int result = num1 + num2;
//   return result;
// };

// int main() {

//   int a, b;
//   cout << "Enter First Number ";
//   cin >> a;

//   cout << "Enter Second Number ";
//   cin >> b;

//   cout << "The function Returned " << sum(a, b) << endl;

//   return 0;
// }

// arrays

// int main(){

// int arr [] = {1,3,4,5};
//   cout<<arr[3];

//   return 0;
// }

// 2d array

// int main() {

//   int arr[2][3] = {
//   {2, 3, 4},
//   {5, 4, 3}
// };

//   for (int i = 0 ; i<2; i++){
//     for(int j = 0 ; j<3;j++){
//       cout<<"The values at  " <<i<<","<< j <<"is "<<arr[i][j]<<endl;
//     }
//   }
//   return 0;
// }

// typecasting
// int main() {

//   int a = 32;
//   float b = 56.99;
//   cout << (float)a/12<<endl;
//   cout <<(int) b ;
//   return 0;
// }

// strings

// int main() {

//   string name = "harry";
//   cout << " The name is " << name<<endl;
//   cout << " The name is " << name.length()<<endl;
//   cout << " The name is " << name.substr(0,3)<<endl;
//   cout << " The name is " << name;

//   return 0;
// }

// pointers
// pointes are special variable that returns the address

// int main() {
//   int a = 34;
//   int *ptra = &a;
//   //* is used for derefrencing and & is used for refrencing
//   cout << *ptra << endl;
//   cout << &a << endl;
//   cout << ptra << endl;
//   return 0;
// }

// classes and object
int add(int a, int b) {
  int c = a + b;
  return c;
}
class Employee {
public:
  string name;
  int salary;

  void PrintDetails() {
    cout << this->name << endl;
    cout << this->salary << endl;
  }
};

int main() {

  Employee har;
  har.name = "harry";
  har.salary = 1200000;

  har.PrintDetails();

  return 0;
}