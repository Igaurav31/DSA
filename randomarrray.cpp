void shuffle(int A[], int n)
{
    // read array from the highest index to lowest
    for (int i = n - 1; i >= 1; i--)
    {
        // generate a random number `j` such that `0 <= j <= i`
        int j = rand() % (i + 1);
 
        // swap the current element with the randomly generated index
        swap(A, i, j);
    }
}