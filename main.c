#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 0, j = 0, _size = 0, half_size = 0;
    const char ch = 'X';        // change the char as desired...

    while (_size < 5)
    {
        printf("Please enter size (must be greater than four) = ");
        scanf("%d", &_size);
    }

    printf("\n");

    if (_size % 2 == 0)     // to make sure that the size is odd number so that the Swastika gets perfect shape...
    {
        _size++;
    }

    half_size = _size / 2;

    for (i = 0; i < _size; i++)
    {
        for (j = 0; j < _size; j++)
        {
            if ((i == 0 && j > half_size) || (i < half_size && j ==0) || (i == half_size) || (i > half_size && j == _size - 1) || (i == _size - 1 && j < half_size) || (j == half_size))
            {
                printf("%c ", ch);
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

    getch();

    return 0;
}
