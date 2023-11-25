
#include "colors.hh"

int main() {
    std::cout << col::cyan << "I am " << col::bold << "Krishna Modepalli"
            << col::unbold << '.' << col::resetAll << std::endl;

    return 0;
}
