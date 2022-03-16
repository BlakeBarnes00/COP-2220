s1 = "hello"
s2 = "world"
s3 = ""

for i in range(len(s1)):
	s3 += s1[-i-1] + s2[-i-1]

if(s3 == "odlllreohw"):
	print(True)