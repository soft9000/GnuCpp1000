#include <stdio.h>

int main(int argc, char *argv[]) {
	int iData; float fData; char cData;
	int num = sscanf("1 2 3", "%d %f %c", 
		&iData, 
		&fData, 
		&cData);
	printf("Got %d as (%d)(%f)(%c)",
		num,
		iData,
		fData,
		cData);
	return num;
}

