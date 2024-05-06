#include <iostream>
#include <string>

using namespace std;


int main() {
    int* dynInt = new int;

   
string* dynStr = new string;

    cout << "Enter an integer value: ";
cin >> *dynInt;

   
    cout << "Enter a string value: ";
    
    cin.ignore(); 
    
    
    getline(cin, *dynStr);

cout << "Dynamicaly alocated integer value: " << *dynInt << endl;

  cout << "Dynamicaly alocated string value: " << *dynStr << endl;

 delete dynInt;
    delete dynStr;

    return 0;
}
