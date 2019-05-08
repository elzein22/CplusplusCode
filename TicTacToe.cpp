#include <stdio.h>




void displayBoard(char data[]);
void selectLocation(int *player , int *choice);
int setTurn(int choice , int player , char data[]);
int checkForWin(char data[], int player);
int main()
{

	int player = 1;
	int choice , i;
	
	
	char data[10] = {'0' , '1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9'};
	
	int x=9;
	do{


	
	displayBoard(data);
	selectLocation(&player , &choice);
	setTurn(choice, player , data);
	i = checkForWin(data , player);
	
	--x;
	++player;
 		}while (i != 1 && x != 0);
 
 	displayBoard(data);
 
 	if (i == 1)
         printf("\nPlayer %d win ", --player);
    else
        printf("\nGame draw");


	
}

void displayBoard(char data[])
{
	
	
	    printf("\n\n");
        printf("\t\t\t  %c | %c  | %c  \n" , data[1] , data[2] , data[3]);
        printf("\t\t\t----+----+----\n");
        printf("\t\t\t  %c | %c  | %c  \n" , data[4] , data[5] , data[6]);
        printf("\t\t\t----+----+---\n");
        printf("\t\t\t  %c | %c  | %c \n" , data[7] , data[8] , data[9]);

}

void selectLocation(int *player , int *choice)
{	
	*player = (*player % 2) ? 1 : 2;
	
	printf("Player %d, enter a number:  ", *player);
    scanf("%d", choice);
    *player++;

}

int setTurn(int choice , int player , char data[])
{
	int i;
	char mark;
	
	
	
	mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && data[1] == '1')
            data[1] = mark;
            
        else if (choice == 2 && data[2] == '2')
            data[2] = mark;
            
        else if (choice == 3 && data[3] == '3')
            data[3] = mark;
            
        else if (choice == 4 && data[4] == '4')
            data[4] = mark;
            
        else if (choice == 5 && data[5] == '5')
            data[5] = mark;
            
        else if (choice == 6 && data[6] == '6')
            data[6] = mark;
            
        else if (choice == 7 && data[7] == '7')
            data[7] = mark;
            
        else if (choice == 8 && data[8] == '8')
            data[8] = mark;
            
        else if (choice == 9 && data[9] == '9')
            data[9] = mark;
        
		    
	    
	    
		   
		 i = checkForWin(data , player); 

	
    return i;
    	
}

int checkForWin(char data[], int player)
{
	
	
    if (data[1] == data[2] && data[2] == data[3])
        return 1;
        
    else if (data[4] == data[5] && data[5] == data[6])
        return 1;
        
    else if (data[7] == data[8] && data[8] == data[9])
        return 1;
        
    else if (data[1] == data[4] && data[4] == data[7])
        return 1;
        
    else if (data[2] == data[5] && data[5] == data[8])
        return 1;
        
    else if (data[3] == data[6] && data[6] == data[9])
        return 1;
        
    else if (data[1] == data[5] && data[5] == data[9])
        return 1;
        
    else if (data[3] == data[5] && data[5] == data[7])
        return 1;
        
    else
	   return 0; 
	
}
