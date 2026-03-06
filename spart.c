#include<stdio.h>

int main(){
	int mat[4][7] = {{0,0,1,2,0,3,4},{0,3,4,0,0,4,0},{0,0,0,0,0,0,9}, {0,0,2,2,2,0,0}};
	int spMat[3][6];
	int cnt_NZ = 0,i,j,k=0;
	printf("Original Matrix Representation:\n");
	for(i=0;i<4;i++){
		for(j=0;j<7;j++){
			printf("%d\t", mat[i][j]);
		}
		printf("\n");		
	}

//counting non zeroes
	for(i=0;i<4;i++)
		for(j=0; j<7;j++)
			if(mat[i][j] !=0)
				cnt_NZ++;
	printf("Non Zero Valkues: %d\n",cnt_NZ);

//create sparse matrix
	for(i=0; i<4;i++)
		for(j=0; j<7;j++)
			if(mat[i][j] !=0){
				spMat[0][k] = i;
				spMat[1][k] = j;
				spMat[2][k] = mat[i][j];
				k++;
			}
//end sparse
	printf("Sparse Metrix representation: \n");
	for(i=0;i<3;i++){
		for(j=0; j<6; j++){
			printf("%d\t", spMat[i][j]);
		}
		printf("\n");
	}
}