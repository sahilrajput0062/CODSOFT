#include<iostream>
using namespace std;
void board(char arr [][3]);
void turn(char &t, int &r, int &c, char arr[][3], bool &draw);
bool status(int &r, int &c, char arr[][3], bool &draw);
int main()
{   XYZ:
    char arr[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    int r,c,x;
    bool over=true,draw = false;
    char t = 'X';
    char choice;
    cout<<"<-------- TIC TAC TOE ----------> \n";
    cout<<"Player 1: X \t Player 2: O \n\n";
    board(arr);
    while(over)
    {
    over=status(r,c,arr,draw);
    turn(t, r, c, arr,draw);
    }
    if(t == 'X' && draw == false){
        cout<<"nnCongratulations!Player 2: 'O' has won the game";
    }
    else if(t == 'O' && draw == false){
        cout<<"Congratulations! Player 1: 'X' has won the game\n";
    }
    else{
        cout<<" GAME DRAW \n";
    }
    cout<<"Do you want to play another game(Y or N):";
    cin>>choice;
    if(choice == 'Y')
    {
        goto XYZ ;
    }
    return 0;
}

void board(char arr [][3])
{
    cout<<"    |    |    \n";
    cout<<"  "<<arr[0][0]<<" | "<<arr[0][1]<<"  | "<<arr[0][2]<<"\n"; 
    cout<<"____|____|____\n";
    cout<<"    |    |    \n";
    cout<<"  "<<arr[1][0]<<" | "<<arr[1][1]<<"  | "<<arr[1][2]<<"\n"; 
    cout<<"____|____|____\n";
    cout<<"    |    |    \n";
    cout<<"  "<<arr[2][0]<<" | "<<arr[2][1]<<"  | "<<arr[2][2]<<"\n"; 
    cout<<"    |    |    \n\n";
}


void turn(char &t, int &r, int &c, char arr[][3], bool &draw)
{  int x;
   bool a = false;
   a=status(r,c,arr,draw);   
   if(a == true){
   if(t == 'X')
   {
   cout<<"Player 1:"<<t<<" Turn \n";
   cout<<"Choose number:";
   }
   else
   {
    cout<<"Player 2:"<<t<<" Turn \n";
    cout<<"Choose number:";
   }

   cin>>x;
    switch(x)
    {
        case 1: 
        r = 0; c = 0;
        break;
        case 2:
        r=0; c=1;
        break;
        case 3:
        r=0; c=2;
        break;
        case 4:
        r=1;c=0;
        break;
        case 5:
        r=1;c=1;
        break;
        case 6:
        r=1;c=2;
        break;
        case 7:
        r=2;c=0;
        break;
        case 8:
        r=2;c=1;
        break;
        case 9:
        r=2;c=2;
        break;
        default:
        cout<<"Wrong Move \n";   
    }
    if(arr[r][c] != 'X' && arr[r][c] != 'O' && t == 'X' )
    {
      arr[r][c] = 'X';
      t = 'O';
    }
    else if(arr[r][c] != 'X' && arr[r][c] != 'O' && t == 'O')
    {
      arr[r][c] = 'O';
      t = 'X';
    }
    else
    { 
        cout<<"Already Marked\n";
        cout<<"Mark Again:\n";
        turn(t, r, c, arr,draw);  
    }
    board(arr);
   }
}

bool status(int &r, int &c, char arr[][3], bool &draw)
{ int i,j;
  for(i=0;i<3;i++)
  {
  if(arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] || arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i]  || arr[0][0] == arr[1][1] && arr[1][1]== arr[2][2] || arr[0][2] == arr[1][1] && arr[2][0] == arr[1][1])
  {
    return false;
  }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        if(arr[i][j] != 'X' && arr[i][j] != 'O')
        {  
            return true;
        }
    }
  }
  draw = true;
  return false;
}