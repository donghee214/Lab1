#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "wc.h"

int sizeOfHashArray;

int hashFunction(int key){
	return key % sizeOfHashArray;
}

struct wc {
	/* you can define this struct to have whatever fields you want. */
	char key[];
	int data;
};

struct wc *
wc_init(char *word_array, long size)
{
	for(int i = 0; i < size; i++){
		printf("%c", word_array[i]);
	};
	sizeOfHashArray = size;
	wc = (struct wc *)malloc(sizeof(struct wc));

	return wc;
}

void
wc_output(struct wc *wc)
{
	printf("here output");
}

void
wc_destroy(struct wc *wc)
{
	printf("here output");
	free(wc);
}
