#include <stdio.h>

int main() {
    int L, C;
    
    scanf("%d", &L); 
    scanf("%d", &C); 
    
    int cor = (L + C) % 2 == 0 ? 1 : 0;
    
    printf("%d\n", cor);
    
    return 0;
}