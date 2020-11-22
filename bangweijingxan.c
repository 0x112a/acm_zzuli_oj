/*
 * 题目描述
某班级中有 n 位学生，学号为 1,2,…,n。现在班级中正在举行 m 个班干部职位的竞选，职位用 1,2,…,m 编号。学号为 i 的同学竞选的职位为 ci，获得 ti 票。最终每个职位选择票数最高的同学上任，若存在多个同学票数一致，则选择学号最小的同学上任。
*现在给你唱票结果，请你告诉班主任最终的班干部名单。
*输入
*第一行包含两个整数 n, m (1≤n≤51, 1≤m≤12, m≤n)，含义见题目描述。
*接下来 n 行，第 i 行包含两个整数 ci, ti (1≤ci≤m, 1≤ti≤n)，含义见题目描述。
*数据保证每个职位至少有一位同学参与竞选。
*输出
*输出一行，包含 m 个整数。第 i 个整数表示担任第 i 个班干部职位的同学学号。
*样例输入 Copy
*5 2
*1 2
*2 1
*2 1
*1 1
*2 2
*样例输出 Copy
*1 5
 */
#include<stdio.h>

int main(void){
	int n,m,i,j;
	typedef struct {
		int ci;
		int ti;
	}student;
	scanf("%d %d",&n,&m);
	student s[n];
	int aws[m];
	for(i=0;i<n;i++){
		scanf("%d %d",&s[i].ci,&s[i].ti);
	}
	for(i=1;i<=m;i++){
		int thismax=0;
		for(j=0;j<n;j++){
			if(s[j].ci==i && s[j].ti>thismax){
				thismax=s[j].ti;
				aws[i-1]=j;
			}
		}
	}
	for(i=0;i<m;i++){
		printf("%d ",aws[i]+1);

	}
	printf("\n");
	return 0;
}
