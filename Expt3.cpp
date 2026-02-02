#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter array size: ";
    cin >> n;
    
    int arr[n]; 
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter key to search: ";
    cin >> key;
    
    
    bool flag = false;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key) 
        {
         flag = true; 
              cout << "Found at position: " << i << endl;
           break;
        }
    }
    
    if(flag) {
        cout << key << " Found!";
    } else {
        cout << key << " Not Found!";
    }
    
    return 0;
}