#include <stdio.h>

int main()
{
	int is_lower = 1; /* 1 if the triangle is lower triangular,
                           * 0 otherwise
                           */
	int is_upper = 1; /* 1 if the triangle is upper triangular,
                           * 0 otherwise 
                           */
	int current;      /* current input number */
	int size;         /* number of rows (or number of columns
                           * in the matrix 
                           */
	int i, j;

	scanf("%d", &size);

	for(i = 0; i < size; i++)
    {
		for(j = 0; j < size; j++)
        {
			scanf("%d", &current);
                        /* if we see any nonzero entry
                         * above the diagonal, then it
                         * is not a lower triangular matrix
                         */
			if(i < j && current != 0)
				is_lower = 0;
                        /* if we see any nonzero entry
                         * below the diagonal, then it is
                         * not an upper triangular matrix
                         */
			if(i > j && current != 0)
				is_upper = 0;
		}
	}
	if(is_lower || is_upper)
		printf("yes\n");
	else
		printf("no\n");

	return 0;
}
