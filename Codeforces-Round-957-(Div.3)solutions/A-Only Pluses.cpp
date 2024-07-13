#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c; cin>>a>>b>>c;
        int arr[3] = {a, b, c};
        sort(arr, arr + 3);
        for (int i=0; i<5; i++) {
            arr[0]++;
            sort(arr, arr + 3);
        }
        int maxx = arr[0] * arr[1] * arr[2];

        cout << maxx << endl;
    }
    return 0;
}
