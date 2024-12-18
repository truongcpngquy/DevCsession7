#include<stdio.h> 

int main(){
	int arrayInt[5];
	printf("Nhap mang\n") ;
	
	for (int i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arrayInt[i]);
    }
    printf("Mang vua nhap la: "); 
    	for (int i = 0; i < 5; i++) {
        printf("%d ",arrayInt[i] );
       
    }
     return 0; 

}
