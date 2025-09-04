// Time complexity depends on gap sequence: typically O(n^1.5) to O(n^2), Space: O(1).
void shellSort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n -  1; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {  
                arr[j] = arr[j - gap];           
            }
            arr[j] = temp;  
        }
    }
}
