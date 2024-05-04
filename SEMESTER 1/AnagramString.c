#include <stdio.h>
#include <string.h>
void Sort(char *str) {
    int l = strlen(str),i,j;
    for (i = 0; i < l - 1; i++) {
        for (j = 0; j < l - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}
int AreAnagram(char *s1, char *s2) {
    int l1 = strlen(s1),l2 = strlen(s2);
    if (l1 != l2)
        return 0;
    Sort(s1);
    Sort(s2);
    return strcmp(s1, s2);
}

int main() {
    char s1[20], s2[20];

    int t;
    scanf("%d", &t);
    scanf("%s", s1);
    scanf("%s", s2);
for(int i=0;i<t;i++){
    if (AreAnagram(s1, s2))
        printf("NO");
     else 
        printf("YES");
    return 0;
   }
}