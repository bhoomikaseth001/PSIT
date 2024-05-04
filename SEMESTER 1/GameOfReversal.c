// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
//     char str[50];
//     scanf("%[^\n]",str);
//     int i=0;
//     char s[50];

//     //     while(str[i]!=' '){
//     //         str[i++]=s;
//     //         str[i]=' ';
//     //     }

//     //  puts(str);
//     // printf("%s",strrev(str));
//     //return 0;
//     // for(i=0;str[i]!=0;i++) {
//     //     if(str[i]!=' '){
//     //         s[i]+=str[i];
//     //     }
//     //     else
//      for(i=0;str[i]!=0;i++) {
//         while(str[i]!=' ')
//             strcpy(s[i],str[i]);
        
//             strcpy(s[i],strrev(str));
//     }
//     puts(s);
// }


// #include <stdio.h>
// #include <string.h>

// // Function to reverse a string
// void reverseString(char* str, int start, int end) {
//     while (start < end) {
//         char temp = str[start];
//         str[start] = str[end];
//         str[end] = temp;
//         start++;
//         end--;
//     }
// }

// // Function to reverse the sequence of words in a sentence
// void reverseWords(char* sentence) {
//     int length = strlen(sentence);
//     int start = 0;

//     // Reverse the entire sentence
//     reverseString(sentence, 0, length - 1);

//     // Reverse each word in the sentence
//     for (int i = 0; i < length; i++) {
//         if (sentence[i] == ' ') {
//             reverseString(sentence, start, i - 1);
//             start = i + 1;
//         }
//     }

//     // Reverse the last word (if any)
//     reverseString(sentence, start, length - 1);
// }

// int main() {
//     char sentence[100];

//     printf("Enter a sentence: ");
//     fgets(sentence, sizeof(sentence), stdin);

//     // Remove the trailing newline character
//     sentence[strcspn(sentence, "\n")] = '\0';

//     // Reverse the sequence of words
//     reverseWords(sentence);

//     printf("Reversed sentence: %s\n", sentence);

//     return 0;
// }


#include <stdio.h>
#include <string.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int notc;
    scanf("%d",&notc);
    char str[1000]={};
    while(notc--){
        scanf("\n");
        scanf("%[^\n]",str);
        // for(int i=0;str[i]!='\0';i++){
        //     printf("%c",str[i]);
        // }
        // printf("\n");
        int start=strlen(str)-1;
        int end=strlen(str)-1;
        
        while(start>=0 && end<strlen(str)){
            while(str[start]!=' ' && start>=0){
                start--;
            }
            start++;
            for (int k=start;k<=end;k++){
                printf("%c",str[k]);
            }
            printf(" ");
            start--;
            end=start-1;
            start=start-1;
        }
        printf("\n");
    }
}