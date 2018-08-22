/* binsearch: find x in v[0] <= v[1] <= .. <= v[n-1] */
int binsearch(int x, int v[], int n){
    int low, high, mid;
    low = 0; 
    high = n - 1;
    while(low <= high){
        mid = (low + high) / 2;
        if(x < v[mid])
            high = mid - 1;
        else if(x > v[mid])
            low = mid + 1;
        else //MATCH FOUND 
            return mid;
        }

        return -1; //no match
    }
}

//The fundamental decision is whether x is less than, greater than, or equal to the
//middle element v[mid] at each step; this is a natural for else-if.