#include "multi_before_and_after_negative.h"
#include "index_first_negative.h"
#include "index_last_negative.h"

int multi_before_and_after_negative(int array[], int size) {    
    int first_neg = index_first_negative(array, size);
    int last_neg = index_last_negative(array, size);
    for (int i = 0; i < size; i++) {
	    if (array[i] < 0) {
                if (first_neg == -1) {
			first_neg = i;
		}
		last_neg = i;
        }
    }
    if (first_neg == -1 || last_neg == -1) {
        return 0;
    }
    int product = 1;
    for (int i = 0; i < first_neg; i++) {
	    product *= array[i];
    }
    for (int i = last_neg; i < size; i++) {
        product *= array[i];    }
    return product;
}
