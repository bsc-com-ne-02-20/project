#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>


using namespace std ;

void  Reverse(string& str)    {
       reverse(str.begin(), str.end());
    }

int  main()    {
    ifstream  file("input.txt");
    if  (!file.is_open())   {
        cout << "  Error  opening file." <<     "\n";
         return 1;
        }
              string fileData;
               string word;
    while  (file >> word)    {
        fileData += word + " ";
         }
    file.close();
    int vowels = 0;
     for (char c : fileData)     {
               if  (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u')    {
            vowels++;
        }
    }
        int words =    count(fileData.begin(),  fileData.end(), ' ') + 1;
            Reverse(fileData);
     for (size_t i = 1; i < fileData.length(); i += 2)    {
            fileData[i] = toupper(fileData[i]);
                           }
    cout << "Number of vowels: " << vowels <<     "\n";
    cout << "Number of words: " << words << "\n";
    cout << "Reversed string with second letter capitalized: " << fileData << "\n";
   
   
   
        return 0;
    
    
    
    
    
    
}