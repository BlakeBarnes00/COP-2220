s1 = "abc"
s2 = "uvwxyz"

s3 = ""
size = int()

if (len(s1) > len(s2)):
	size = len(s2)
else:
	size = len(s1)

for i in range(size):
	s3 += s1[i] + s2[i]

print(s3)