#include<stdio.h>
#include<stdlib.h>

void main(){
	FILE *fp;
	FILE *fp2;
	fp =  fopen("Basic.txt", "w");
	fprintf(fp,"\n Hi this is my first file.");
	fprintf(fp, "\n So trying to write multiple lines.");
	fprintf(fp, "\n Hope it is a success.");
	fclose(fp);

	fp =  fopen("Basic.txt", "r");
    fp2 = fopen("Basic2.txt", "w");

	char Line[150];
	while (!feof(fp)){
		fgets(Line, 150, fp);
		fprintf(fp2, Line);
	}

	fclose(fp);
	fclose(fp2);


}