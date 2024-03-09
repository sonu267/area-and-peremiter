#include<stdio.h>
int main(){
    int l,b,a,p;
    printf("enter length \n ");
    scanf("%d", &l);
    printf("enter breadth \n ");
    scanf("%d", &b);
    a = l*b;
    p = 2*(l+b);
    printf("here is your area: %d \n",a);
    printf("here is your perimeter: %d \n" , p);
    if (a >= p)
    {
        printf("yes area is greather than preameter: %d  \n", a);
    }
    else
    printf("yes Peremeter is greather than area: %d  \n", p);
    

    return 0;
}