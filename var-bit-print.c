/*
 * var-bit-print
 * Copyright (C) k!M/pizslacker 2014-2026
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <limits.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
    const char *pn = "var-bit-print";
    const char *pv = "1.3";

    printf("%s v%s\n", pn, pv);
    puts("=========================");

    printf("char is      %2zu bits\n", CHAR_BIT * sizeof(char));
    printf("short is     %2zu bits\n", CHAR_BIT * sizeof(short));
    printf("int is       %2zu bits\n", CHAR_BIT * sizeof(int));
    printf("float is     %2zu bits\n", CHAR_BIT * sizeof(float));
    printf("double is    %2zu bits\n", CHAR_BIT * sizeof(double));
    printf("long is      %2zu bits\n", CHAR_BIT * sizeof(long));
    printf("long long is %2zu bits\n", CHAR_BIT * sizeof(long long));
    printf("time_t is    %2zu bits\n", CHAR_BIT * sizeof(time_t));
    printf("pointer * is %2zu bits\n", CHAR_BIT * sizeof(void *));

    size_t totalBits = CHAR_BIT * (
        sizeof(char) +
        sizeof(short) +
        sizeof(int) +
        sizeof(float) +
        sizeof(double) +
        sizeof(long) +
        sizeof(long long) +
        sizeof(time_t) +
        sizeof(void *)
    );

    puts("-------------------------");
    double avg = (double)totalBits / 9.0;
    printf("\nAverage:     %.2f bits\n", avg);

    return 0;
}