# 1.- ADDITION
def addition():
	while True:
		try:
			m = int(input('M = '))
			n = int(input('N = '))

			if n >= 0 and m >= 0:
				print(f'\n{m} - {n} = {m - n}\n')
		except KeyboardInterrupt:
			exit(0)

# 2.- "Perfect numbers"
def perfectNumbers():
	n = int(input('> '))
	