#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,m;
	
	printf("���� �ϳ��� �Է��Ͻÿ�: ");
	scanf("%d",&n);
	m=-n;
	
	if (n>0)
		printf("���밪�� %d�Դϴ�.\n",n);
	else
		printf("���밪�� %d�Դϴ�.\n",m);
		 
	return 0;
}
