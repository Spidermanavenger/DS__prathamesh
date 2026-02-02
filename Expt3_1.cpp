#include <iostream>
using namespace std;

int main() {

    int n, key;
    cout << "Enter array size: ";
    cin >> n;
    bool flag = false;
    int low = 0, upper = n-1, mid;
    
    int arr[n];
    cout << "Enter " << n << " elements : ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter key to search: ";
    cin >> key;
    
    while(low <= upper) {
        mid = (low + upper) / 2;
        
        if(arr[mid] == key) {
            flag = true;
            cout << "Found at position: " << mid << endl;
            break;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            upper = mid - 1;
        }
    }
    
    if(flag) {
        cout << key << " Found!!";
    } else {
        cout << key << " Not Found!";
    }
    
    return 0;
}