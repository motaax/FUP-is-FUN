#include <stdio.h>
#include <ctype.h>

int main() {
    char str[2]; 

    scanf("%1s", str); 

    if (islower(str[0])) {
        str[0] = toupper(str[0]);
    } else if (isupper(str[0])) {
        str[0] = tolower(str[0]);
    }

    printf("%c\n", str[0]);

    return 0;
}