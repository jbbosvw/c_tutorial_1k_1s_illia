#include "app.h"

int main()
{
    int max_count = 10000;

    int series_count = 10;

    double probability = 0.0;

    int i = 0;

    for (i = 0; i < series_count; ++i)
    {
        srand(time(NULL));

        int count = 0, succ_count = 0, previous = -1;

        for (count = 0; count < max_count; ++count)
        {
            int dice = rand() % 6 + 1;

            if (dice == previous)
            {
                ++succ_count;
            }

            previous = dice;
        }

        double result = 100.0 * succ_count / max_count;

        probability += result;
    }


    probability /= series_count;

    printf("Probability: %.5f\n", probability);

    return 0;
}
