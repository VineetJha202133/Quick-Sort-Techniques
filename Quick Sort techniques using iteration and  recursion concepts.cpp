void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int partition(int arr[], int m, int n)
{
    int pivot = arr[n];
    int a = m - 1;

    for(int b = m; b < n; b++)
    {
        if(arr[b] < pivot)
        {
            a++;
            swap(arr, a, b);
        }
    }
    swap(arr, a+1, n);
    return a+1;
}

void quick_sort(int arr[], int m, int n)
{
    if(m<n)
    {
        int pi = partition(arr, m, n);
        quick_sort(arr, m, pi-1);
        quick_sort(arr, pi+1, n);
    }
}

int main()
{
    int arr[5] = {5,4,3,2,1};
    quick_sort(arr, 0, 4);
    for(int a = 0; a < 5; a++)
        cout << arr[a] << " ";
    cout << endl;
    return 0;
}
