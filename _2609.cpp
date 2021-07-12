#include <stdio.h>
int gcd(int m, int n) {
    if (m % n == 0)
        return n;
    else
        gcd(n, m % n);
}

int lcm(int m, int n) {
    int t1 = m;
    int t2 = n;
    while (true) {
        if (t1 > t2)
            t2 += n;
        else if (t1 < t2)
            t1 += m;
        else
            break;
    }

    return t1;
}

int main() {
    int a, b, m, n;
    scanf("%d %d", &a, &b);

    if (a >= b) {
        m = a;
        n = b;
    } else {
        n = a;
        m = b;
    }

    printf("%d\n", gcd(m, n));
    printf("%d\n", lcm(m, n));

    return 0;
}
