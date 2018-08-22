/* next iteration of the enclosing for, while, or do loop to begin. In the
while and do, this means that the test part is executed immediately; in the
for, control passes to the increment step. The continue statement applies
only to loops, not to switch. A continue inside a switch inside a loop
causes the next loop iteration.

As an example, this fragment processes only the non-negative elements in
the array a; negative values are skipped */

for(i = 0; i < n; i++){
    if(a[i] < 0) //skip negative elements
        continue;
}

/* The continue statement is often used when the part of the loop that followsis
complicated, so that reversing a test and indenting another level would nest the
program too deeply */