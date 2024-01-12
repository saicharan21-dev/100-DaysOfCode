#include <iostream>

class Counter {
private:
    int count;

public:
    // Constructor
    Counter() : count(0) {}

    // Overload '++' operator for incrementing the count by 1
    Counter& operator++() {
        ++count;
        return *this;
    }

    // Display the current count
    void display() const {
        std::cout << "Count: " << count << std::endl;
    }
};

int main() {
    // Example usage
    Counter myCounter;

    // Increment the count using overloaded '++' operator
    ++myCounter;
    myCounter.display();

    // Increment again
    ++myCounter;
    myCounter.display();

    return 0;
}