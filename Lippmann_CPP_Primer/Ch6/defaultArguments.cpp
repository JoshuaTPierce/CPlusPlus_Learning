/*
Some functions have parameters that are given a particular value in most, but not all,
calls. In such cases, we can declare that common value as a default argument for
the function. Functions with default arguments can be called with or without that
argument.

For example, we might use a string to represent the contents of a window. By
default, we might want the window to have a particular height, width, and background
character. However, we might also want to allow users to pass values other than the
defaults. To accommodate both default and specified values we would declare our
function to define the window as follows: */

typedef string::size_type sz; 
string screen(sz ht = 24, sz wid = 80, char backgrnd = ' ');

/*
Here we’ve provided a default for each parameter. A default argument is specified as
an initializer for a parameter in the parameter list. We may define defaults for one or
more parameters. However, if a parameter has a default argument, all the parameters
that follow it must also have default arguments.

Calling Functions with Default Arguments
If we want to use the default argument, we omit that argument when we call the
function. Because screen provides defaults for all of its parameters, we can call
screen with zero, one, two, or three arguments: */

string window;
window = screen(); // equivalent to screen(24,80,' ')
window = screen(66);// equivalent to screen(66,80,' ')
window = screen(66, 256); // screen(66,256,' ')
window = screen(66, 256, '#'); // screen(66,256,'#')

/*
Best Practices
Default arguments ordinarily should be specified with the function declaration
in an appropriate header.