#include <iostream>
using namespace std;

/// Problem 1
// int findMax(int *ptr, int size) {
//     if (size <= 0) return 0;
//     int max = *ptr;
//     for (int i = 1; i < size; i++) {
//         if (*(ptr + i) > max) {
//             max = *(ptr + i);
//         }
//     }
//     return max;
// }
//
// int main() {
//     int heights[8] = {150, 165, 175, 180, 174, 168, 190, 185};
//     int *ptr = heights;
//     int maxHeight = findMax(ptr, 8);
//     cout << "Maximum Height: " << maxHeight << endl;
//     return 0;
// }

/// Problem 2
// int main() {
//     int a,b;
//     cin>>a>>b;
//
//     int *aptr=&a;
//     int *bptr=&b;
//
//     cout<<*aptr<<" "<<*bptr;
// }

/// Problem 3
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//     int *ptr = &arr[0];
//     int *maxPtr = ptr;
//
//     for (int i = 1; i < n; i++) {
//         if (*(ptr + i) > *maxPtr) {
//             maxPtr = ptr + i;
//         }
//     }
//
//     cout << "Maximum value: " << *maxPtr << endl;
//     cout << "Pointer to max value: " << maxPtr << endl;
//
//     return 0;
// }

/// Problem 4
// #define val 33.3
// #define number 50
//
// int a;
//
// int& fun() {
//     return a;
// }
//
// int foo() {
//     return a;
// }
//
// int main() {
//     int n1 = 9, n2 = 11, *ptr_1 = nullptr, *ptr_2 = nullptr, k = 0;
//     double t;
//
//     *ptr_1 = &n1;        // WRONG — we’ll fix below
//     // Correct way:
//     ptr_1 = &n1;
//     ptr_2 = &n2;
//
//     t = val;             // 33.3
//     fun() = number;      // a = 50
//
//     *ptr_1 = *ptr_1 + 3; // 9 + 3 = 12
//     *ptr_2 = *ptr_2 - 3; // 11 - 3 = 8
//
//     cout << a << " " << *ptr_1 << " " << t << " " << *ptr_2 << endl;
//     return 0;
// }

/// Problem 5
// #include <ctime>
// int main() {
//     srand(time(0));
//     int *ptrA;
//
//     int arr[10];
//     for (int i = 0; i < 10; i++) {
//         arr[i] = rand() % 10;
//     }
//
//     ptrA = arr;
//     for (int i = 0; i < 10; i++) {
//         cout << "Value: " << *(ptrA+i) << endl;
//         cout << "Address: " << ptrA+i << endl;
//     }
// }

/// Problem 6
// int main() {
//     int message = 42;
//     int *ptr;
//     ptr = &message;
//
//     cout << "Secret Message: " << *ptr << endl;
//
//     return 0;
// }

/// Problem 7
float calculateAverage(int *arr,int size) {
    float sum = *arr;
    for (int i = 1; i < size; i++) {
        sum += *(arr + i);
    }
    return sum / size;
}

int main() {
    int scores[]= {88,76,90,85,92};
    cout << calculateAverage(&scores[0],5);
}