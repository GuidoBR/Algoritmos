"""
    Pode ser resolvido usando o DNA Stats
    http://www.bioinformatics.org/sms2/dna_stats.html
    Igual ao "Counting DNA Nucleotides"
    Versão em BioPython
"""

from Bio.Seq import Seq
dna = Seq(input())
print(dna.count("A") + ' ' + dna.count("C") + ' ' + dna.count("G") + ' ' + dna.count("T"))
