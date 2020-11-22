#include<stdio.h>
#define     MAX(a, b, c)    ((a) > ((b) > (c) ? (b) : (c)) ? (a) : ((b) > (c) ? (b) : (c)))
int MaxSubSeqSum1(int a[],int n);
int MaxSubSeqSum2(int *a,int n);
int MaxSubSeqSum3(int *a,int n);

int main(void){
	int K,i;
	scanf("%d",&K);
	int k[K];
	for(i=0;i<K;i++){
		scanf("%d",&k[i]);
	}
	printf("%d",MaxSubSeqSum3(k,K));
	return 0;
}

// 暴力求解
int MaxSubSeqSum1(int a[],int n){
	int ThisSum,MaxSum=0;
	int i,j,k;
	for (i=0;i<n;i++){
		for(j=i;j<=n;j++){
			ThisSum=0;
			for(k=i;k<=j;k++){
				ThisSum+=a[k];
			}
			if(ThisSum>MaxSum)
				MaxSum=ThisSum;
		}
	}
	return MaxSum;
}

// 简单优化
int MaxSubSeqSum2(int *a,int n){
	int ThisSum,MaxSum=0;
	int i,j,k;
	for (i=0;i<n;i++){
		ThisSum=0;
		for(j=i;j<=n;j++){
			ThisSum+=a[j];
			if(ThisSum>MaxSum)
				MaxSum=ThisSum;
		}
	}
	return MaxSum;

}
// 分而治之

int MaxSubSeqSum3(int a[],int n){
	int i,ThisSum,MaxSumleft,MaxSumright,MaxSumCross;
	i=ThisSum=MaxSumright=MaxSumleft=MaxSumCross=0;
	if (n==0 || n==1) {
	return a[0];
	}else{
		MaxSumleft=MaxSubSeqSum3(&a[0],(n-1)/2);
		MaxSumright=MaxSubSeqSum3(&a[(n+1)/2],n/2);

	}
	ThisSum = 0;
	MaxSumleft=a[(n-1)/2];
	for (i=(n-1)/2;i>=0;i--) {
		ThisSum+=a[i];
		if (ThisSum>MaxSumCross) {
			MaxSumCross=ThisSum;
		}
	}
	ThisSum = MaxSumCross;
	for(i=(n+1)/2;i<n;i++){
		ThisSum+=a[i];
		if (ThisSum>MaxSumCross) {
			MaxSumCross=ThisSum;
		}
	}

	return MAX(MaxSumright,MaxSumleft,MaxSumCross);
}

// 最优线性算法

int MaxSubSeqSum4(){

	return 0;
}
