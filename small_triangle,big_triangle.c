#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
    double p;
    double res;
    double area1;
    double area2;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n - i; j++) {
            
            p = (tr[j].a + tr[j].b + tr[j].c)/2;
            res = p * (p - tr[j].a) * (p - tr[j].b) * (p - tr[j].c);
            area1 = sqrt(res);
            
            p = (tr[j-1].a + tr[j-1].b + tr[j-1].c)/2;
            res = p * (p - tr[j-1].a) * (p - tr[j-1].b) * (p - tr[j-1].c);
            area2 = sqrt(res);
            
            if (area1 < area2) {
                triangle temp = tr[j];
                tr[j] = tr[j-1];
                tr[j-1] = temp;
                
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}