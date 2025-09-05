#include "file_reader.hpp"

#include <fstream>
#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>

void read_line_by_line(std::string file_name)
{
    std::fstream fs(file_name.c_str());
    std::string line;
    int count = 0;
    std::unordered_map<std::string, std::vector<std::string>> staton_temps;

    while(fs)
    {
        
        std::getline(fs, line);
        std::stringstream ss(line);

        std::string station;
        std::string temp;
        std::getline(ss, station, ';');
        std::getline(ss, temp);
        staton_temps[station].push_back(temp);
        
        //std::cout << station << " "<< temp << std::endl;
        count++;
    }

    std::cout << count << std::endl;
}