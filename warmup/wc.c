#include <assert.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "common.h"
#include "wc.h"

#define SIZE 1000000

struct dataItem {
	int data;
	char key[];
};

struct dataItem* wc[SIZE];


int hashFunction(int key, int sizeOfHashArray){
	return key % sizeOfHashArray;
};

// struct wc *search(int key){
// 	hashedArray
// };

struct wc *
wc_init(char *word_array, long size)
{
	struct wc *wc;
	wc = (struct wc *)malloc(sizeof(struct wc));
	char word[256] = "";
	for(int i = 0; i < size; i++){
		if(isspace(word_array[i]) == 0){
			word[strlen(word)] = word_array[i];
		}
		else{
			wc = (struct wc *)malloc(sizeof(struct wc));
			memset(word,0,sizeof(word));
		}
		
	};
	sizeOfHashArray = size;
	

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
