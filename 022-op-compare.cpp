#include <iostream>
using namespace std;

class LinearSearch {
public:
    static int search(int arr[], int n, int target) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == target) return i;
        }
        return -1;
    }
};

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int result = LinearSearch::search(arr, 7, 22);
    cout << "Index: " << result << endl;
    return 0;
}
