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
	int key;
};

struct dataItem* wc[SIZE];

int hashCode(int key) {
   return key % SIZE;
}

unsigned long
hash(unsigned char *str)
{
    unsigned long hash = 5381;
    int c;

    while ((c = *str++))
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return hash;
}

// struct wc *search(int key){
// 	hashedArray
// };

struct dataItem *search(int key) {
   //get the hash 
   int hashIndex = hashCode(key);  
	
   //move in array until an empty 
   while(wc[hashIndex] != NULL) {
	
      if(wc[hashIndex]->key == key)
         return wc[hashIndex]; 
			
      //go to next cell
      ++hashIndex;
		
      //wrap around the table
      hashIndex %= SIZE;
   }        
	
   return NULL;        
}

// void insert(int key, int data) {
//    struct DataItem *item = (struct DataItem*) malloc(sizeof(struct DataItem));
//    item->data = data;  
//    item->key = key;

//    //get the hash 
//    int hashIndex = hashCode(key);

//    //move in array until an empty or deleted cell
//    while(hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1) {
//       //go to next cell
//       ++hashIndex;
		
//       //wrap around the table
//       hashIndex %= SIZE;
//    }
	
//    hashArray[hashIndex] = item;
// }

struct wc *
wc_init(char *word_array, long size)
{
	struct wc *wc;
	// wc = (struct wc *)malloc(sizeof(struct wc));
	unsigned char word[256] = "";
	for(int i = 0; i < size; i++){
		if(isspace(word_array[i]) == 0){
			word[strlen(word)] = word_array[i];
		}
		else{
			printf(search(hash(word)));
			memset(word,0,sizeof(word));
		}
		
	};
	
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
