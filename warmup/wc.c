#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "common.h"
#include "wc.h"

int sizeOfHashArray;

int hashFunction(int key){
	return key % sizeOfHashArray;
}

struct wc {
	/* you can define this struct to have whatever fields you want. */
	int data;
	char key[];
};

struct wc *
wc_init(char *word_array, long size)
{
	struct wc *wc;
	char word[256] = "";
	for(int i = 0; i < size; i++){
		if(isspace(word_array[i] == 0)){
			word[strlen(word)] = word_array[i];
		};
		else{
			printf(word);
			word = "";
		}
		
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
