#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, head, total_movement = 0;

    printf("Enter number of disk requests: ");
    scanf("%d", &n);

    int requests[n], visited[n];
    printf("Enter the disk request sequence:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &requests[i]);
        visited[i] = 0;
    }

    printf("Enter initial head position: ");
    scanf("%d", &head);

    printf("\nSeek Sequence:\n");
    for(i = 0; i < n; i++) {
        int min = 1e9, index = -1;
        for(j = 0; j < n; j++) {
            if(!visited[j] && abs(requests[j] - head) < min) {
                min = abs(requests[j] - head);
                index = j;
            }
        }

        printf("Head moves from %d to %d --> Distance: %d\n",
               head, requests[index], abs(requests[index] - head));

        total_movement += min;
        head = requests[index];
        visited[index] = 1;
    }

    printf("\nTotal head movement = %d\n", total_movement);
    return 0;
}
