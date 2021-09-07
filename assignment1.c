#include <stdio.h>

void BubbleSort(int list[], int n);

int main(){
	int n = 5;
	int list[n-1];

	for(int i=0;i<n;i++){
		printf("\nEnter a number: ");
		scanf("%d",&list[i]);
		if(i<n)
		BubbleSort(list,i+1);
		for(int j=0;j<=i;j++){
			printf("\n%d",list[j]);
		}
		printf("\n");

	}
}
void BubbleSort(int list[],int n){
	int temp = 0;

	for(int j=0;j<n;j++)
		for(int i=0;i<n-j-1;i++){
			if (list[i] > list[i+1]){
              			temp = list[i];
				list[i] = list[i+1];
				list[i+1] = temp;
			}
		}
}
