// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

double F(double x){
 return(10-pow(x,2));    
}
int main() {
    double a,b,m,root;
    int i;
    printf(" input first initial guess a:");
    scanf("%lf",&a);
    printf("input second initial guess b:");
    scanf("%lf",&b);
    if (F(a)==0)
    {
        root=a;
    }
    
    
    else if (F(b)==0)
        {
            root=b;
        }
    else{

    if (F(a)*F(b)>0)
    {
        printf("initial value is wrong: ");
    }
    else
    {
        for(i=0;i<100;i++)
        {
            m=a+b/2;
            if(F(a)*F(m)>0)
            {
            a=m;    
            }
            else{
                b=m;
            }
            
        }
            
        root=m;
    }
    
}
printf("root=%lf",root);
}