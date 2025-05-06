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
    
    return 0;
}
