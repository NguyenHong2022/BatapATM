#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int st;
int sdu()
{ 
int sd; 
sd=550000;
return sd;
}
int login(int a, int b)
{
	bool value;
	if(a == 123 && b == 456)
	value=true;
	return value;	
}
int ruttien()
{ int c ,st;	
	printf("Moi ban nhap so tien can rut: \n");
	fflush(stdin);
	scanf("%d",&c);
	st=sdu();
	if(c>=st+1)	
	{ 
	if(c%50000!=0)
	{
		printf("So tien rut lon hon so tien hien co\n \t Vui long thuc hien lai\n ");
	}
	
	}
	else
	{	
		printf("ban rut thanh cong so tien %d VND \n",c);		
	}
	return 0;
}
int chuyenkhoan()
{       
		int stk, tchuyen, st;
		st=sdu();
		printf("Moi ban nhap stk ngan hang can chuyen: \n");
		scanf("%d",&stk);
		printf("So tien can chuyen:\n");
		scanf("%d",&tchuyen);
		st=st-tchuyen;
		printf("So du con lai la:%d",st);
		if(tchuyen>st)
	{ 
	printf("So tien chuyen lon hon so tien hien co\n \t Vui long thuc hien lai\n");
	}
		else 
		{
		printf("\nBan chuyen thanh cong so tien %d VND cho stk %d \n",tchuyen,stk);
		}
	
}
int sodu()
{

	st=sdu();
	printf("So du trong tai khoan cua ban la: %d VND \n",st);
}

int main(int argc, char *argv[]) {
	int id, mk, tien, stk, gt;
	char lap;
	do
	{
	printf("\n Chao mung ban, moi ban nhap the : \n");
	scanf("%d", &id);
	printf("Moi ban nhap mat khau : \n");
	scanf("%d", &mk);
	if( login(id,mk)==1)
	{
		printf("\n\tBan da dang nhap thanh cong\n\n");
		do{		
		printf("\t1. rut tien \t");
		printf("\t2. chuyen khoan \n");
		printf("\t3. Xem so du \t");
		printf("\t4. thoat \t");
		printf("\n moi ban chon:");
		fflush(stdin);
			scanf("%d",&gt);
			switch(gt)
			{
				
			case 1:
				ruttien();
					break;
			case 2:
				chuyenkhoan();
					break;
			case 3:
				sodu();
				break;
			case 4:
				break;
		}
		printf("\n chon y de tiep tuc hoac chon n de thoat:\n");
		fflush(stdin); 
		scanf("%c", &lap);
	}
	while(lap=='y');
	}
	else 
	{
		printf("\nsai mk, moi ban nhap lai:\n");
	}
}
while(login(id,mk)==0);
	
	return 0;
}

