#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>


using namespace std; //Importa as funções de standart (input/output) sem precisar chamar a classe

int main(int argc, char const *argv[]){
	
	if(argc < 3){ 
		cout << "obg carlos, desculpa. Numero insuficiente de parametros!" << "oi" << "turubom?" << endl;
		exit(1);
	}

	int alg = atoi(argv[1]);
	string file_name = argv[2];

	cout << file_name << " " << alg << endl;

	switch(alg){
		case 0:
			cout << "Bubble Sort" << " / " << file_name << endl;
			break;
		case 1:
			cout << "Insert Sort" << " / " << file_name << endl;
			break;
		case 2:
			cout << "Merge Sort" << " / " << file_name << endl;
			break;
		case 3:
			cout << "Quick Sort Fixed" << " / " << file_name << endl;
			break;
		case 4:
			cout << "Quick Sort Random" << " / " << file_name << endl;
			break;
		case 5:
			cout << "Heap Sort" << " / " << file_name << endl;
			break;
		case 6:
			cout << "Counting Sort" << " / " << file_name << endl;
			break;
		case 7:
			cout << "Bucket Sort" << " / " << file_name << endl;
			break;


	}


	return 0;
}