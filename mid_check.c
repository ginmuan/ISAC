#include<stdio.h>
#include <string.h> 

// int main(){
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int k = 0;
//     scanf("%d", &k);
//     int left = 0;
//     int right = 9;
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     while (left <= right)
//     {
//         int mid = (left + right) / 2;
//         if (arr[mid] < k)
//         {
//             left = mid + 1;
//         }
//         else if (arr[mid] > k)
//         {
//             right = mid - 1;
//         }
//         else
//         {
//             printf("Find the index at%d\n", mid);
//             break;
//         }
//         /* code */
//     }
//     if(left > right){
//         printf("Not found\n");
//     }
    

//     return 0;
// }

int main(){
    char arr1[] = "Hello, World!";
    char arr2[] = "#############";
    int left = 0;
    int right = strlen(arr1) - 1;
    for ( ; left <= right; left++, right--)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s", arr2);
        printf("\n");


    }
    
    
    return 0;

}