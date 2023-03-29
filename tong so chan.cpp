#include <iostream>
using namespace std;
#define MAX 100
void nhap_mang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "nhap a[" << i << "]: ";
        cin >> arr[i];
    }
}
void xuat_mang(int arr[], int n) {
    cout << "mang gom co: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
}
void tinh_tong_so_chan(int arr[], int n) {
    int tong = 0;
    if (n == 0) {
        return ;
    }
    else {
        
        for (int i = 0; i < n; i++)
            if (arr[i] % 2 == 0)
                tong += arr[i];
    }        cout << tong;
}
int main() {
    int i, arr[MAX], n;
    cout << "nhap so phan tu cua mang";
    cin >> n ;
    nhap_mang(arr, n);
    xuat_mang(arr, n);
    cout << "\n tong cac so chan torng mang la: ";
    tinh_tong_so_chan(arr, n);
    
}