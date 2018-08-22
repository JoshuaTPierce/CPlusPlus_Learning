/* shellsort: sort v[0]...v[n-1] in increasing order */

void shellsort(int v[], int n){
    int gap, i, j, temp;
    for(gap = n / 2; gap > 0; gap /= 2)
        for(i = gap; i < n; i++)
            for(j = i - gap; j >= 0 && v[j] > v[j + gap]l j -= gap){
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;            
        }
}

/* There are three nested loops. The outermost controls the gap between compared
elements, shrinking it from n/2 by a factor of two each pass until it
becomes zero. The middle loop steps along the elements. The innermost loop
compares each pair of elements that is separated by gap and reverses any that
are out of order. Since gap is eventually reduced to one, all elements are eventually
ordered correctly. Notice how the generality of the for makes the outer
loop fit the same form as the others, even though it is not an arithmetic progression.
One final C operator is the comma " , ", which most often finds use in the
for statement. A pair of expressionsseparated by a comma is evaluated left to
right, and the type and value of the result are the type and value of the right
operand. Thus in a for statement, it is possible to place multiple expressionsin
the various parts, for example to process.two indices in parallel. */