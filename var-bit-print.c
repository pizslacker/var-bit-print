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

int main(void)
{
    char *pnavn = "var-bit-print";
    char *pversjon = "1.2"; 
    printf("%s v%s\n", pnavn, pversjon);
    puts("====================");
    printf("char er %zu bits\n",      CHAR_BIT * sizeof( char )      );
    printf("short er %zu bits\n",     CHAR_BIT * sizeof( short )     );
    printf("int er %zu bits\n",       CHAR_BIT * sizeof( int  )      );
    printf("float er %zu bits\n",     CHAR_BIT * sizeof( float )     );
    printf("double er %zu bits\n",    CHAR_BIT * sizeof( double )    );
    printf("long er %zu bits\n",      CHAR_BIT * sizeof( long )      );
    printf("long long er %zu bits\n", CHAR_BIT * sizeof( long long ) );
    int gjSnitt = ((CHAR_BIT * sizeof(char) + CHAR_BIT * sizeof(short) + CHAR_BIT * sizeof(int) + CHAR_BIT * sizeof(float) + CHAR_BIT * sizeof(double) + CHAR_BIT * sizeof(long) + CHAR_BIT * sizeof(long long)) / 7 );
    printf("\nGjennomsnitt: %d bits\n", gjSnitt);
    return 0;
}
