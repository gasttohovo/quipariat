#include <iostream>
#include <vector>
#include <string>

int main() {
    // Declare a vector to store filenames
    std::vector<std::string> filenames;

    // Add some filenames to the vector
    filenames.push_back("file1.txt");
    filenames.push_back("file2.txt");
    filenames.push_back("file3.txt");

    // Iterate over the vector and print each filename
    for (const auto& filename : filenames) {
        std::cout << filename << std::endl;
    }

    return 0;
}
