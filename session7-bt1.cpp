#include<stdio.h> 

int main(){
	
	int array[]={1,2,3,4,5,6};
	int arrayLength = sizeof(array) / sizeof(array[0]);
	
	printf("Cac phan tu trong mang:\n");
    for (int i = 0; i < arrayLength; i++) {
    printf("%d ", array[i]); 
    }
    printf("\nDo dai cua mang la: %d",arrayLength);
     return 0; 

}
