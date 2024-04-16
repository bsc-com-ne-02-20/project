#include <iostream>
#include <string>


using  namespace std ;


int main()        {
    string ar[] = {"B123",  "C234",   "A345",  "C15",    "B177", "G3003",   "C235",   "B179",  "2"};
     
    for (const string& element : ar)    {
        if  (element[0] == 'B') {
      cout  << element << "\n";
          }
     }
   
   
   
     return 0;


 }
