#include<stdio.h>
void print_array(int ar[], int){
printf("[");
for (int i = 0; i < n; i++) {
        printf("%d", ar[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
}


int main(void){
  int n;
  scanf("%d", &n);
  int ar[10];
  int current_odd=1;
  for (i=0;i<n;i++){
    ar[i]=current_odd;
    current_odd+=2;
  }
ar[i]=2*i+1;
printf_array(ar,n);
retunr 0;
}
