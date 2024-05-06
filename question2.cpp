#include <iostream>
using namespace std;

int main()    {

          int rows, cols;


    do {
          cout << "Enter number of rows (maximum 3): ";
    cin >> rows;
        
        if (rows > 3) {
    cout << "Number of rows cannot exceed 3. Please try again." << endl;
        }
    } while (rows > 3);

    do {
    cout << "Enter number of columns (maximum 3): ";
    cin >> cols;
        if (cols > 3) {
        cout << "Number of columns cannot exceed 3. Please try again." << endl;
        }
    } while (cols > 3);


      double** array = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        
        
        
        array[i] = new double[cols];
    }

   
        cout << "Enter values for the array:" << endl;
for (int i = 0; i < rows; ++i) {
                  for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << i << "  " << j << "]: ";
            cin >> array[i][j];
        }
             }
    



cout << "Array values:" << endl;
           for  (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)       {
            cout <<  array[i][j] << "  ";
              }
    cout << endl;
    }

for  (int i  = 0; i < rows; ++i) {
             delete[] array[i];
    }
delete[] array;
return 0;
}
