#include<stdio.h> 

int main(){
	
	int kt=0, array[6]={1,12,3,14,5,16};
	

   for (int i = 0; i < 6; i++) {
        if (array[i] % 2 == 0) {
            printf("%d ", array[i]);
            kt = 1;
	}
	} 
 	if(kt==0){
 		printf("Mang khong co so chan\n") ;
	 } 
   
     return 0; 

}
