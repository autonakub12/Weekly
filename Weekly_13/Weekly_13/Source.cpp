#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int strlenth(char* ch)
{
    int i=0;
   while (ch[i]!='\0')
    {
       i++;
    }
    return i;
}
int main() {
    char ch[16];
    scanf("%s", ch);
    int i, j, k;
    int len = strlenth(ch); 
    int index = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < len; j++) {
            for (k = 0; k < 4; k++) {
                if (j % 3 == 2 && j != 0) {
                    if ((i == 0 || i == 4) && k == 2) {
                        printf("*");
                    }
                    else if ((i == 1 || i == 3) && (k == 1 || k == 3)) {
                        printf("*");
                    }
                    else if (i == 2 && k == 2) {
                        printf("%c", ch[index++]);
                    }
                    else if (i == 2 && (k == 0 || k == 4)) {
                        printf("*");
                    }
                    else printf(".");
                }
                else {
                    if ((i == 0 || i == 4) && k == 2) {
                        printf("#");
                    }
                    else if ((i == 1 || i == 3) && (k == 1 || k == 3)) {
                        printf("#");
                    }
                    else if (i == 2 && k == 2) {
                        printf("%c", ch[index++]);
                    }
                    else if (i == 2 && (k == 0 || k == 4)) {
                        if (j % 3 == 0 && j != 0) printf("*");
                        else printf("#");
                    }
                    else printf(".");

                }
            }
        }
        if (i == 2) {
            if (len % 3 == 0) printf("*");
            else printf("#");
        }
        else {
            if (len % 3 == 2) printf(".");
            else printf(".");
        }
        printf("\n");
    }
    return 0;
}
