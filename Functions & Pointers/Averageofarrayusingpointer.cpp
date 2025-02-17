#include <iostream>
using namespace std;

void calculateSumAndAverage(int *arr, int size, int *sum, float *average) {
    *sum = 0;

    for (int i = 0; i < size; i++) {
        *sum += *(arr + i);
    }

    *average = static_cast<float>(*sum) / size;
}

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum;
    float average;

    calculateSumAndAverage(arr, n, &sum, &average);

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}
