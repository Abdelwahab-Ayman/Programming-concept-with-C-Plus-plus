■ array is collection of one or more objects of same type that are stored
contiguously in memory 

■ each element in array identified by (unique) integer index, with indices
starting from zero

■ array denoted by []

■ example:

double x[10]; // array of 10 doubles
int data[512][512]; // 512 by 512 array of ints

■ elements of array accessed using subscripting operator []

■ example:

int x[10];

// elements of arrays are x[0], x[1], ..., x[9]

■ often preferable to use user-defined type for representing array instead of
array type

■ for example, std::array and std::vector types (to be discussed later)
have numerous practical advantages over array types
