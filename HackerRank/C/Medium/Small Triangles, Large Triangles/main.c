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

double calculate_area(triangle tr);

void sort_by_area(triangle* tr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        double min_area = calculate_area(tr[i]);
        for (int j = i + 1; j < n; j++) {
            double area_j = calculate_area(tr[j]);
            if (area_j < min_area) {
                min_area = area_j;
                min_index = j;
            }
        }
        // Swap the current minimum element with the first element of the unsorted part
        triangle temp = tr[i];
        tr[i] = tr[min_index];
        tr[min_index] = temp;
    }
}

double calculate_area(triangle tr) {
    double s = (tr.a + tr.b + tr.c) / 2.0;
    return sqrt(s * (s - tr.a) * (s - tr.b) * (s - tr.c));
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