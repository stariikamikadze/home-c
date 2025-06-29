void sort_array(int size, int a[]) {
    int swapped;
    for (int i = 0; i < size - 1; i++) {
        swapped = 0;
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Обмен элементов
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = 1;
            }
        }
        // Если обменов не было, массив уже отсортирован
        if (!swapped) break;
    }
}
