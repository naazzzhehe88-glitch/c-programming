#include<stdio.h>
void calculateprice(float f);
int main(){
    float f;
 printf("Enter price :");
 scanf ("%f",&f);
   calculateprice(f);
    return 0;
}
void calculateprice(float f){
    f=f+(0.18*f);
    printf("final price is : %f", f );
}
