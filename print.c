#include <stdio.h>


void print(int a, int b, int c, int d, int ida, int idb, int idc, int idd, int ahost, int bhost, int chost, int dhost, int num){

	
	FILE *outFile = fopen("output.txt", "w");
	
	fprintf(outFile, "Running prgm1 with %d addresses\n", num);
	
	fprintf(outFile, "Class A had %d networks\n", a);
	fprintf(outFile, "Largest A network is %d with %d host\n", ida, ahost);

	fprintf(outFile, "Class B had %d networks\n", b);
	fprintf(outFile, "Largest B network is %d with %d host\n", idb, bhost);

	fprintf(outFile, "Class C had %d networks\n", c);
	fprintf(outFile, "Largest C network is %d with %d host\n", idc, chost);

	//printf("Class D had %d networks\n", d);
	//printf("Largest D network is %d with %d host\n\n", idd, dhost);

	fclose(outFile);

fprintf(outFile, "Running prgm1 with %d addresses\n", num);

	printf("Running prgm1 with %d addresses\n", num);        

	printf("Class A had %d networks\n", a);
        printf("Largest A network is %d with %d host\n", ida, ahost);

        printf("Class B had %d networks\n", b);
        printf("Largest B network is %d with %d host\n", idb, bhost);

        printf("Class C had %d networks\n", c);
        printf("Largest C network is %d with %d host\n", idc, chost);

}
