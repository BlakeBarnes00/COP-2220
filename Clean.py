# Script to clean up the executables created when using
# the Code Runner plugin for VS Code.

import os
directory = os.getcwd()
directory_list = os.listdir(directory)
file_list = []
# Ignore the .git folder so it doesn't iterate over it.
for dir in directory_list:
	if ".git" in dir:
		directory_list.remove(".git")
	else:
		for root, dirs, files in os.walk(dir):
			for name in files:
				file_list.append(os.path.join(root, name))

# Look for the executables and remove them
for file in file_list:
	if ".exe" in file:
		print(file + " REMOVED")
		os.remove(file)