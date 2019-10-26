//Provide indentation and necessary documentation
#include<stdio.h>
int main(){
   int numArr[10]={0}; //Initializing the arayy with 10 memory spaces
   int i=0;
   printf("Enter the array values\n"); 
   for(i=0;i<10;i++){
      scanf("%d",&numArr[i]); //take input from the user into the array
   }
   for(i=0;i<9;i+=3){
      for(int j=i;j<=2+i;j++){
         printf("%d",numArr[j]); //3 array values will be printed in a row
         if((j+1)%3!=0)
            printf(",");
      }
      printf("\n");
   }
   printf("%d",numArr[9]); //last element will be printed
   return 0;
}
