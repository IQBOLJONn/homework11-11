#include <iostream>
using namespace std;


int sumOfMultiplications(int arr1[], int arr2[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr1[i] * arr2[i];
    }
    return sum;
}

int main() {
    int n;



    cin >> n;

    int arr1[n], arr2[n];



    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }


    for (int i = 0; i < n; ++i) {
        cin >> arr2[i];
    }


    int result = sumOfMultiplications(arr1, arr2, n);

    // Output the result
    cout << result << endl;

    return 0;
}
