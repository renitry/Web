using namespace std;
void quick_sort(int arr[], int left, int right)
{
    int i = left, j = right;int tmp;
    int pivot = arr[(left+right)/2];/* partition */
while (i<j){
    while (arr[i] < privot)
    i++;
    while (arr[j] > privot)
    j--;
    if (i<=j){
        tmp = arr[i];
        arr [i] = arr[j];
        arr [j] = tmp;
        i++;j--;
    }; /* recursion */
    if (left <j)
        quick_sort (arr, left, j);
    if (i < right)
        quick_sort(arr, i, right);
}
}

