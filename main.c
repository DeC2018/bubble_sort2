#include <stdio.h>

int main(){
    int arr[50], num, x, y, temp;
    printf("Please Enter the Number of Elements you want in the array: ");
    scanf("%d", &num);
    printf("Please Enter the Value of Elements: ");
    for(x = 0; x < num; x++)
        scanf("%d", &arr[x]);
    x = 0;
    while(x < num - 1){
        y = 0;
        while(y < num - x - 1){
            if(arr[y] > arr[y + 1]){
                temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
            y++;
        }
        x++;
    }
    printf("Array after implementing bubble sort: ");
    for(x = 0; x < num; x++)
        printf("%d  ", arr[x]);
    return 0;
}
