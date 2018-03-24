#!/usr/bin/env python
# -*- coding: utf-8 -*-

#Arquivo principal

import sys
from subprocess import call

file_names = []

file_names += ['input_25000_cres']
file_names += ['input_25000_decr']
file_names += ['input_25000_rand']
file_names += ['input_25000_rand_el']

file_names += ['input_50000_cres']
file_names += ['input_50000_decr']
file_names += ['input_50000_rand']
file_names += ['input_50000_rand_el']

file_names += ['input_75000_cres']
file_names += ['input_75000_decr']
file_names += ['input_75000_rand']
file_names += ['input_75000_rand_el']

file_names += ['input_100000_cres']
file_names += ['input_100000_decr']
file_names += ['input_100000_rand']
file_names += ['input_100000_rand_el']

file_names += ['input_1000000_cres']
file_names += ['input_1000000_decr']
file_names += ['input_1000000_rand']
file_names += ['input_1000000_rand_el']

call('make', shell = True)

for file_name in file_names:
	# print('./cal ' + str(alg) + ' ' + file_name)
	call('./cal 8 input/' + file_name + ' > logs/log_' + file_name, shell = True)
