#include <iostream>

#include "file_reader.hpp"

int main(int argc, char** argv)
{
    std::cout << "hello 1brc" << std::endl;

    read_line_by_line(std::string(argv[1]));
}