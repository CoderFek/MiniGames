#include<iostream>
#include<vector>
using namespace std;

int main(){
    char arr[5][5];
    arr[0][0] = '\0';
    int row, col;
    int counter = 0;

    cout<<"WELCOME!!\n";
    cout<<"This is a simple tictactoe game for killing time.";
    cout<<"\nRULES\n";
    cout<<"1. This game is played by two players.\n2. Wait for your chance.\n3. Enter the row and column you want to enter the value in.";
    cout<<"\n4. Do not enter values at occupied positions you'll loose a chance!";
    cout<<"\n--------------------------------------------------------\n";

    while(true){
        counter % 2 == 0 ? cout<<"\nPlayer 1's turn. Enter row and column (1-3)"<<endl : cout<<"\nPlayer 2's turn. Enter row and column (1-3)"<<endl;
        cin>>row;
        cin>>col;
        counter++;

        if(counter % 2 != 0){
            char input = 'X';
            if(arr[row][col] == 'O'){
                cout<<"Position already occipied!";
            }
            else{
                arr[row][col] = input;
            }
        }
        else{
            char input = 'O';
            if(arr[row][col] == 'X'){
                cout<<"Position already occipied!";
            }
            else{
                arr[row][col] = input;
            }
        }
        cout<<"\n";

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(j == 1){
                    cout<<" | "<<arr[i][j]<<" | ";
                }
                else if(j == 0){
                    cout<<arr[i][j];
                }
                else{
                    cout<<arr[i][j];
                }
            }
            if(i < 2){
                cout<<"\n--x---x--\n";
            }
        }
        cout<<"\n";
        if(arr[0][0] == arr[1][0] && arr[2][0] == arr[1][0] && arr[0][0] == 'O'
        || arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] == 'O'
        || arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1] && arr[1][1] == 'O'
        || arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2] && arr[2][2] == 'O'
        || arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2] && arr[0][0] == 'O'
        || arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][1] == 'O'
        || arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] && arr[2][2] == 'O'){
            cout<<"\nPlayer 2 wins!";
            break;
        }
        else if(arr[0][0] == arr[1][0] && arr[2][0] == arr[1][0] && arr[0][0] == 'X'
        || arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] == 'X'
        || arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1] && arr[1][1] == 'X'
        || arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2] && arr[2][2] == 'X'
        || arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2] && arr[0][0] == 'X'
        || arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][1] == 'X'
        || arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] && arr[2][2] == 'X'){
            cout<<"\nPlayer 1 wins!";
            break;
        }
    }
}