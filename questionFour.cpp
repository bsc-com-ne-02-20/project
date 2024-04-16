#include <iostream>


using namespace std ;

int main() {
    int input;
    do {
        cout << "Enter an integer between 5 and 10: ";
        cin >> input;
        if (cin.fail() || input < 5 || input > 10)    {
            cout << "Invalid input. Please enter an integer betwen 5 and 10." "\n";
            cin.clear();
            cin.ignore(100, '\n');   
          }
    
    
    
    } while   (input < 5 || input > 10);
    
   cout  << "Your input " << input    << " has been acceptd." "\n";
    return 0;
}
