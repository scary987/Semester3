#include<stdio.h>

char c;
int len;

void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void print(const char *v) {

    int i;
    if (v != 0) {
        for (i = 0; i < len; i++) {
            printf("%4c", v[i]);
        }
        printf("\n");
    }
}

void heap(char v[], int n) {
    int i;
    if (n == 1) {
        print(v);
    } else {
        for (i = 0; i < n; i++) {
            heap(v, n - 1);
            if (n % 2 == 1) {
                swap(&v[0], &v[n - 1]);
            } else {
                swap(&v[i], &v[n - 1]);
            }
        }
    }
}

int main() {
    char a[26];
    int i;
    printf("Wie viele Buchstaben wollen sie eingeben?");
    scanf("%d", &len);
    for (i = 0; i <= len-1; i++) {
        printf("Bitte geben Sie den %d. Buchstaben ein:", i+1);
        getchar();
        c = getchar();
        a[i] = c;
    }

    heap(a,len);
    return 0;
}