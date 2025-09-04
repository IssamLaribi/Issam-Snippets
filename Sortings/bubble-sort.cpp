// Best: O(n), Average: O(n^2), Worst: O(n^2), Space: O(1).
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i- 1; j++) {
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]); 
        }
    }
}
