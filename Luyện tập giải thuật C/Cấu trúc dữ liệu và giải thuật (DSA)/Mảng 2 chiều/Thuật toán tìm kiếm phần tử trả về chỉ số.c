#include<stdio.h>
void Find(int a[][3], int row, int col, int x){
	int i,j,found = 0;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			if(a[i][j] == x){
				found++;
				printf("Da tim thay phan tu %d tai vi tri hang %d, cot %d!\n",x,i,j);
			}
		}
	}
	printf("Tong so phan tu %d duoc tim thay: %d\n",x,found);
}
int main(){
	int a[3][3] = {
		{0,0,0},
		{1,1,0},
		{0,1,0}	
	};
	int i,j;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	Find(a,3,3,1);
	return 0;
}
