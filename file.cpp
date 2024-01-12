#include <iostream>
#include <string>

class StringWrapper {
private:
    std::string data;

public:
    // Constructor
    StringWrapper(const std::string& str) : data(str) {}

    // Overloading '+' operator
    StringWrapper operator+(const StringWrapper& other) const {
        StringWrapper result(data + other.data);
        return result;
    }

    // Display method for demonstration
    void display() const {
        std::cout << data << std::endl;
    }
};

int main() {
    StringWrapper str1("Hello, ");
    StringWrapper str2("world!");

    // Concatenate using overloaded '+' operator
    StringWrapper result = str1 + str2;

    // Display the result
    result.display();

    return 0;
}