#include <stdio.h>
#include <stdlib.h>

struct kvpair {
    char key;
    int val;
};

/*struct kvpair kvcons(struct kvpair a, int k, int v) {
    a.key=k; a.val=v; return a;
}*/

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

int findval(struct kvpair list[26], int v) {
    for (int i=0; i<26; i++) {
        if (list[i].key==v) return list[i].val;
    }
}

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	struct kvpair kvdict[26]; int a=97;
	for (int i=0; i<26; i++) {
	    kvdict[i].key = a; kvdict[i].val=a-96; a++; 
	}
	char testseq[5];
	scanf("%s",&testseq);
	for (int i=0; i<5; i++) {
	    printf("%d",findval(kvdict, testseq[i]));
	}
	return 0;
}
