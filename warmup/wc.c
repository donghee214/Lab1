#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "wc.h"

struct wc {
	/* you can define this struct to have whatever fields you want. */
};

struct wc *
wc_init(char *word_array, long size)
{
	struct wc *wc;

	wc = (struct wc *)malloc(sizeof(struct wc));
	assert(wc);

	printf("here");
	printf(word_array);

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
