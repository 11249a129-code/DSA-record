//aim
// linear search in c

/*algorithom
start
input the array A of size n
input the element to search ,say key
set i=0 aloop initializer
repeat while i<n do the following
if a[i]==key ,then
1.print "found"
2.stop
oterwise,increase i by 1 (i++)
if the loop completed & the the element is not found
print"elemnt not found"*/

//program
#include <stdio.h>

int main() {
    int n, key, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    i = 0
    while (i < n) {
        if (A[i] == key) {
            printf("Found\n");
            return 0; 
        }
        i++;
    }
    printf("Element not found\n");
return 0;
}
