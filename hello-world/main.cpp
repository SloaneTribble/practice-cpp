#include <iostream>
#include <fstream>
#include <cstdlib>

int main() {
    std::ifstream in_data;
    std::string word;
    in_data.open("example.txt");
    if(!in_data){
        std::cerr << "Error: file could not be opened" << std::endl;
        exit(1);
    }
    in_data >> word;
        while( !in_data.eof()) {
            std::cout << "The next word is: " << word << std::endl;
            in_data >> word;
        }
        in_data.close();

        std::ofstream NewFile("new-file.txt");
        NewFile << "This is my new file!" << std::endl;

        NewFile.close();

    std::ofstream outfile ("test.txt");
    outfile.open("test.txt",std::ofstream::out);
    outfile << "my text here!" << std::endl;

    outfile.close();


    std::fstream my_stream;
    my_stream.open("my_file_name.txt",std::fstream::binary | std::fstream::in | std::fstream::out);

    if(!my_stream)
    {
        my_stream.open("my_file_name.txt",std::fstream::binary | std::fstream::trunc | std::fstream::out);
        my_stream.close();
        // re-open with original flags
        my_stream.open("my_file_name.txt",std::fstream::binary | std::fstream::in | std::fstream::out);
    }
    else
    {
        my_stream << "HEY" << std::endl;
    }
    my_stream.close();
    return 0;
}
