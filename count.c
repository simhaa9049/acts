nclude<stdio.h>
int main()
{
	int row,c,n,temp;
	printf("Enter the number of rows in pyramid of starts you wish to see");
	scanf("%d",&n);
	temp = n;
	for(row=1;row<=n;row++)
	{
		for(c=1;c<temp;c++)
			printf("");
		temp -1;
		for(c=1;c<=row-1;c++)
			printf("");
		return 0;
	}
}
