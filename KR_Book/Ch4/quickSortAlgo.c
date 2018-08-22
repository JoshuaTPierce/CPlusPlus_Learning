/* qsort: sort v[left]...v[right] into increasing order */
void qsort(int v[], int left, int right){
    int i, lastl
    void swap(int v[], int i, int j);

    if(left >= right) //do nothing if array contains <2 elements
        return;
    swap(v, left, (left + right) / 2); //move partition to elem
    last = left; //move to v[0]
    for(i = left + 1; i <= right; i++)
        if(v[i] < v[left])
            swap(v, ++last, i);
    swap(v, left, last); //restore partition element
    qsort(v, left, last - 1);
    qsort(v, last + 1, right);
}

/* swap: interchange v[i] and v[j] */
void swap(int v[], int i, int j){
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}