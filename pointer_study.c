#include <stdio.h>

void add(int num) {
    num += 10;
    printf("%d\n", num);
}

void Add(int* num) {
    *num += 10;
}

int main() {
    int a = 0;
    int*ptr = &a;
    printf("%d\n", a);
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
    Add(&a);
    printf("%d\n", a);
    add(a);
    printf("%d", a);
    return 0;
}
