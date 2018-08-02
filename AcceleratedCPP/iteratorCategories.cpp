/* The library defines fice iterator categories, each of which corresponds
to a specific collection of iterator operations. These categories 
classify the kind of iterator that each of the library containers
provides. 

Each standard library algorithm says what category it expects for each
iterator argument. Thus, the iterator categories give us a way to understand
which containers can use which algorithms. Each category corresponds to a
strategy for accessing container elements. Because of this, they also 
correspond to particular kinds of algorithms. 

For example, some algorithms make only a single pass over their input,
so they don't need iterators that can make multiple passes. Others
require the ability to access arbitrary elements efficiently given 
only their indices, and, therefore, require the ability to add indices
and integers */
///////////////////////////////////////////////////////////////////////

//-------SEQUENTIAL READ-ONLY ACCESS
//One straightforward way to access a sequence is to read its elements
// sequentially. Among the library functions that does so is FIND: 

template<class In, class X> In find(In begin. In end, const X& x){
	while(begin != end && *begin != x)
		++beginl
	return begin;
}

//If we call find(begin, end x), the result is either the first iterator
// iter in the range [begin, end) such that *iter == x or end if no
// such iterator exists.

//--Additional Implementation:
template <class In, class X> In find(In begin, In end, const X& x){
	if(begin == end || *begin == x)
			return begin;
	begin++;
	return find(begin, end, x);
}

//---------------Sequential Write-Only Access
//Input iterators can be used only for reading elements of a sequence.
//Obviously there are contexts in which we would like to be able to use
// iterators to write elements of a sequence. Consider the copy function:

template<class In, class Out>
Out copy(In begin, In end, Out dest) {
	while(begin != end)
		*dest++ = *begin++;
	return dest;
}

//----------------Sequential Read-Write Access
//Suppose we want to be able to read and write the elements of a 
// sequence, but only sequenctially: We intend to advance iterators
// forward, but never backward. An example of a librart function that
// does so is replace, from the <algorithm> header:

template<class For, class X>
void replace(For beg, For end, const X& x, const X& y){
	while(beg != end){
		if(*beg == x)
			*beg = y;
		++beg;
	}
}

//-------------------Reversible Access
//Some functions need to check a container's elements in reverse order. 
//The most straightforward example is reverse, which is defined in the
// <algorithm> header:

template<class Bi> void reverse(Bi begin, Bi end){
	while(begin != end) {
		--end;
		if(begin =! end)
			swap(*begin++, *end);
	}
}

//--------------------Random Access
//Some functions need to be able to jump around in a container. One
// good example is a binary search algorithm - the standard library 
// implements binary_search, but here is a simpler version:

template<class Ran, classX>
bool binary_search(Ran begin, Ran end, const X& x){
	while(begin < end){
		//find midpoint of range
		Ran mid = begin + (end - begin) / 2;
		//see which part contains x, only search in that part
		if(x < *mid)
			end = mid;
		else if(*mid < x)
			begin = mid + 1;
		//if we are here, then *mid == x, so we're done
		else return true;
	}
	return false;
}
	}
}