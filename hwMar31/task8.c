#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
    

    int left = 0, right = n - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;

        if (mid % 2 == 1) 
        	mid--;  

        if (arr[mid] == arr[mid + 1]) 
            left = mid + 2;
        else 
            right = mid;
        
    }

    printf("%d\n", arr[left]);
    return 0;
}

