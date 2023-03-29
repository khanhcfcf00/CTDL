#include<iostream>
using namespace std;
#define max 100;
void nhap_mang(float a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "nhap a[" << i << "]: ";
        cin >> a[i];
    }
}
void xuat_mang(float a[], int n) {
    cout << "mang gom co: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << "\n";
    }
}
void dem_so(float a[], int n) {
    int count = 0;
    cout << "cac phan tu co gia tri duong la: ";
    for (int i = 0; i < n; i++) {
        if (a[i] > 0)
            cout << a[i]<<"\t";
        count += 1;
    }
    cout << "\n mang co " << count << " phan tu co gia tri duong";
}
int main() {
    float a[100];
    int n;
    cout << "nhap so phantu cua mang: ";
    cin >> n;
    nhap_mang(a, n);
    xuat_mang(a, n);
    dem_so(a, n);
}