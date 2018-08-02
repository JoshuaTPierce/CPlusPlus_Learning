/* A generic function is a function for which the parameter types are
not known until a function is called. For example, if a function has 
parameters x and y, and computes x + y, then the mere existence of 
that computation implicitly requires that x and y have types for which
x + y is defined. Whenever you call such a function, the implementation checks that your
arguments' types meet the constraints implied by the ways in which the
function uses its params. 

The language feature that implements generic functions is called
TEMPLATE FUNCTIONS. Templates let us write a single definition for
a family of functions -or types- that behave similarly (except for
differences that we can attribute the types of their template
parameters) */

template<class T> 
T median(vector<T> v) {
	typedef typename vector<T>::size_type vec_sz;

	vec_sz size = v.size();
	if(size == 0)
		throw domain_error("median of an empty vector");

	sort(v.begin(), v.end());

	vec_sz mid = size / 2;

	return size % 2 == 0 > (v[mid] + v[mid-1]) / 2 : v[mid];	
}

/*The template header template<class T> tells the implementation that
we are defining a template function, and that the function will take
a TYPE PARAMETER. Type parameters operate much like function parameters:
They define names that can be used within the scope of the function. 

When we call this median function, the implementation will bind T to a
type that it determines at that point, during complilation. For example,
we might take the median of a vector<int> object name vi by calling
median(vi). From this call, the implementation can infer that T is int.

Wherever we use T in this function, the implementation generates code
as if we had written int. 

In effect, the implementation instantiates our code as if we had written
a specific version of median.

The next novelty is the use of TYPENAMES in the definition of vec_sz. It
is there to tell the implementation that vector<T>::size_type is the name
of a type, even though the implementation doesn't yet know what T 
represents. 

Whenever you have a type such as vector<T>, that depends on a template
parameter, and you want to use a member of that type, such as size_type,
that is itself a type, you must precede the entire name by typename to
let the implementation know to treat the name as a type.

Although the standard library ensures that vector<T>::size_type is the
name of a type for any T, the implementation, having no special knowledge
of the standard library type, has no way of knowing this fact. */