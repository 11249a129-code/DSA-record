//aim
//binary in c

/*algorithm
start
input the element to search ,say key 
set start==0,end=n-1
repeat while low <=high,do:
find mid= (start+end)/2
if A[mid]==key
print"found at position mid"
stop
if A[mid]<key,set start = mid+1
else,set end = mid-1
if start>end,print."not found"*/

//program
#include <stdio.h>

int main() {
    int n, key, start, end, mid;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    start = 0;
    end = n - 1;
    while (start <= end) {
        mid = (start + end) / 2;

        if (A[mid] == key) {
            printf("Found at position %d\n", mid);
            return 0; 
        }
        else if (A[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    printf("Not found\n");

    return 0;
}
