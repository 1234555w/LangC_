#include <stdio.h>

int main(){
    int b=26;
    for(int a=1; a<=25; a++) {
        if(a%3==0)
            printf("%d\n",a);
    }

    while(b<=50) {
        if(b%3==0)
            printf("%d\n",b);
            b++;    
    }
    return 0;
}