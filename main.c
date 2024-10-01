#include <stdio.h>

int main() {

    int a, b, c;

    printf("inserisci tre numeri:\n");
    scanf("%d %d %d",&a, &b, &c);

    if(a > b)
        if(a > c)
           printf("il numero %d e' maggiore",a);

    if(b > a)
        if(b > c)
            printf("il numero %d e' maggiore",b);

    if(c > b)
        if(c > a)
            printf("il numero %d e' maggiore",c);

    return 0;
}
