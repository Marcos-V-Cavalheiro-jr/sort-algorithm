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
	std::cout << values[0] << ' ' << values[values.size()-1] << std::endl;
}

void merge_sort(std::vector<int> values){
	std::cout << " 3" << std::endl;
}

void quick_sort_fixed(std::vector<int> values){
	std::cout << " 4" << std::endl;
}

void quick_sort_random(std::vector<int> values){
	std::cout << " 5" << std::endl;
}

void heap_sort(std::vector<int> values){
	std::cout << " 6" << std::endl;
}

void counting_sort(std::vector<int> values){
	std::cout << " 7" << std::endl;
}

void bucket_sort(std::vector<int> values){
	std::cout << " 8" << std::endl;
}
