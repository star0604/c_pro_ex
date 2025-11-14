#include <stdio.h>
int main()
{
	int grid[3][3];
	int x,y,z;
	int can = 1;
	
	for (x = 0; x < 3; x++){
    printf("请输入数字: ");
    scanf("%d %d %d", &grid[x][0], &grid[x][1], &grid[x][2]);
}
    for (x = 0; x < 3; x++) 
	{
        for(y = 0; y < 3; y++) 
		{
            for(z = 0; z < 3; z++) 
			{
               if(grid[x][y] == grid[x][z]) 
			   {
                  can = 0;
            }
        }
    }
}

    for (y = 0; y < 3; y++) {
        for(x = 0; x < 3; x++) 
		{
            for(z = 0; z < 3; z++) 
			{
                 if(grid[x][y] == grid[z][y]) 
				 {
                    can = 0;
            }
        }
    }
}

    if (can) 
	{
    printf("正确! 可以走出。\n");
}      else 
{
        printf("错误! 无法走出。\n");
}

	
	
	return 0;
}
