#include<iostream>
using namespace std;

int main() {
    int a[10], n, i;
    int sum = 0, max, min, key, flag = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Array elements: ";
    for(i = 0; i < n; i++) {
        cout << a[i] << " ";
        sum += a[i];
    }
    cout << endl;

    max = min = a[0];
    for(i = 1; i < n; i++) {
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;

    cout << "Enter element to search: ";
    cin >> key;

    for(i = 0; i < n; i++) {
        if(a[i] == key) {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}
