#include <stdio.h>

void main() {
    int testCases, itemsFound, item, point, totalGainedPoints = 0;
    scanf("%d", &testCases);
    while(testCases > 0) {
        scanf("%d", &itemsFound);
        for (int i = 1; i <= itemsFound; i++) {
            scanf("%d", &item);
            scanf("%d", &point);

            if (item < 9) {
                totalGainedPoints += point;
            }
        }
        printf("%d", totalGainedPoints);
        testCases--;
    }
}