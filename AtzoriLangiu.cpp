#include <iostream>
#include <cmath>

using namespace std;

const double *aver(const double *arr,
                   size_t size, double &average) {
    double sum = 0;
    double *closestNum;

    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    average = sum / size;
    for (int j = 0; j < size; ++j) {
        if (abs(average - arr[j]) < abs(average - *closestNum))
            *closestNum = arr[j];

    }
    return closestNum;

}
int main() {

    double arr[] = {1, 2, -1.5, 3.25, 5.5, 7.75, -0.25, 5.75};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    double average = 0;

    const double *p = aver(arr, size, average);
    cout << *p << " " << average << endl;
    return 0;
}
