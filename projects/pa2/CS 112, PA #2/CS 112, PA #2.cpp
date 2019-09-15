// Summer Banister, CS 112, PA #2

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
    ifstream ppm_file;
    ppm_file.open("tinypix.ppm");
    if(ppm_file.fail())
    {
        cout << "Cannot open ppm_file.";
    }
    else
    {
        string line;
        getline(ppm_file, line);
        cout << "Image Format: " << line << endl;
        
        getline(ppm_file, line, ' ');
        cout << "Width: " << line << endl;
        
        getline(ppm_file, line);
        cout << "Height: " << line << endl;
        
        getline(ppm_file, line);
        cout << "Max Pixel Value: " << line << endl;

        cout << "Data:" << endl;
        while (getline(ppm_file, line))
        {
           cout << line << endl; 
        }
    }
    ppm_file.close();

    return 0;
}