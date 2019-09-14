// Summer Banister, CS 112, PA #2

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

// Need to read file, change some of the stuff in it, 
// and print it to the screen.

int main()
{
    ifstream ppm_file;
    ppm_file.open("tinypix.ppm");
    if(ppm_file.fail())
    {
        cout << "Cannot open ppm_file.";
    }
    ppm_file.close(); 
}