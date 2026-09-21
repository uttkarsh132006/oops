#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter elements:\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum=0;
     for(int i=0;i<n;i++){
        sum+=arr[i];
     }
     cout<<sum;
    delete[] arr; 

    return 0;
}