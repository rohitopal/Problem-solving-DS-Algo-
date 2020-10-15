#include <stdio.h>
#include <stdbool.h>

bool binary_search(int *a, int l, int h, int x){
    while(l <= h){
        int mid = l + (h-l)/2;
        if(a[mid] == x)
            return true;
        else if(a[mid] < x)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return false;
}
int lower_bound(int *a, int l, int h, int x){
    while(l < h){
        int mid = l + (h - l)/2;
        if(x > a[mid])
            l = mid + 1;
        else
            h = mid;
    }
    return l;
}

int upper_bound(int *a, int l, int h, int x){
    while(l < h){
        int mid = l + (h-l)/2;
        if(x < a[mid])
            h = mid;
        else
            l = mid + 1;
    }
    return l;
}
int get_count(int *a, int n, int x){
    if(binary_search(a, 0, n-1, x))
        return upper_bound(a, 0, n-1, x) - lower_bound(a, 0, n-1, x);
    else
        return -1;
}
int main() {
	int t, n, x;
	scanf("%d", &t);
	while(t--){
	    scanf("%d", &n);
	    scanf("%d", &x);
	    int a[n];
	    for(int i=0; i<n; i++)
	        scanf("%d", &a[i]);
	    printf("%d\n", get_count(a, n, x));
	}
	return 0;
}
