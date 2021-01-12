#include <stdio.h>

int main (void)
{
	char a;
	int i, j, thesi1, thesi2, sum=0, flag;
	int AM57[30][6];
	for(i=0;i<30;i++)
		for(j=0;j<6;j++)
			AM57[i][j]=0;
	int NB3842[22][4];
	for(i=0;i<22;i++)
		for(j=0;j<4;j++)
			NB3842[i][j]=0;
	printf("Welcome to Air Sparta!\n\n\n");
	printf("*****MAIN MENU*****\n\n\n");
	printf("Press A to select the AM57 plane\n");
	printf("Press N to select the NB3842 plane\n");
	scanf(" %c",&a);
	if(a=='A'||a=='a'){
	do{
		printf("Press T to show the diagram.\n");
		printf("Press R to book a random seat\n");
		printf("Press S to book a specific seat\n");
		printf("Press M to book many seats\n");
		printf("Press C to cancel your booked seat\n");
		printf("Press E to show earnings\n");
		printf("Press Q to exit the program (CAPITAL Q ONLY)\n");         //<------CAPITAL LETTERS ONLY FOR THIS ONE//       
		scanf(" %c",&a);
		if(a=='T'||a=='t')
			for(i=0; i<30 ;i++)
			{
				for(j=0; j<6 ;j++)
					printf("%3d",AM57[i][j]);
				printf("\n");
			}
		if( a=='R'|| a=='r')
		{
			flag=0; //ESTO OTI DEN YPARXEI ELEYTHERH THESH
			i=0;
			while(i<30&&flag==0)
			{
				j=0;
				while(j<6&&flag==0)
				{
					if(AM57[i][j]==0)
					{ //AN  THN PROTH ELEYTHERH THESH TOTE THN DESMEVO KAI STAMATAO THN ANAZHTHSH
						AM57[i][j]=1;
						flag=1;
						sum=sum+30;
					}
					j++;
				}
				i++;
			}
			if(flag==0)
				printf("To aeroplano einai gemato. Den mporei na ginei h krathsh.\n");
		}
		if(a=='S'||a=='s')
		{
			printf("Dose thn zhtoumenh grammh:\n");
			scanf("%d",&thesi1);
			for(j=0;j<6;j++)
				if(AM57[thesi1][j]==0)
				{
					AM57[thesi1][j]=1;
					sum=sum+30;
					printf("H krathsh egine epityxos.\n");
					break;
				}
			if(i==6)
				printf("H grammh auth einai kathlleimenh. H krathsh den mporei na ginei.\n");
		}
		if(a=='M'||a=='m')		
		{
			flag=0; //ESTO OTI DEN YPARXEI ELEYTHERH SYNEXOMENH TRIADA THESEON
			i=0;
			while(i<30&&flag==0)
			{
				j=0;
				while(j<4&&flag==0)
				{
					if(AM57[i][j]==0&&AM57[i][j+1]==0&&AM57[i][j+2]==0)
					{ //AN VRO THN PROTH ELEYTHERH TRIADA STHN IDIA GRAMMH TOTE THN DESMEVO KAI STAMATAO THN ANAZHTHSH
						AM57[i][j]=1;
						AM57[i][j+1]=1;
						AM57[i][j+2]=1;
						sum=sum+90;
						flag=1;
					}
					j++;
				}
				i++;
			}
			if(flag==0)
				printf("Den vrethike h zhtoumenh synexomenh triada. Den mporei na ginei h krathsh.\n");		
		}
		if(a=='C'||a=='c')
		{
			printf("Dose thn zhtoumenh grammh mazi me thn zhtoumenh thesh:\n");
			scanf("%d%d",&thesi1,&thesi2);
			if(AM57[thesi1][thesi2]==1)
			{
				AM57[thesi1][thesi2]=0;
				sum=sum-8;
				printf("H akyrosh egine epityxos.\n");
			}
			else
				printf("H thesh auth einai hdh eleytherh. H akyrosh den mporei na ginei.\n");
		}
		if(a=='E'||a=='e')
			printf("Eisprakseis praktoreiou gia to aeroplano AM57: %d\n",sum);
	}while(a!='Q');
	}
	
	if(a=='N'||a=='n'){
	do{
		printf("Press T to show the diagram.\n");
		printf("Press R to book a random seat\n");                   
		printf("Press S to book a specific seat\n");                
		printf("Press M to book many seats\n");                    
		printf("Press C to cancel your booked seat\n");           
		printf("Press E to show earnings\n");                    
		printf("Press Q to exit the program (CAPITAL Q ONLY)\n");         //<------CAPITAL LETTERS ONLY FOR THIS ONE//       
		scanf(" %c",&a);
		if(a=='T'||a=='t')
			for(i=0; i<22 ;i++)
			{
				for(j=0; j<4 ;j++)
					printf("%3d",NB3842[i][j]);
				printf("\n");
			}
		if(a=='R'||a=='r')
		{
			flag=0; //ESTO OTI DEN YPARXEI ELEYTHERH THESH
			i=0;
			while(i<22&&flag==0)
			{
				j=0;
				while(j<4&&flag==0)
				{
					if(NB3842[i][j]==0)
					{ //AN VRO THN PROTH ELEYTHERH THESH TOTE THN DESMEVO KAI STAMATAO THN ANAZHTHSH
						NB3842[i][j]=1;
						flag=1;
						sum=sum+20;
					}
					j++;
				}
				i++;
			}
			if(flag==0)
				printf("To aeroplano einai gemato. Den mporei na ginei h krathsh.\n");
		}
		if(a=='S'||a=='s')
		{
			printf("Dose thn zhtoumenh grammh:\n");
			scanf("%d",&thesi1);
			for(j=0;j<4;j++)
				if(NB3842[thesi1][j]==0)
				{
					NB3842[thesi1][j]=1;
					sum=sum+20;
					printf("H krathsh egine epityxos.\n");
					break;
				}
			if(j==4)
				printf("H grammh auth einai kathlleimenh. H krathsh den mporei na ginei.\n");
		}
		if(a=='M'||a=='m')		
		{
			flag=0; //ESTO OTI DEN YPARXEI ELEYTHERH SYNEXOMENH TRIADA THESEON
			i=0;
			while(i<22&&flag==0)
			{
				j=0;
				while(j<2&&flag==0)
				{
					if(NB3842[i][j]==0&&NB3842[i][j+1]==0&&NB3842[i][j+2]==0)
					{ //AN VRO THN PROTH ELEYTHERH TRIADA STHN IDIA GRAMMH TOTE THN DESMEVO KAI STAMATAO THN ANAZHTHSH
						NB3842[i][j]=1;
						NB3842[i][j+1]=1;
						NB3842[i][j+2]=1;
						sum=sum+60;
						flag=1;
					}
					j++;
				}
				i++;
			}
			if(flag==0)
				printf("Den vrethike h zhtoumenh synexomenh triada. Den mporei na ginei h krathsh.\n");		
		}
		if(a=='C'||a=='c')
		{
			printf("Dose thn zhtoumenh grammh mazi me thn zhtoumenh thesh:\n");
			scanf("%d%d",&thesi1,&thesi2);
			if(NB3842[thesi1][thesi2]==1)
			{
				NB3842[thesi1][thesi2]==0;
				sum=sum-7;
				printf("H akyrosh egine epityxos.\n");
			}
			else
				printf("H thesh auth einai hdh eleytherh. H akyrosh den mporei na ginei.\n");
		}
		if(a=='E'||a=='e')
			printf("Eisprakseis praktoreiou gia to aeroplano NB3842: %d\n",sum);
	}while(a!='Q');            
	}
	return 0;
}
