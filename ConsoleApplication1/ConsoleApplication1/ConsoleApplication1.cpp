// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "thread"       
#include "chrono" 


int main(int argc, char* argv[]) {

	//uploading to git change!

	char a[16];
	char b[16];
	char c[32];
	strncpy(a, "0123456789abcdef", sizeof(a));
	strncpy(b, "0123456789abcdef", sizeof(b));
	strncpy(c, a, sizeof(c));

	int i;
	unsigned int j;
	i = INT_MAX;
	i++;
	printf("i = %d\n", i);

	j = UINT_MAX;
	j++;
	printf("j = %u\n", j);

	std::this_thread::sleep_for(std::chrono::seconds(10000));

	return 0;
}

