// Best: O(n^2), Average: O(n^2), Worst: O(n^2), Space: O(1).
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (i != minIndex) swap(arr[i], arr[minIndex]);
    }
}
