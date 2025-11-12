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
// I didn't really understand what the question is asking :(

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
// float calculateAverage(int *arr,int size) {
//     float sum = *arr;
//     for (int i = 1; i < size; i++) {
//         sum += *(arr + i);
//     }
//     return sum / size;
// }
//
// int main() {
//     int scores[]= {88,76,90,85,92};
//     cout << calculateAverage(&scores[0],5);
// }

/// Problem 8
// int main() {
//     int treasures[] = {10, 20, 30, 40, 50};
//     int *ptr;
//     ptr = treasures;
//
//     ptr = ptr + 4;
//
//     cout << "Last treasure value: " << *ptr << endl;
//
//     return 0;
// }

/// Problem 9
// int main() {
//     int score = 75;
//     int *ptr;
//     ptr = &score;
//
//     cout << "Original Score: " << *ptr << endl;
//
//     *ptr += 10;
//
//     cout << "Updated Score: " << *ptr << endl;
//
//     return 0;
// }

/// Problem 10
// void reverseArray(int *start, int *end) {
//     while (start < end) {
//         int temp = *start;
//         *start = *end;
//         *end = temp;
//
//         start++;
//         end--;
//     }
// }
//
// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = 5;
//
//     reverseArray(arr, arr + size - 1);
//
//     cout << "Reversed Array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//
//     return 0;
// }

/// Problem 11
// int main() {
//     int scores[] = {78, 95, 85, 62, 88};
//     int size = 5;
//
//     int *first = &scores[0];
//     int *second = &scores[0];
//     int *third = &scores[0];
//
//     for (int i = 0; i < size; i++) {
//         if (*(scores + i) > *first) {
//             third = second;
//             second = first;
//             first = scores + i;
//         }
//         else if (*(scores + i) > *second && (scores + i) != first) {
//             third = second;
//             second = scores + i;
//         }
//         else if (*(scores + i) > *third && (scores + i) != second && (scores + i) != first) {
//             third = scores + i;
//         }
//     }
//
//     cout << "Top 3 Scores: " << *first << " " << *second << " " << *third << endl;
//
//     return 0;
// }