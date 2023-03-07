// BT_CTDL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void nhap_mang(int arr[], int n) { 
    for (int i = 0; i < n; i++) {
        cout << "nhap a[" << i << "]: ";
        cin >> arr[i];
    }
}
void xuat_mang(int arr[], int n) {
    cout << "mang gom co: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i]<<"  ";
    }
}
void tuyen_tinh(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (x == arr[i]) {
                cout << "phan tu x nam tai vi tri " << i << " trong mang" << endl;
                break;
            }
        else{ cout << "ko thay x dau " << endl; }
        }
    }

    
int main()
{
    int arr[1000];
    int n;
    cout << "nhap so phan tu trong mang: ";
    cin >> n;
    nhap_mang(arr , n );
    xuat_mang(arr, n);
    int x;
    cout << "nhap phan tu can tim trong mang:";
    cin >> x;
    tuyen_tinh(arr, n, x );
    system("pause");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
