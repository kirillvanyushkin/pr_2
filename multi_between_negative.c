#include "index_last_negative.h"
#include "index_first_negative.h"

int multi_between_negative(int array[], int size) {
    int first_neg = index_first_negative(array, size);
    int last_neg = index_last_negative(array, size);
    
    if (first_neg == -1 || last_neg == -1 || first_neg == last_neg){
        return 0;
    }
    int product = 1;
    for (int i = first_neg; i < last_ne -1; i++) {
	    product *= array[i];
    }
    return product;
}
