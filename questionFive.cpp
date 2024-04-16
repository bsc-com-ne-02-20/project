
#include <iostream>

using namespace std ;

double calculateTriangleArea(double base, double height)  {
    return 0.5 * base * height;
                                 }

       double calculateRectangleArea(double length, double width) {
           return length * width;
                          }

                  double calculateSquareArea(double side) {
                                  return side * side;
                                                    }

int main() {
    int  choice;
    do {
        cout << "Select shape to calculate the area:\n"
     << "1.   Triangle\n"
        << "2.  Rectangle\n"
    << "3.    Square\n"
            << "Enter your choice (1-3, or 0 to quit  ): ";
        cin    >> choice;
       
                                     switch(choice)   {
            case 1:  {
                         double base, height;
               cout << "Enter the base and height of the triangle: ";
        cin >> base >> height;
             cout << "Area of the triangle: " << calculateTriangleArea(base, height)  << "\n";
                break;
               }



            case 2:  {
                        double length, width;
            cout << "Enter the length and width of the rectangle: ";
             cin >> length >> width;
            cout << "Area of the rectangle: " <<  calculateRectangleArea(length,  width) <<   "\n";
                break;
    }
            
            
            case 3:   {
                double  side;
                cout <<  "Enter the side length of the square:  ";
                cin >> side;

                cout << "Area of the square: " << calculateSquareArea(side) <<"\n";
                break;
            }

        case 0:
            cout   <<  "Exiting program."  <<  "\n";
                   break;

                default:
        cout << "Invalid choice. Please enter a number betwen 1 and 3, or 0 to  quit."  <<  "\n";
                break;
        }
    } while (choice != 0);
   
   
   
   
   
   
   
   
         return 0;
     
     
     
     }