// Merge Sort: Best: O(n log n), Average: O(n log n), Worst: O(n log n), Space: O(n)

// Helper function to merge the single element 
void merge(vector<int>& leftArr, vector<int>& rightArr, vector<int>& arr) {
    int l = 0, r = 0, i = 0;
    int leftSize = leftArr.size();
    int rightSize = rightArr.size();

    while (l < leftSize && r < rightSize) {
        if (leftArr[l] < rightArr[r]) {
            arr[i++] = leftArr[l++];
        } else {
            arr[i++] = rightArr[r++];
        }
    }

    while (l < leftSize) {
        arr[i++] = leftArr[l++];
    }

    while (r < rightSize) {
        arr[i++] = rightArr[r++];
    }
}

void mergeSort(vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) return;

    int middle = n / 2;
    vector<int> leftArr(middle);
    vector<int> rightArr(n - middle);

    for (int i = 0; i < middle; i++) {
        leftArr[i] = arr[i];
    }

    for (int i = 0; i < n - middle; i++) {
        rightArr[i] = arr[middle + i];
    }

    mergeSort(leftArr);
    mergeSort(rightArr);
    merge(leftArr, rightArr, arr);

}
