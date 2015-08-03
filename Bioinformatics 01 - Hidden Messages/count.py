import re
s = "ACTGTACGATGATGTGTGTCAAAG"
matches = re.finditer(r'(?=(TGT))', s)
results = [(match.group(1)) for match in matches]
print(len(results))
