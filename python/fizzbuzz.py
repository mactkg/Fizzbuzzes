for i in range(1, 100):
	if i%3 == 0:
		if i%5 == 0:
			print 'fizzbuzz'
			continue
		print 'fizz'
		continue
	if i%5 == 0:
		print'buzz'
		continue
	print i
