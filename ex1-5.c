#include <stdio.h>

int main() {
    int fahr,celsius;
    int lower,upper,step;
    fahr=300;
    upper=0;
    lower=300;
    step=20;
    while(fahr>=upper){
        celsius=5*(fahr-32)/9;
        printf("%d\t%d\n",fahr,celsius);
        fahr=fahr-step;
    }
}
