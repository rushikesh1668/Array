

#include<stdio.h>

void main()
{
	int m1[3][3],m2[3][3],m3[3][3];

	int r, c;
	

	   
	printf("\n Enter 3*3 Matrix m1 Array :");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			scanf("%d",&m1[r][c]);  
		}
	}
	
	
	printf("\n 3*3 Matrix m1 values are :");
	for(r=0;r<3;r++)
	{
		printf("\n");
		for(c=0;c<3;c++)
		{
			printf(" %d",m1[r][c]);
		}
	}
	printf("\n Enter 3*3 Matrix m2 Array :");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			scanf("%d",&m2[r][c]);  
		}
	}
	
	printf("\n 3*3 Matrix m2 values are :");
	for(r=0;r<3;r++)
	{
		printf("\n");
		for(c=0;c<3;c++)
		{
			printf(" %d",m2[r][c]);
		}
	}
	printf("\nAdding the two matrix.....");
    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
            m3[r][c]=m1[r][c]+m2[r][c];
    }
    printf("\nBoth matrix added successfully!");
    printf("\nHere is the new matrix:\n");
    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
            printf("%d ",m3[r][c]);
        printf("\n");
    }
    
}

