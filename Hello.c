 #include <stdio.h>
 #include <math.h>
 int main ()
 {
    double a,b,c,discriminant,root1,root2,realpart,imagpart ;
    
    printf("Enter coefficients a,b,c:"),
    scanf("%1f %1f %1f", &a, &b, &c);
    discriminant=b*b-4*a*c;
    if (discriminant>0)
    {
        root1=(-b+sqrt(discriminant)/(2*a));
        root2=(-b-sqrt(discriminant)/(2*a));
        printf("root1=%21f and root2=%21f", root1, root2);
    }
    else if (discriminant=0)
    {
        root1=root2=-b/(2*a);
        printf("root1=root2=%2f", root1);
    }
    else 
    {
        realpart=-b/(2*a);
        imagpart=sqrt(-discriminant)/(2*a);
        printf("root1=%21f+%21f and root2=%21f-%21f", realpart, imagpart, realpart, imagpart);
    }
    return 0;
 }