#include "sort.h"

void bubble_sort(std::vector<int> values){
	int i, j, aux;
	for (i = (int) values.size() - 1; i > 0; i--){
		for (j = 0; j < i; j++){
			if(values[j] > values[j+1]){
				aux = values[j];
				values[j] = values[j+1];
				values[j+1] = aux;
			}
		}
	}
	//std::cout << values[0] << ' ' << values[values.size()-1] << std::endl;
}
 
//ADD nos outros arquivos
void select_sort(std::vector<int> values){
	int i, j, x, aux;
	for (i = 0; i < (int) values.size(); i++){
		x = i;
		for (j = i+1; j < (int) values.size(); j++){
			if(values[j] < values[x]){
				x = j;
			}
		}
		aux = values[i];
		values[i] = values[x];
		values[x] = aux;
	}
	//std::cout << values[0] << ' ' << values[values.size()-1] << std::endl;
}

void insert_sort(std::vector<int> values){
	int i, j, x;
	for (i = 1; i < (int) values.size(); i++){
		x = values[i];
		j = i-1;
		while(j >= 0 && values[j] > x){
			values[j+1] = values[j];
			j--;
		}
		values[j+1] = x;
	}
	// std::cout << values[0] << ' ' << values[values.size()-1] << std::endl;
}

//Fazer um merge com var global lixo
void merge_sort(std::vector<int> values){
	int inicio = 0;
	int fim = values.size()-1;
	std::vector<int> auxiliar = copy(values);
	values = merge_sort_(auxiliar, values, inicio, fim);
}

std::vector<int> merge_sort_(std::vector<int> auxiliar, std::vector<int> values, int inicio, int fim){
	if(inicio >= fim){
		return values;
	}
	int meio = (inicio + fim)/2;

	for (int i = 0; i < (int) values.size(); i++){
		auxiliar[i] = values[i];
	}

	values = merge_sort_(auxiliar, values, inicio, meio);
	values = merge_sort_(auxiliar, values, meio +1, fim);
	values = merge(auxiliar, values, inicio, meio, fim);

	return values;
}

std::vector<int> merge(std::vector<int> auxiliar, std::vector<int> values, int inicio, int meio, int fim){
	int i, j, k;
	i = inicio;
	j = meio + 1;
	k = inicio;

	while(i <= meio && j <= fim){
		if(values[i] < values[j]){
			auxiliar[k] = values[i];
			i++;
		}else{
			auxiliar[k] = values[j];
			j++;
		}
		k++;
	}

	while(i <= meio){
		auxiliar[k] = values[i];
		i++;
		k++;
	}

	while(j <= fim){
		auxiliar[k] = values[j];
		j++;
		k++;
	}

	//Copiando o vetor ordenado em aux para o vetor principal (values)
	for (int a = inicio; a <= fim; a++){
		values[a] = auxiliar[a];
	}
	return values;
}

//Variavel global para auxiliar apenas no quick-sort_fixed, funciona desta linha para baixo
std::vector<int> values_global;

void quick_sort_fixed(std::vector<int> values){
	int inicio = 0;
	int fim = values.size() - 1;
	values_global = copy(values);
	quick_sort_fixed_(inicio, fim);

	std::cout << values_global[0] << ' ' << values_global[values_global.size()-1] << std::endl;

}

void quick_sort_fixed_(int inicio, int fim){
	int meio;
	if(inicio >= fim){
		return;
	}
	meio = pivoteamento_fixed(inicio, fim);
	quick_sort_fixed_(inicio, meio);
	quick_sort_fixed_(meio + 1, fim);
}

int pivoteamento_fixed(int inicio, int fim){  //lomuto
	int pivo = inicio;
	int i, aux; 
	for (i = inicio + 1; i <= fim; i++){
		if(values_global[i] < values_global[inicio]){
			pivo++;
			aux = values_global[pivo];
			values_global[pivo] = values_global[i];
			values_global[i] = aux;
		}
	}
	aux = values_global[inicio];
	values_global[inicio] = values_global[pivo];
	values_global[pivo] = aux;

	return pivo;
}






void quick_sort_random(std::vector<int> values){
	srand((unsigned)time(NULL));
	int inicio = 0;
	int fim = values.size() - 1;
	values_global = copy(values);
	quick_sort_fixed_(inicio, fim);

	// std::cout << values_global[0] << ' ' << values_global[values_global.size()-1] << std::endl;

}

void quick_sort_random_(int inicio, int fim){
	int meio;
	if(inicio >= fim){
		return;
	}
	meio = pivoteamento_random(inicio, fim);
	quick_sort_random_(inicio, meio);
	quick_sort_random_(meio + 1, fim);
}

int pivoteamento_random(int inicio, int fim){  //lomuto
	int pivo = rand() % (int) values_global.size();
	int i, aux; 
	for (i = inicio + 1; i <= fim; i++){
		if(values_global[i] < values_global[inicio]){
			pivo++;
			aux = values_global[pivo];
			values_global[pivo] = values_global[i];
			values_global[i] = aux;
		}
	}
	aux = values_global[inicio];
	values_global[inicio] = values_global[pivo];
	values_global[pivo] = aux;

	return pivo;
}

void heap_sort(std::vector<int> values){
	
	// std::cout << " 6" << std::endl;
}

void counting_sort(std::vector<int> values){
	// std::cout << " 7" << std::endl;
}

void bucket_sort(std::vector<int> values){
	// std::cout << " 8" << std::endl;
}

////////////////////////////

std::vector<int> copy(std::vector<int> v){
	std::vector<int> x; 
	for (int i = 0; i < (int) v.size(); i++){
		x.push_back(v[i]);
	}
	return x;
}
