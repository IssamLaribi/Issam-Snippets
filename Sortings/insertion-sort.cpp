// Best: O(n), Average: O(n^2), Worst: O(n^2), Space: O(1).
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n - 1; i++) {
        int key = arr[i];
        int j = i - 1; 
        while (j >= 0 && key < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
