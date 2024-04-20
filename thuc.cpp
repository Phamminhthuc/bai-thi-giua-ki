#include <iostream>
#include <string>

using namespace std;

void khoiTaoMang(string arrayMSSV[]) {
    arrayMSSV[0] = "";
    arrayMSSV[1] = "2301CT1234";
    arrayMSSV[2] = "2302CT3456";
    arrayMSSV[3] = "2305CT3999";
    arrayMSSV[4] = "2304CT0002";
}

void nhapMSSV(string arrayMSSV[]) {
    cout << "Nhap MSSV cua ban: ";
    cin >> arrayMSSV[0];
}

void inMang(string arrayMSSV[]) {
    cout << "Mang sau khi nhap:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "arrayMSSV[" << i << "] = " << arrayMSSV[i] << endl;
    }
}

void sapXepMang(string arrayMSSV[]) {
    string temp;
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (arrayMSSV[j] > arrayMSSV[j + 1]) {
                temp = arrayMSSV[j];
                arrayMSSV[j] = arrayMSSV[j + 1];
                arrayMSSV[j + 1] = temp;
            }
        }
    }
    cout << "Mang sau khi sap xep:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "arrayMSSV[" << i << "] = " << arrayMSSV[i] << endl;
    }
}

void timPhanTuLonNhat(string arrayMSSV[]) {
    string *ptrArrayMSSV = arrayMSSV;
    string *maxMSSV = arrayMSSV;
    for (int i = 0; i < 5; i++) {
        if (*ptrArrayMSSV > *maxMSSV) {
            maxMSSV = ptrArrayMSSV;
        }
        ptrArrayMSSV++;
    }
    cout << "Dia chi cua phan tu lon nhat: " << maxMSSV << endl;
    cout << "Gia tri cua phan tu lon nhat: " << *maxMSSV << endl;
}

int main() {
    string arrayMSSV[5];

    khoiTaoMang(arrayMSSV);
    nhapMSSV(arrayMSSV);
    inMang(arrayMSSV);
    sapXepMang(arrayMSSV);
    timPhanTuLonNhat(arrayMSSV);

    return 0;
}