#include<stdio.h>
int a[100];
int main(){
	printf("Please input 8 numbers:");
	for(int i=0;i<8;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<8;i++){
		for(int j=0;j<7-i;j++){
			if(a[j]>a[j+1]){
				int x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
	}
	for(int i=0;i<8;i++){
		printf("%d ",a[i]);
	}
}