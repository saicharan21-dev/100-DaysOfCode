#include <iostream>
#include <vector>

using namespace std;

class Matrix {
private:
    vector<vector<int>> data;

public:
    // Constructor
    Matrix(const vector<vector<int>>& matrixData) : data(matrixData) {}

    // Overload '*' operator for matrix multiplication
    Matrix operator*(const Matrix& other) const {
        // Check if the matrices can be multiplied
        if (data[0].size() != other.data.size()) {
            throw invalid_argument("Matrix dimensions are incompatible for multiplication");
        }

        // Resulting matrix with appropriate dimensions
        Matrix result(vector<vector<int>>(data.size(), vector<int>(other.data[0].size(), 0)));

        // Matrix multiplication
        for (size_t i = 0; i < data.size(); ++i) {
            for (size_t j = 0; j < other.data[0].size(); ++j) {
                for (size_t k = 0; k < other.data.size(); ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return result;
    }

    // Display matrix
    void display() const {
        for (const auto& row : data) {
            for (int element : row) {
                cout << element << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Example usage
    Matrix matrixA({{1, 2, 3},
                    {4, 5, 6}});

    Matrix matrixB({{7, 8},
                    {9, 10},
                    {11, 12}});

    // Matrix multiplication
    Matrix result = matrixA * matrixB;

    // Display the result
    cout << "Matrix A:" << endl;
    matrixA.display();

    cout << "\nMatrix B:" << endl;
    matrixB.display();

    cout << "\nResult of matrix multiplication:" << endl;
    result.display();

    return 0;
}