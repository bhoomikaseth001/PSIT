// #include<stdio.h>
// int Rev(int n) {
//     int rev=0;
//     while(n>0) {
//         int rem=n%10;
//         rev=rev*10+rem;
//         n=n/10;
//     }
//     return rev;
// }
// int isPalin(int n) {
//     int temp=n;
//     if(Rev(n)==temp)
//      return 1;
// }
// int main() {
//     int n,count=0;
//     printf("Enter a number");
//     scanf("%d",&n);
//     while(!isPalin(n)) {
//         int reverse=Rev(n);
//         n =+ reverse;
//         count++;
//     printf("Palindrome number : %d",n);
//     printf("Number of operations: %d\n", count);

// }
// }


#include<stdio.h>

int reverseNumber(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    return rev;
}

int isPalindrome(int num) {
   if(num == reverseNumber(num))
   return 1;
   else
   return 0;
}

int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (!isPalindrome(num)) {
        int rev = reverseNumber(num);
        num = num + rev;
        count++;
    }
    printf("Palindrome number: %d\n", num);
    printf("Number of operations: %d\n", count);
    return 0;
}
