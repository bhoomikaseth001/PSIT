char catAndMouse() {
    int arr[3];
    for(int i=0;i<3;i++) {
        if((arr[2]-arr[1])>(arr[1]-arr[0])) 
        return 'Cat B';
        else if((arr[2]-arr[1])<(arr[1]-arr[0]))
        return 'Cat A';
        else
        return 'Mouse C'
    }
}
int main() {
    int q;
    scanf("%d",&q);
    int arr[3];
    for(int j=1;j<=q;j++) {
        for(int i=0;i<3;i++) {
            scanf("%d",&arr[i]);
        }
            char str=catAndMouse();
            printf("%c\n",str);
    }
}