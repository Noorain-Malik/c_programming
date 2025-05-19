#include <stdio.h>
#include<math.h>

int main(){
    float a,b,c,D,root1,root2,real_part,imaginary_part;
    printf("write a , and c");
    scanf("%f %f %f",&a,&b,&c);
    printf("quad eqn =%.0f x^2+%.0fx+%.0f\n" ,a,b,c);
    D=pow(b,2)-4*a*c;
    if(D==0){
        printf("the roots are real and equal\n");
       root1=-b/(2*a);
       root2=root1;
       printf("root1=root2=%.2f " , root1);
    }
    else if(D>0){
        printf("roots are real and different\n");
        root1=(-b+sqrt(D))/(2*a);
        root2=(-b-sqrt(D))/(2*a);
        printf("root1 =%.2f and root2=%.2f" , root1,root2);

    }
    else if(D<0){
        printf("roots are complex and imaginary\n");
      real_part=-b/(2*a);
      imaginary_part=(sqrt(-D))/(2*a);
      printf("root1 ,real part is %.2f and imaginary part is %.2f\n", real_part,imaginary_part);
      printf("root2, real part is %.2f and imaginary part is -%.2f\n", real_part,imaginary_part);
      
    }
    return 0;
}