We as programmers need frequently to swap the contents of two variables, and the procedure is simple just make a temporary variable and do the procedure as follows:
    temp = var1
    var1 = var2
    var2 = temp
But the process depends on the datatype of the variables and you may end with having multiple functions and each function deals with a single datatype and this looks like time to waste.

The function genericSwap() depends on dealing with memory and swapping the contents of the two memory blocks, all should you do is to pass the addresses of the variables in addition to the size of the variable just to allocate the same amount of memory to the temporary variable and here is an example:

    int x = 4, y = 5; 
    genericSwap(&x, &y, sizeof(x));

And after swapping the variables, x will be equal to 5 and y will be equal to 4.