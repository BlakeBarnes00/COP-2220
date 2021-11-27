#include <stdio.h>
#include <stdlib.h>

int main() {
	// Open the file to write into
	FILE *output_file = fopen("data-size.dat", "w");
	if(!output_file) {
		perror("File opening failed.\n");
		return EXIT_FAILURE;
	}

	fprintf(output_file, "%-36s%2s\n", "Data type", "Size");
	fprintf(output_file, "%-38s%2d\n", "char", (int) sizeof(char));
	fprintf(output_file, "%-38s%2d\n", "unsigned char", (int) sizeof(unsigned char));
	fprintf(output_file, "%-38s%2d\n", "short int", (int) sizeof(short int));
	fprintf(output_file, "%-38s%2d\n", "unsigned short int", (int) sizeof(unsigned short int));
	fprintf(output_file, "%-38s%2d\n", "int", (int) sizeof(int));
	fprintf(output_file, "%-38s%2d\n", "unsigned int", (int) sizeof(unsigned int));
	fprintf(output_file, "%-38s%2d\n", "long int", (int) sizeof(long int));
	fprintf(output_file, "%-38s%2d\n", "unsigned long int", (int) sizeof(unsigned long int));
	fprintf(output_file, "%-38s%2d\n", "float", (int) sizeof(float));
	fprintf(output_file, "%-38s%2d\n", "double", (int) sizeof(double));
	fprintf(output_file, "%-38s%2d\n", "long double", (int) sizeof(long double));
	
	// Close the file
	fclose(output_file);

	return EXIT_SUCCESS;
}