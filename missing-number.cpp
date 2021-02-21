#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
    long long n;
    cin >> n;
    int arr[n];
    int left = n * (n + 1) / 2;
    for (int i = 0; i < n - 1; i++) cin >> arr[i];

    if(n>=2){
        for(int i=0; i<n-1; i++) {
            left = left - arr[i];
        }
        cout << left << endl;
    }

    return 0;
}
