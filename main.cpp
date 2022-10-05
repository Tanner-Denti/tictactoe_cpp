#include <iostream>
#include "Game/Director.h"
using namespace std;

int main(){

    Director director;
    director.start();

    return 0;
}




/*
 Below are my notes from learning c++ syntax
 */
//
////void swapNums(int &x, int &y) {  // this is how we pass variables into a function by reference
////  int z = x;
////  x = y;
////  y = z;
////}
//
//// This is called function overloading, used to handle the same scenario with different parameter options
//// multiple functions can have the same name as long as the number of or type of parameters are different.
////int plusFunc(int x, int y) {
////  return x + y;
////}
////
////double plusFunc(double x, double y) {
////  return x + y;
////}
//
////class structure
//class MyClass {       // The class
//    public:               // Access specifier, by default things will be private if not specified. Also everything indented under 'public':' or 'private:' will be public or private
//        int myNum;        // Attribute (int variable)
//        string myString;  // Attribute (string variable)
//        MyClass(){
//            //stuff          This is the constructor, uses the same name as the class and called when instantiated
//        }
//        void myMethod(){        // we can declare the method here, then outside of the class fill it in like this:
//                                // void MyClass::myMethod() { stuff in here; }
//            cout << "hello!";
//        }
//};
//
//// inheritance is the same as c# except you add the access specifier. Here it's "class childClass : public parentClass"
//// use the "protected:" access specifier if you want children classes to be able to use the attributes of parent classes
//// no keyword to override methods for polymorphism. Just create the same method name with different content, it will override automatically
//
//int main() {
//    cout << "Hello, World!" << endl;
//    cout << "Yeeeeah dude" << endl;
//
//    int number = 5;
//    cout << number << endl;
//
//    cout << "The number " << number << " is very small" << endl;
//
//    // we can create multiple variable of a given type, and only declare the data type once if we seperate them with commas
//    int x = 1, y = 2;
//    cout << x << " + " << y << " = " << x + y << endl;
//
//    // we can create constant variables that wont change like this
//    const int minutesPerHour = 60;
//
//    // use "cin >>" to read data from the terminal
//    int z;
////    cout << "type a number";
////    cin >> z;
////    cout << "number: " << z << endl;
//
//    float f1 = 35e4;
//    cout << f1 << endl;
//
//    // use ASCII values for char
//    char a = 65, b = 66, c = 67;
//    cout << a;
//    cout << b;
//    cout << c;
//
//    string hello = "hi";
//    cout << hello << endl;
//
//    // since strings are a collection, we can append one to another
//    string firstName = "John ";
//    string lastName = "Doe";
//    string fullName = firstName.append(lastName);
//    cout << fullName << endl;
//
//    // c++ will only accept characters up to the first white space in an input statement so we need to use a function to help
//    string full_name;
//    cout << "Type your first and last name: ";
//    getline(cin, full_name); // takes the cin input object and the name of the variable you are assigning the info to
//    cout << "your name is: " << full_name << endl;
//
//    // if statements in c++
//    int j = 1;
//    int l = 2;
//    if (j > l) {
//        cout << "greater" << endl;
//    } else if (j < l) {
//        cout << "less than" << endl;
//    } else {
//        cout << "equal" << endl;
//    }
//
//    //shorthand is just like c#
//    int time = 20;
//    string result = (time < 18) ? "Good day." : "Good evening.";
//    cout << result << endl;
//
//    // arrays
//    // rather than place the brackets outside of the datatype, we put them outside of the variable name with the capacity.
//    // we don't have to include the size of the capacity, but if we don't and we want to add new values later, the computer has to create
//    // a whole new array which isn't efficient
//    string cars[] = {"benz", "ferrari", "lambo"};
//    cout << cars[1] << endl;
//    cout << sizeof(cars) / sizeof(string) << endl;
//
//    cars[3] = "porche";
//    cout << cars[3] << endl;
//
//    // we can access the memory address of a variable in c++ using the & operator in front of it
//    // it will display in hexidecimal
//    string some_variable = "Word";
//    cout << &some_variable << endl;
//
//    // When we assign the memory address to a variable it's called a pointer. This will be of the (whatever data type the variable you are getting the memory address for is)* data type, the * indicating that it's a pointer
//    // using the some_variable variable above
//
//    string* ptr = &some_variable;
//    cout << "just pointer" << endl;
//    cout << ptr << endl;
//    cout << "dereferenced: " << endl;
//    cout << *ptr << endl; // putting the * back in front of the pointer will "dereference" it and display the actual value of the memory location
//
//    *ptr = "longer string of text"; // changed the value of the actual variable it was referencing
//    cout << some_variable << endl;
//    cout << ptr << endl;
//
//    //each of these is valid pointer syntax but the first is preferred
//    string* mystring1; // Preferred
//    string *mystring2;
//    string * mystring3;
//
//    return 0;
//}
