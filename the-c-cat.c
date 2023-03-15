#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	// Create a three-dimensional array.
	char threeDimensional[3][6][1][50] = {
		{	{"Give me food human. "},                 // threeDimensional[0][0][0][50]
			{"I command you. "},                      // threeDimensional[0][1][0][50]
			{"Grrrrr. "}
		},                                            // threeDimensional[0][2][0][50]
		{	{" ^._____.^"},                           // threeDimensional[1][0][0][50]
			{" \\.@..^..@.\\"},                       // threeDimensional[1][1][0][50]
			{"//........//\\............./\\,,"},     // threeDimensional[1][2][0][50]
			{" /...........\\...........(._.7"},      // threeDimensional[1][3][0][50]
			{" |............|........../....\\"},     // threeDimensional[1][4][0][50]
			{" |,,|----|,,|/..........C,,(...)/"}
		},                                            // threeDimensional[1][5][0][50]
		{	{"Wait a minute. "},                      // threeDimensional[2][0][0][50]
			{"That better be tuna.|"}
		}                                             // threeDimensional[2][1][0][50]
	};

	// Loop over each dimension's length.
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 6; y++) {
			for (int z = 0; z < 1; z++) {
				printf("%s", threeDimensional[x][y][z]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

