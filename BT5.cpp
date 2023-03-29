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
int demso(float a[],int n,int count=0, int i =0){
    if(i>=n)
        return count;
    if(a[i]>0){
        count++;
    }
    return demso(a,n,count,++i);
}
int main() {
    float a[n];
    int n;
    cout << "nhap so phantu cua mang: ";
    cin >> n;
    nhap_mang(a, n);
    xuat_mang(a, n);
    int i=0, count=0;
    cout<< "co"<< demso(a, n, count, i)<<"phan tu co gia tri duong trong mang";
}
