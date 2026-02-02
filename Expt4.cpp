#include <iostream>
using namespace std;

void bubbleSort(int a[], int n) {
    for(int i = 0; i < n-1; i++) {
    for(int j = 0; j < n-i-1; j++) {
    if(a[j] > a[j+1]) {
    int temp = a[j];
    a[j] = a[j+1];
    a[j+1] = temp;
}
}
}
}
void selectionSort(int a[], int n) {
    for(int i = 0; i < n-1; i++) {
    int min = i;
    for(int j = i+1; j < n; j++) {
    if(a[j] < a[min])
    min = j;
}
    int temp = a[i];
    a[i] = a[min];
    a[min] = temp;
}
}
void insertionSort(int a[], int n) {
    for(int i = 1; i < n; i++) {
    int key = a[i];
    int j = i - 1;
    while(j >= 0 && a[j] > key) {
    a[j+1] = a[j];
    j--;
}
    a[j+1] = key;
}
}
int partition(int a[], int low, int high) {
    int pivot = a[high];
    int i = low - 1;
    for(int j = low; j < high; j++) {
    if(a[j] < pivot) {
    i++;
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
}
    int temp = a[i+1];
    a[i+1] = a[high];
    a[high] = temp;
    return i + 1;
}
void quickSort(int a[], int low, int high) {
    if(low < high) {
        int pi = partition(a, low, high);
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}
void merge(int a[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[50], R[50];

    for(i = 0; i < n1; i++)
        L[i] = a[l + i];
    for(j = 0; j < n2; j++)
        R[j] = a[m + 1 + j];

    i = 0; j = 0; k = l;

    while(i < n1 && j < n2) {
    if(L[i] <= R[j])
        a[k++] = L[i++];
    else
        a[k++] = R[j++];
    }

    while(i < n1)
        a[k++] = L[i++];
    while(j < n2)
        a[k++] = R[j++];
}
void mergeSort(int a[], int l, int r) {
    if(l < r) {
        int m = (l + r) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}
void display(int a[], int n) {
    for(int i = 0; i < n; i++)
    cout << a[i] << " ";
    cout << endl;
}

int main() {
int a[50], n, choice;

cout << "Enter number of elements: ";
cin >> n;
cout << "Enter elements:\n";
for(int i = 0; i < n; i++)
        cin >> a[i];
do {
        cout << "\n--- Sorting Menu ---\n";
        cout << "1. Bubble Sort\n";
        cout << "2. Selection Sort\n";
        cout << "3. Insertion Sort\n";
        cout << "4. Quick Sort\n";
        cout << "5. Merge Sort\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
switch(choice) {
    case 1:
        bubbleSort(a, n);
        display(a, n);
        break;
    case 2:
        selectionSort(a, n);
        display(a, n);
        break;
    case 3:
        insertionSort(a, n);
        display(a, n);
        break;
    case 4:
        quickSort(a, 0, n-1);
        display(a, n);
        break;
    case 5:
        mergeSort(a, 0, n-1);
        display(a, n);
        break;
    case 6:
        cout << "Exiting...\n";
        break;
    default:
        cout << "Invalid choice!\n";
        }
    } while(choice != 6);

return 0;
}
