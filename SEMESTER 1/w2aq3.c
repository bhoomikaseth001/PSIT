// #include <stdio.h>

// int main() {
//     int count = 0;
//     int firstOneFound = 0;
//     char bit;

//     printf("Enter the binary sequence (end with 'q'):\n");

//     while (1) {
//         scanf(" %c", &bit); // Added space before %c to consume leading whitespace

//         if (bit == '1' && !firstOneFound) {
//             firstOneFound = 1;
//         } else if (bit == '0' && firstOneFound) {
//             count++;
//         } else if (bit == 'q') { // Using 'q' to indicate the end of input
//             break;
//         }
//     }

//     printf("The number of 0's between the first and last 1 is: %d\n", count);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int bit, first = -1, last = -1, count = 0;
//     while (1) {
//         scanf("%d", &bit);
//         if (bit == -1) {
//             break;
//         }
//         if (bit == 1) {
//             if (first == -1) {
//                 first = last = count = 0;
//             } else {
//                 last = count;
//                 count = 0;
//             }
//         } else if (first != -1) {
//             count++;
//         }
//     }
//     if (first == -1) {
//         printf("0");
//     } else {
//         printf("%d", last);
//     }
//     return 0;
// }


#include <stdio.h>
int main(){
  int digit=1;
  int currentcounter=0;
  int totalcounter=0;
  int flag=0;
  while(digit!=-1){
    
    scanf("%d",&digit);
    if(digit==1){
      flag=1;
      totalcounter+=currentcounter;
      currentcounter=0;
    }
    else if(digit==0 && flag==1){
    	currentcounter++;
    }
  }
  printf("%d",totalcounter);
}