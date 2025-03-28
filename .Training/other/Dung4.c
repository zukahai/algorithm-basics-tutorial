#include <stdio.h>
#include <stdlib.h>

void nhapMang(int arr[], int *n) {
    printf("Nhập số lượng phần tử trong mảng: ");
    scanf("%d", n);
    printf("Nhập %d số nguyên:\n", *n);
    for (int i = 0; i < *n; i++) {
        scanf("%d", &arr[i]);
    }
}


int tichChanAm(int arr[], int n) {
    int tich = 1;
    int coSoThoaMan = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0 && arr[i] % 2 == 0 && arr[i] % 3 != 0) {
            tich *= arr[i];
            coSoThoaMan = 1;
        }
    }
    return coSoThoaMan ? tich : 0; 
}

void hienThiDuongChiaHet4(int arr[], int n) {
    printf("Các số dương chia hết cho 4 là: ");
    int coSoThoaMan = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] % 4 == 0) {
            printf("%d ", arr[i]);
            coSoThoaMan = 1;
        }
    }
    if (!coSoThoaMan) {
        printf("Không có số nào.");
    }
    printf("\n");
}

void sapXepGiamDan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void hienThiMang(int arr[], int n) {
    printf("Mảng sau khi sắp xếp giảm dần: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], n;

    nhapMang(arr, &n);

    int tich = tichChanAm(arr, n);
    if (tich != 0) {
        printf("Tích các số chẵn âm không chia hết cho 3: %d\n", tich);
    } else {
        printf("Không có số chẵn âm nào không chia hết cho 3.\n");
    }

    hienThiDuongChiaHet4(arr, n);
    sapXepGiamDan(arr, n);
    hienThiMang(arr, n);

    return 0;
}
