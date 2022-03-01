#include <stdio.h>
#include <stdbool.h>
void myReverse(int arr[], int len) {
      int temp;
      for (int i = 0; i < len/2; i++) {
          int temp = arr[i];
          arr[i] = arr[len- i-1];
          arr[len - i - 1] = temp;  

      }
   }

float myAvg(int arr[], int len){
   int i;
   float sum = 0.0;
   for(i=0; i<len; i++){
      sum = sum + arr[i];
   }
   int k=(sum/len);
  
   return k;
}

void myCopy(int arr[], int len, int* final){
   int i;
   for(i=0; i<len; i++){
      final[i] = arr[i];
   }
}

void printNumbers(int *copy, int len){
   int i;
    for(int i=0; i < len; i++){
        printf("%d\n", copy[i]); ;  
       }
}

int myMax(int arr[], int len){
   int max = arr[0];
   int i;
   for(i=1; i<len; i++){
      if(max < arr[i]){
         max = arr[i];
      }
   }
   return max;
}




bool isPrime(long num) {
       if ( num < 2){
          return false;
       } 
       for (long i = 2; i * i <= num; i++){
              if ( num % i == 0){
                  return false;
              } 
      }
      return true;
}

void printPrimeNumbers(int arr[], int length){
      for (int i=0; i < length; i++)
         if (isPrime(arr[i])){
            printf("%d\n", arr[i]);;
    } 
}

int main(int argc, char *argv[]) {
  int len;
   int high;
   float avg;
   int copyarray[len];
   int arr[] = {10, 5, 15, 12};
   len = sizeof(arr)/sizeof(int);
   high = myMax(arr, len);
   printf("The highest number is %d\n", high); 
   
   avg = myAvg(arr, len);
   printf("The average number is %.2f\n", avg); 
   
   printf("The original array\n");
   myCopy(arr, len, copyarray);
   printNumbers(copyarray, len);
  
   myReverse(arr, len);
   printf("The reverse array\n");
   printNumbers(arr, len);
  
   printf("These are the prime numbers in the array\n");
   printPrimeNumbers(arr, len);
   return 0;
}