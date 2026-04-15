#include <iostream>
using namespace std;

class BinarySearch {
public:
    static int search(int arr[], int n, int target) {
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == target) return mid;
            else if (arr[mid] < target) left = mid + 1;
            else right = mid - 1;
        }
        return -1;
    }
};

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int result = BinarySearch::search(arr, 7, 7);
    cout << "Index: " << result << endl;
    return 0;
}
