/* Iterator adaptors are functions that yield iterators with properties
that are related to their arguments in useful ways. The iterator
adaptors are defined in <iterator>. 

The most common iterator adaptor is back_inserter, which takes a
container as its argument and yields an iterator that, when used
as a destination, appends values to the container.

For example, back_inserter(ret) is an iterator that, when used
as a destination, appends elements to ret. Therefore, */

copy(bottom.begin(), bottom.end(), back_inserter(ret));

/*copies all the elements of bottom and appends them to the end of 
ret. After this function completes, the size of ret will have increased
by bottom.size(). 