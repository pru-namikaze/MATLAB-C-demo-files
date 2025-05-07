#include<stdio.h>

int main(void) {
    // single line Comment
    
    /*
     *   Multi line comment
     *   Multi line comment
     *   Multi line comment
     *   Multi line comment
     *   Multi line comment
     */

    int a = 123;
    float b = 3.141;
    double c = 1.14125698;
    long d = 841498659849684;
    char e = 'h';
    char f[10] = "C Prgming";
 
    int g;
    float h;
    double i;
    long j;
    char k;
    char l[10];
    
    printf("Enter a int: ");
    scanf("%d" , &g);
    printf("a: %d \t g: %d\n", a, g);
    
    printf("Enter a float: ");
    scanf("%f" , &h);
    printf("b: %f \t h: %f\n", b, h);
    
    printf("Enter a double: ");
    scanf("%lf", &i);
    printf("c: %lf \t i: %lf\n", c, i);
    
    printf("Enter a long: ");
    scanf("%ld" , &j);
    printf("d: %ld \t j: %ld\n", d, j);
    
    printf("Enter a char: ");
    scanf(" %c" , &k);
    printf("e: %c \t k: %c\n", e, k);
    printf("e: %d \t k: %d\n", e, k);
    
    printf("Enter a string: ");
    scanf("%s" ,  l);
    printf("f: %s \t l: %s\n", f, l);
    
    
    
    int m;
    float n;
    char o[120];
    printf("Enter the input vales for m, n, o space seperated: ");
    scanf("%d %f %s", &m, &n, o);
    printf("m: %d \t n: %f \t o: %s \n", m, n, o);
    
    float kCalueOfPi = 3.141;
    float radius_of_circle;
    printf("Enter the radius of circle: ");
    scanf("%f", &radius_of_circle);
    
    float area_of_circle = kCalueOfPi * radius_of_circle * radius_of_circle;
    printf("The value of area of circle with radius %.2f units is %.4f unit^2\n", radius_of_circle, area_of_circle);


    int divisor = 10;
    int num = 123456789;
    int remainder_value = num % divisor;
    int quotient_value = (num - remainder_value) / divisor;
    printf("When dividing %d with %d give %d as result and %d as remainder\n", num, divisor, quotient_value, remainder_value);


    int a;
    int b;
    printf("Enter the value of a and b: ");
    scanf("%d", &a);
    scanf("%d", &b);

    if(b < a) {
        printf("Value of a: %d is larger than value of b: %d\n", a, b);        
    }
    else if(a == b) {
        printf("Value of a: %d is same as value of b: %d\n", a, b);        
    }
    else {
        printf("Value of a: %d is smaller as value of b: %d\n", a, b);        
    }
}
