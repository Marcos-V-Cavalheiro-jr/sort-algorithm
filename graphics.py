import matplotlib.pyplot as plt 

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

algorithms = []
algorithms += ['Bubble']
algorithms += ['Insert']
algorithms += ['Merge']
algorithms += ['Quick Fixed']
algorithms += ['Quick Random']
algorithms += ['Heap']
algorithms += ['Counting']
algorithms += ['Bucket']

times = []

for file_name in file_names:
	a = open('logs/log_' + file_name)
	times_aux = []
	for i in a:
		times_aux += [int(i)]
	times += [times_aux]

for time in times:
	graphic_gen(time, 'LINDEZA')

def graphic_gen(vetor, title):
	plt.plot(algorithms, vetor, color='hotpink')
	plt.plot(algorithms, vetor, 'go', color='lightpink')
	plt.title(title)
	plt.xlabel('Algorithm')
	plt.ylabel('time (s)')
	plt.show()

