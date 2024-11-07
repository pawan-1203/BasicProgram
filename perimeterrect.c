#include<stdio.h>
#include <math.h> 
int main(){
    int a , b , per ;
    printf(" ENTER THE SIDES OF A RECTANGLE: ");
    scanf("%d %d " , &a , &b);
    per = 2*(a+b);
    printf("THE PERIMETER OF THE RECTANGLE IS %d\n" , per);
    return 0;
    
}