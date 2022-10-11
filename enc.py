import random
import string

def shift(char, k):
	old_i = text_space.index(char)
	new_i = (old_i + k) % len(text_space)
	new_char = text_space[new_i]
	return new_char

#get test1 plaintext
with open('test1', 'r') as file:
	content = file.read()
	plaintexts = content.split('\n')
plaintexts = [
				plaintexts[4], plaintexts[8],
			  	plaintexts[12], plaintexts[16],
			  	plaintexts[20]
			 ]


#Key & Text space
key_space = [i for i in range(27)]
text_space = [' '] + list(string.ascii_lowercase)


#Change these values for testing
KEY = [1, 3, 8, 10, 14, 16, 19, 21, 23] # t=9
PLAINTEXT = plaintexts[0]
PROB_RANDOM = 0.05


#Encrypting
i = 0
ciphertext = ''
while i < len(PLAINTEXT):
	coin = random.random()
	if coin < PROB_RANDOM:
		ciphertext += random.choice(text_space)
	else:
		k = random.choice(KEY)
		ciphertext += shift(PLAINTEXT[i], k)
		i += 1

print(f"PLAINTEXT:\n{PLAINTEXT}\n")

print(f"CIPHERTEXT:\n{ciphertext}\n")
