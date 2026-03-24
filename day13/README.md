 1. Spiral Matrix Traversal
Problem

Print all elements of a matrix in spiral order.

Spiral Order Direction

The traversal follows this order:

Top row (left → right)
Right column (top → bottom)
Bottom row (right → left)
Left column (bottom → top)
Repeat the process for the inner matrix
Logic Used

We use four boundaries:

Starting row
Ending row
Starting column
Ending column

After printing one outer layer, we move the boundaries inward and repeat until the matrix is fully traversed.

Complexity
Time Complexity: O(n × m)
Space Complexity: O(1)
2. Diagonal Sum of Matrix
Problem

Find the sum of the primary diagonal and secondary diagonal of a square matrix.

Diagonals
Primary diagonal: Elements where row index = column index
Secondary diagonal: Elements where row index + column index = n − 1
The middle element (in odd-sized matrix) should be counted only once
Optimized Logic

We traverse the matrix only once and add:

Primary diagonal element
Secondary diagonal element
Avoid double counting the middle element
Complexity
Time Complexity: O(n)
Space Complexity: O(1)
