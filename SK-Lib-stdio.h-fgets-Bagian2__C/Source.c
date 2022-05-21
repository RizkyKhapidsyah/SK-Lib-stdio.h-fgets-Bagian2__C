
#include <stdio.h>
#include <conio.h>

#define MAX 15

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    char buf[MAX];
    fgets(buf, MAX, stdin);
    printf("string is: %s\n", buf);

    _getch();
    return 0;
}