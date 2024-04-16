#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace  std ;

int main()      {

    srand(time(0));

    int  daysUntilExpiration =   rand() % 12; 
    switch(daysUntilExpiration)   {
        
        case 0 ... 4:
           cout << "Your subscription wll expire  soon. Renew  now!" << "\n";
            break;

        case 5 ... 10:
    cout << "Your subscription expires in " << daysUntilExpiration << "  days Renew now and save 10%!" << "\n";
            break;

        case 11:
    cout << "Your subscription expires within a day! Renew now and save 20%!" << "\n";
            break ;

        default:
           cout << "Your subscription has expired." <<  "\n";
              break;
    }






       return 0;
   }

