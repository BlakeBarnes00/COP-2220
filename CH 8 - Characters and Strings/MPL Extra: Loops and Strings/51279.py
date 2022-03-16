s1 = "Elis"

has_dups = False
dups = {}

for i in s1:
	if i in dups:
		dups[i] += 1

	else:
		dups[i] = 1

for k, v in dups.items():
	if v > 1:
		has_dups = True

print(has_dups)
		