#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <sys/time.h>
#include "sort.h"

int count_lines(std::string file_name); 
std::vector<int> get_array_values(int number_lines, std::string file_name);
void print_vector(std::vector<int> numbers);


using namespace std; //Importa as funções de standart (input/output) sem precisar chamar a classe

int main(int argc, char const *argv[]){
	struct timeval start, finish;
    double real_time;
	
	if(argc < 3){ 
		cout << "obg carlos, desculpa. Numero insuficiente de parametros!" << endl;
		exit(1);
	}

	int alg = atoi(argv[1]);
	string file_name = argv[2];
	int number_lines = count_lines(file_name);
	std::vector<int> values = get_array_values(number_lines, file_name);
	// gettimeofday(&start, NULL);

	switch(alg){
		case 0:
			gettimeofday(&start, NULL);
			bubble_sort(values);
			gettimeofday(&finish, NULL);
			cout << 1 * (finish.tv_sec - start.tv_sec) + (finish.tv_usec - start.tv_usec) / 1000000.0 << endl;
			break;
		case 1:
			gettimeofday(&start, NULL);
			insert_sort(values);
			gettimeofday(&finish, NULL);
			cout << 1 * (finish.tv_sec - start.tv_sec) + (finish.tv_usec - start.tv_usec) / 1000000.0 << endl;
			break;
		case 2:
			gettimeofday(&start, NULL);
			merge_sort(values);
			gettimeofday(&finish, NULL);
			cout << 1 * (finish.tv_sec - start.tv_sec) + (finish.tv_usec - start.tv_usec) / 1000000.0 << endl;
			break;
		case 3:
			gettimeofday(&start, NULL);
			quick_sort_fixed(values);
			gettimeofday(&finish, NULL);
			cout << 1 * (finish.tv_sec - start.tv_sec) + (finish.tv_usec - start.tv_usec) / 1000000.0 << endl;
			break;
		case 4:
			gettimeofday(&start, NULL);
			quick_sort_random(values);
			gettimeofday(&finish, NULL);
			cout << 1 * (finish.tv_sec - start.tv_sec) + (finish.tv_usec - start.tv_usec) / 1000000.0 << endl;
			break;
		case 5:
			gettimeofday(&start, NULL);
			heap_sort(values);
			gettimeofday(&finish, NULL);
			cout << 1 * (finish.tv_sec - start.tv_sec) + (finish.tv_usec - start.tv_usec) / 1000000.0 << endl;
			break;
		case 6:
			gettimeofday(&start, NULL);
			counting_sort(values);
			gettimeofday(&finish, NULL);
			cout << 1 * (finish.tv_sec - start.tv_sec) + (finish.tv_usec - start.tv_usec) / 1000000.0 << endl;
			break;
		case 7:
			gettimeofday(&start, NULL);
			bucket_sort(values);
			gettimeofday(&finish, NULL);
			cout << 1 * (finish.tv_sec - start.tv_sec) + (finish.tv_usec - start.tv_usec) / 1000000.0 << endl;
			break;
		case 8:
			std::vector<int> times;

			gettimeofday(&start, NULL);
			bubble_sort(values);
			gettimeofday(&finish, NULL);
			times.push_back(1 * (finish.tv_sec - start.tv_sec) + (finish.tv_usec - start.tv_usec) / 1000000.0);

			gettimeofday(&start, NULL);
			insert_sort(values);
			gettimeofday(&finish, NULL);
			times.push_back(1 * (finish.tv_sec - start.tv_sec) + (finish.tv_usec - start.tv_usec) / 1000000.0);

			gettimeofday(&start, NULL);
			merge_sort(values);
			gettimeofday(&finish, NULL);
			times.push_back(1 * (finish.tv_sec - start.tv_sec) + (finish.tv_usec - start.tv_usec) / 1000000.0);

			gettimeofday(&start, NULL);
			quick_sort_fixed(values);
			gettimeofday(&finish, NULL);
			times.push_back(1 * (finish.tv_sec - start.tv_sec) + (finish.tv_usec - start.tv_usec) / 1000000.0);

			gettimeofday(&start, NULL);
			quick_sort_random(values);
			gettimeofday(&finish, NULL);
			times.push_back(1 * (finish.tv_sec - start.tv_sec) + (finish.tv_usec - start.tv_usec) / 1000000.0);

			gettimeofday(&start, NULL);
			heap_sort(values);
			gettimeofday(&finish, NULL);
			times.push_back(1 * (finish.tv_sec - start.tv_sec) + (finish.tv_usec - start.tv_usec) / 1000000.0);

			gettimeofday(&start, NULL);
			counting_sort(values);
			gettimeofday(&finish, NULL);
			times.push_back(1 * (finish.tv_sec - start.tv_sec) + (finish.tv_usec - start.tv_usec) / 1000000.0);

			gettimeofday(&start, NULL);
			bucket_sort(values);
			gettimeofday(&finish, NULL);
			times.push_back(1 * (finish.tv_sec - start.tv_sec) + (finish.tv_usec - start.tv_usec) / 1000000.0);
			print_vector(times);
			break;
	}

	return 0;
}

int count_lines(std::string file_name){
	int count = 0;
	char buffer;
	FILE* in = fopen(file_name.c_str(), "r");

	while((buffer = fgetc(in)) != EOF){
		if(buffer == '\n'){
			count++;
		}
	}

	fclose(in);
	return count;
}

std::vector<int> get_array_values(int number_lines, std::string file_name){
	std::vector<int> values;
	int buffer;
	FILE* in = fopen(file_name.c_str(), "r");

	for (int i = 0; i < number_lines; i++){
		fscanf(in, "%i", &buffer);
		values.push_back(buffer);
	}

	fclose(in);
	return values;

} 

void print_vector(std::vector<int> numbers){
	for (int i = 0; i < (int) numbers.size(); i++){
		cout << numbers[i] << endl;
	}
}
