#include "mylib.h"

int reverseDigits(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev; 
}

int isArmstrong(int num) {
    int d = 0, s = 0, t = num;

    for (; t != 0; d++)
        t /= 10;

    t = num;
    for (; t != 0; t /= 10){
        int n = t % 10, p = 1, i;
        for (i = 0; i < d; i++)
            p *= n;
        s += p;
    }
    return s == num;
}

int isAdams(int num) {
    int rev = reverseDigits(num);
    int sq_num = num * num;
    return rev * rev == reverseDigits(sq_num);
}

int isPrime(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int isPrimePalindrome(int num) {
    if (!isPrime(num))
        return 0;
    return num == reverseDigits(num);
}