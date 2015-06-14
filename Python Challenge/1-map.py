from string import ascii_lowercase

intab = ascii_lowercase
outtab = "cdefghijklmnopqrstuvwxyzab"
trantab = ''.maketrans(intab, outtab)

string = "g fmnc wms bgblr rpylqjyrc gr zw fylb. rfyrq ufyr amknsrcpq ypc dmp. bmgle gr gl zw fylb gq glcddgagclr ylb rfyr'q ufw rfgq rcvr gq qm jmle. sqgle qrpgle.kyicrpylq() gq pcamkkclbcb. lmu ynnjw ml rfc spj."
print(string.translate(trantab))
print('map'.translate(trantab))

