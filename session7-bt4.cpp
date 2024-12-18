#include<stdio.h> 
int main() {
    int n; 

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap mang %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", array[i]);
    }
    return 0;
}
