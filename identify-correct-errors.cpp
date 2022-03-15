// *********** Question 3 *************
// a.
int sum(int n)

{

    if (n == 0)

        return 0;

    else
        // Error found - n + 1
        return n + sum(n - 1);
}

// b.
// Error found - class should be stated
template <class A>

A product(A num1, A num2, A num3)

{

    return num1 * num2 * num3;
}

// c
double cube(int);
// Error found - 2 parameters should be passed
int cube(int, int);