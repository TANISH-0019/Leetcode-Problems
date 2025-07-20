#include <stdio.h>

int main() {
    char input[1000];
    printf("hello world\n");
    fgets(input, sizeof(input), stdin);
    printf("%s", input);
    return 0;
}
