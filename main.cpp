
#include <iostream>

using namespace std;

void swap(int arr[], int x, int j) {
    int temp;
    temp = arr[x];
    arr[x] = arr[j];
    arr[j] = temp;

}

void sort(int numbers[], int size) {

    for (int pass = 0; pass < size; pass++) {
        for (int i = 1; i < size; i++) {
            if (numbers[i - 1] > numbers[i]) {
                swap(numbers, i - 1, i);
            }
        }

    }
}


int main() {

    int temp;
    int arr[] = {20, 34, 12, 45, 821, 9, 3, 10};
    int i;


    sort(arr, size(arr));

    for (int num: arr) {
        cout << num << endl;
    }
    return 0;
}