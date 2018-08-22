//The unary operator & gives the address of an object, so the statement
p = &c;
//assigns the address of c to the variable p, and p is therefore said
//to "point" to c. The & operator only applies to objects in memory:
//variables and array elements. Suppose that x and y are integers and
//and ip is a pointer to int. This artificial sequence shows how to
//declare a pointer and how to use & and *:
int x = 1, y = 2, z[10];
int *ip; //ip is a pointer to int
ip = &x; //ip now points to x
y = *ip; //y is now 1
*ip = 0; //x is now 0;
ip = &z[0]; //ip now points to z[0]

//If ip points to an integer x, then *ip can occur in any context 
//where x could, so
*ip = *ip + 10; 
//increments *ip by 10.

//The unary operators * and & bind more tightly than arithmetic operators, so
y = *ip + 1
//takes whatever ip points at, adds 1, and assigns the result to y