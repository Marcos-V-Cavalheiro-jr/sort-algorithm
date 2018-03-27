#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>

void bubble_sort(std::vector<int> values);
void insert_sort(std::vector<int> values);
void merge_sort(std::vector<int> values);
std::vector<int> merge_sort_(std::vector<int> auxiliar, std::vector<int> values, int inicio, int fim);
std::vector<int> merge(std::vector<int> auxiliar, std::vector<int> values, int inicio, int meio, int fim);
void quick_sort_fixed(std::vector<int> values);
void quick_sort_fixed_(int inicio, int fim);
int pivoteamento_fixed(int inicio, int fim);
void quick_sort_random(std::vector<int> values);
void quick_sort_random_(int inicio, int fim);
int pivoteamento_random(int inicio, int fim);
void heap_sort(std::vector<int> values);
void counting_sort(std::vector<int> values);
void bucket_sort(std::vector<int> values);

std::vector<int> copy(std::vector<int> v);
