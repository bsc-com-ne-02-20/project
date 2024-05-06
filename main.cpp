#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

int main()       {
    using namespace shapes;

    char        choice;
    do {
        std::cout << "Select shape to calculate area (s for square, t for triangle, c for circle, q to quit): ";
  std::cin >> choice;

        switch (choice) {
            case 's': {
                double side;
           std::cout << "Enter side length of square: ";
      std::cin >> side;
                Square square(side);
        std::cout << "Area of square: "    << Area::calculateArea(square) << std::endl;
                break;
            }
            case 't': {
                double base, height;
       std::cout << "Enter base and height of triangle: ";
                std::cin >> base >> height;
         Triangle triangle(base, height);
  std::cout << "Area of triangle: " << Area::calculateArea(triangle) << std::endl;
                break;
       }
            case 'c': {
                double radius;
        std::cout << "Enter radius of circle: ";
                std::cin >> radius;
         Circle circle(radius);
            std::cout << "Area of circle: " << Area::calculateArea(circle) << std::endl;
                break;
 }
            case 'q':
                std::cout << "Exiting program..." << std::endl;
                break;
 default:
     std::cout << "Invalid choice. Please try again." << std::endl;
        }
} while (choice != 'q');

   
   
   
   
   
    return 0;
        }
