/* A generic algorithm is an algorithm that is not part of any particular
kind of container, but instead takes a cure from its arguments' types
about how to access the data it uses. 

The standard library's generic algorithms usually take iterators among
their arguments, which they use to manipulate the elements of the
underlying containers. 

So, for example, the copy algorithm takes three iterators, which
we'll call begin, end, and out, and copies all the elements in
the range from [begin, end) to a sequence of elements starting at
out and extending as far as necessary: */

copy(begin, end, out)

//is the same as:

while(begin != end)
	*out++ = *begin++;

