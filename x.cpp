#include<stdio.h>

void mergeSort(int arr[], int left, int right){
    if(left >= right) return;

    int mid = (left + right) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    int temp[1001] = {0};
    int leftIdx = left;
    int rightIdx = mid+1;
    int startIdx = 0;

    while(leftIdx <= mid && rightIdx <= right) {
        if(arr[leftIdx] > arr[rightIdx]) temp[startIdx++] = arr[leftIdx++];
        else temp[startIdx++] = arr[rightIdx++];
    }

    for (int i = leftIdx; i <= mid; i++) temp[startIdx++] = arr[i];
    for (int i = rightIdx; i <= right; i++) temp[startIdx++] = arr[i];
    startIdx = 0;
    for (int i = left; i <= right; i++) arr[i] = temp[startIdx++];
}

int main(){
    int n = 0, bad = 0;
    int arr[1001] = {0};

    scanf("%d %d", &n, &bad);
    getchar();

    for (int i = 0; i < n; i++)
    {
        if(i == bad) {
            scanf("%*d");
            bad = -1;
            n--;
            i--;
        }
        else{
            scanf("%d", &arr[i]);
        }
    }
    getchar();

    // mergeSort(arr, 0, n - 1);
    
    for (int i = 0; i < n; i++)
    {
        if(i == 0) printf("%d", arr[i]);
        else printf(" %d", arr[i]);
    }
    printf("\n");
        

    return 0;
}