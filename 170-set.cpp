#include <iostream>
using namespace std;

class QuickSort {
private:
    static int partition(int arr[], int low, int high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        return i + 1;
    }
    
public:
    static void sort(int arr[], int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);
            sort(arr, low, pi - 1);
            sort(arr, pi + 1, high);
        }
    }
};

int main() {
    int arr[] = {64, 34, 25, 12, 22};
    QuickSort::sort(arr, 0, 4);
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    return 0;
}
