#include <iostream>
using namespace std;

int main(){
    int op;
    cout << "Bem vindo ao ROS (reboot or shutdown)" << endl;
    cout << "O que gostaria de fazer?\n1-Desligar\n2-Reiniciar" << endl;
    cin >> op;
    
    switch(op){
    	case 1:
    		//chama o arquivo que desliga a maquina
    		system("shutdown.bat");
    		break;
    	case 2:
    		//chama o arquivo que reinicia a maquina
    		system("reboot.bat");
    		break;
    	default:
    		system("cls");
    		main();
    		exit(1);
	}
}
