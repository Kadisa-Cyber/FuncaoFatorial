/******************************************************************************

⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⢀⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⢠⡄⠀⠀⠀⠀⣇⠀⠀⠀⠀⠀⡸⢐⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⢿⡙⠶⢄⣀⠀⢫⠒⢤⣀⠀⠀⢸⠰⠀⠀⣀⡤⣤⠤⠀⠀⠀
⠀⠀⠀⠀⠉⢒⠦⠄⠈⠉⠁⠠⠀⠉⠉⠙⠃⠚⠉⣠⠎⠀⠀⠀⠀⠀
⢀⣄⣠⡐⣈⡀⡄⠀⠀⢠⠀⢀⣴⣠⠀⠀⠀⠀⠀⠻⣀⠀⠀⠀⠀⠀
⠀⠀⢨⠟⢁⢔⡁⢀⠔⠀⠐⣡⣯⠃⢠⠀⡆⢤⠀⡀⢰⡯⡒⠠⠤⠀
⢀⣴⡵⣾⢗⣥⣶⣿⣷⣮⡼⢣⠃⢠⣧⣤⣯⣘⠀⢣⠀⣣⡏⠉⠚⠉
⠟⠁⣸⣣⡃⢿⣿⣿⣿⣿⠷⠾⢶⣿⣿⣿⣿⣿⡆⣿⡀⢿⣸⡀⠀⠀
⠀⢰⠋⠀⠀⠀⠉⠙⠉⠁⢀⣀⡀⠙⠛⠛⠛⠛⠑⡿⣯⣽⠋⣳⡆⠀
⠀⠈⠳⢦⣄⡀⠀⠀⠘⣄⣀⣀⠼⠃⠀⠀⢀⠀⠠⠴⠿⠛⠋⠁⠀⠀
⠀⠀⠀⠀⠀⠉⠉⠓⠒⠒⠤⠤⠤⠤⠔⠚⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀

*******************************************************************************/
#include <iostream>

void fatorial(int num){
    
    int fat;
    
    std::cout << num << "! = ";
    for(int i=num; i>0;i--){
        fat*=i;
    }
    
    std::cout << fat << std::endl;
    
}

int main()
{
    
    int num;
    
    std::cout << "Digite um numero" << std::endl;
    std::cin >> num;
    
    fatorial(num);



	return 0;
}