// Summer Banister, CS 112, Project 3

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <ostream>
#include <vector>

using namespace std;

int main()
{   
    cout << "Please input file name here: " << endl;
    string file_name;
    cin >> file_name;
                    
    ifstream ppm_file;
    ppm_file.open(file_name);
    if(ppm_file.fail())
    {
        cout << "Can not open file.";
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
            // vector<?> data;
            for(int i=0; i%3=0; ++i)
            {
                // How do I change the values?
            }  
        }
    }
    ppm_file.close();
    
    return 0;
}
