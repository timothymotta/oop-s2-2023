void two_five_nine(int array[], int n);

int main() {
    int arr[] = {2, 5, 9, 9, 2, 9, 2, 2, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    two_five_nine(arr, n);

    return 0;
}