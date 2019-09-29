// Summer Banister, CS 112, Project 3
// Note: I ended up redoing the format I used for project 2, this time
// relying on vectors instead of getlines.

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <ostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

void split_string(string const &str, const char delim, vector<string> &out)
{
	size_t start;
	size_t end = 0;

	while ((start = str.find_first_not_of(delim, end)) != string::npos)
	{
		end = str.find(delim, start);
		out.push_back(str.substr(start, end - start));
	}
}

void string_to_int(string const &the_string, vector<int> &int_vector)
{
    char delim = ' ';
    vector<string> out;
    split_string(the_string, delim, out);
    for(int i=0; i < out.size(); i++)
    {
        int number;
        istringstream iss (out[i]);
        iss >> number;
        int_vector.push_back(number);
        if (iss.fail())
        {
            cout << "something went wrong" << endl;
        }
    }
}


int main()
{
    vector<string> data;
    vector<int> data_line_1;
    vector<int> data_line_2;
    vector<int> data_line_3;
    vector<int> data_line_4;
    
    cout << "Please enter source file name here: " << endl;
    string source_file_name;
    cin >> source_file_name;
    
    cout << "Please enter destination file name here: " << endl;
    string destination_file_name;
    cin >> destination_file_name;
    
    ifstream ppm_file;
    ppm_file.open(source_file_name);
    string line;
    
    cout << endl;
    cout << "Here's what was written to the destination file: " << endl;  
    if(ppm_file.fail())
    {
        cout << "Can not open file.";
    }
    else
    {
        string line;
        while(ppm_file.good() == true)
        {
            getline(ppm_file, line);
            data.push_back(line);
        }
        
        cout << data[0] << endl;
        
        string height = data[1].substr(0, 1);
        cout << height << endl;
        
        string width = data[1].substr(2);
        cout << width << endl;
        
        cout << data[2] << endl;
        
        string_to_int(data[3], data_line_1);
        data_line_1[3] = 0;
        data_line_1[9] = 0;
        for(int i=0; i < data_line_1.size(); i++)
        {
            cout << data_line_1[i] << ' ';
        }
        cout << endl;
        
        string_to_int(data[4], data_line_2);
        for(int i=0; i < data_line_2.size(); i++)
        {
            cout << data_line_2[i] << ' ';
        }
        cout << endl;
        
        string_to_int(data[5], data_line_3);
        for(int i=0; i < data_line_3.size(); i++)
        {
            cout << data_line_3[i] << ' ';
        }
        cout << endl;
        
        string_to_int(data[6], data_line_4);
        data_line_4[0] = 0;
        data_line_4[9] = 0;
        for(int i=0; i < data_line_4.size(); i++)
        {
            cout << data_line_4[i] << ' ';
        }
        cout << endl;
    }
           
    ppm_file.close();
    
    ofstream output_file;
    output_file.open(destination_file_name);
    
    output_file << data[0] << endl;
    output_file << data[1] << endl;
    output_file << data[2] << endl;
    for(int i=0; i < data_line_1.size(); i++)
    {
        output_file << data_line_1[i] << ' ';
    }
    cout << endl;
    for(int i=0; i < data_line_2.size(); i++)
    {
        output_file << data_line_2[i] << ' ';
    }
    cout << endl;
    for(int i=0; i < data_line_3.size(); i++)
    {
        output_file << data_line_3[i] << ' ';
    }
    cout << endl;
    for(int i=0; i < data_line_4.size(); i++)
    {
        output_file << data_line_4[i] << ' ';
    }
    cout << endl;
    
    return 0;
}
