unsigned long factorial(unsigned long n)
{
    if(n < 2)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

unsigned long combination(unsigned long n, unsigned long m)
{
    if (n < m){
        return 0;
    }

    unsigned long numerator = factorial(n);
    unsigned long denominator = factorial(m) * factorial(n-m);

    return numerator / denominator;
}
