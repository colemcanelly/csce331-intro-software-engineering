#include <iostream>

void LightState(const int row, const int col, const int n){
    char LightSwitches[row][col];
    for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            LightSwitches[i][j] = '_';
        }
    }
    

    // first for loop iterates through every person
    for(int i=1; i<=n; i++){
        int count = 0;
        // Iterate through the whole area for the i person
        for(int j = 0; j < row; j++){
            for(int k =0; k< col; k++){
                if(count % i == 0){
                    if(LightSwitches[j][k] == '_'){
                        LightSwitches[j][k] = '#';
                    }
                    else{
                        LightSwitches[j][k] = '_';
                    }        
                }
                count++;
            }
        }
        
        // Print out each state
        std::cout << i << " Person Flips Light Switch" << std::endl;
        for(int j = 0; j < row; j++){
            for(int k =0; k< col; k++){
                std::cout << LightSwitches[j][k];
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;

    }
}
int main(){
    int col = 0;
    int row = 0;
    std::cout << "Enter the number of Rows of light switches: ";
    std::cin >> row;
    std::cout << "Enter the number of Columns of light switches: ";
    std::cin >> col;
    LightState(row,col,row*col);
}