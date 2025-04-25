#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, head, total_movement = 0;

    printf("Enter number of disk requests: ");
    scanf("%d", &n);

    int requests[n];
    printf("Enter the disk request sequence:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &requests[i]);
    }

    printf("Enter initial head position: ");
    scanf("%d", &head);

    printf("\nSeek Sequence:\n");
    for(i = 0; i < n; i++) {
        printf("Head moves from %d to %d --> Distance: %d\n",
               head, requests[i], abs(requests[i] - head));
        total_movement += abs(requests[i] - head);
        head = requests[i];
    }

    printf("\nTotal head movement = %d\n", total_movement);
    return 0;
}
