#include<stdio.h>
int main(){
	FILE *fp;
	fp=fopen("abc.txt","r");
	if(fp=NULL){
		printf("114514\n");
		return 1;
	}else{
		int num1,num2;
		while(fscanf(fp,"%d%d",&num1,&num2)==2){
			printf("%d*%d=%d\n",num1,num2);
		}
		fclose(fp);
	}

return 0;
}