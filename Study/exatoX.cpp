#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int iData; 
	float fData; 
	long lData;
	
	iData = atoi("1");
	fData = atof("2");
	lData = atol("3");
	printf("Got (%d)(%f)(%ld)",
		iData,
		fData,
		lData);
	return 0;
}

