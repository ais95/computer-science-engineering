/* begin
IF N = MAX, return
ELSE
   N = N + 1

   SEEK Location index

   For All Elements from A[index] to A[N]
      Move to next adjacent location

   A[index] = New_Element

end */

// ----------- IMPLEMENTATION ------------

#include <stdio.h>
#define MAX 5
void main() {
   int array[MAX] = {1, 2, 4, 5};

   int N = 4;        // number of elements in array
   int i = 0;        // loop variable
   int index = 2;    // index location to insert new value
   int value = 3;    // new data element to be inserted

   // print array before insertion
   printf("Printing array before insertion \n");

   for(i = 0; i < N; i++) {
      printf("array[%d] = %d \n", i, array[i]);
   }

   // now shift rest of the elements downwards
   for(i = N; i >= index; i--) {
      array[i+1] = array[i];
   }

   // add new element at first position
   array[index] = value;

   // increase N to reflect number of elements
   N++;

   // print to confirm
   printf("Printing array after insertion \n");

   for(i = 0; i < N; i++) {
      printf("array[%d] = %d\n", i, array[i]);
   }
}
