#include <stdio.h>

double main()
{
    int digit_counter_10 = 0;
    int num_digit(int val)
    {
        if (val == 0)
            return 1;
        while (val != 0) {
            digit_counter_10++;
            val /= 10;
        }
        return digit_counter_10;
    }

    int number_10;

    printf("Enter the number to be reserved to digits...\n");
    scanf("%d", &number_10);
    printf("%d number is %d digits!\n", number_10, num_digit(number_10));

    int number_2 = number_10;
    int number_2_printf = number_10;
    int x10[digit_counter_10];

    for (; digit_counter_10 >= 1; --digit_counter_10)
    {
        x10[digit_counter_10] = number_10 % 10;
        number_10 = number_10 / 10;
    }

    int k = 1000;
    int i = 0;
    int x2[k];

    for (i = 1; k >= 0; --k, ++i)
    {
        x2[i] = number_2 % 2;
        number_2 /= 2;
        if (number_2 / 2 == 0)
        {
            i += 1;
            x2[i] = number_2 % 2;
            break;
        }
    }

    int four;
    int empty(int four)
    {
        if ((four % 4) - 1 == 0)
            printf(" ");
        return 0;
    }

    int add_zero_bit(int val)
    {
        if (val == 4)
            return 0;
        val = (((val / 4) + 1) * 4) - val;
        return val;
    }

    int g = add_zero_bit(i);
    int t = add_zero_bit(i);

    printf("in the total bit long is %d ...\n", i + g);
    printf("%d's number of equivalent at binary is =\n", number_2_printf);

    for (; i + t > i; --t)
    {
        x2[i + t] = 0;
    }

    int z = i + g;

    for (; i + g > 0; --i)
    {
        for (; g > 0; --g)
        {
            printf("%d", x2[i + g]);
            z -= 1;
        }
        printf("%d", x2[i + g]);
        empty(z);
        z -= 1;
    }
    return 0;
}
