s1 = "ABCDEF"
s2 = "GHIJKL"
s3 = ""

for i in range(len(s1)):
	s3 += s1[i] + s2[i]

print(s3)