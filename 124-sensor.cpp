#include <iostream>
using namespace std;

class Matrix {
public:
    int arr[2][2];

    Matrix operator*(const Matrix& m) {
        Matrix result;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result.arr[i][j] = arr[i][0] * m.arr[0][j] + arr[i][1] * m.arr[1][j];
            }
        }
        return result;
    }
};

int main() {
    Matrix m1, m2, m3;
    // Initialize and multiply matrices
    m3 = m1 * m2;
    return 0;
}
