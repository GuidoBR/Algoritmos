from collections import defaultdict
n = 398
input = '0 71 97 99 128 129 131 147 147 147 156 163 163 163 228 234 234 244 255 260 276 278 284 291 294 294 310 331 375 381 383 384 391 397 407 422 425 439 441 447 478 494 510 512 522 531 538 544 546 554 569 578 588 609 625 641 641 659 673 675 677 685 685 694 716 756 765 770 772 788 788 806 813 822 822 824 848 869 872 893 917 919 919 928 935 953 953 969 971 976 985 1016 1025 1047 1056 1056 1064 1066 1068 1082 1100 1100 1116 1132 1153 1163 1172 1187 1195 1197 1203 1210 1219 1229 1231 1247 1263 1294 1300 1302 1316 1319 1334 1344 1350 1357 1358 1360 1366 1410 1431 1447 1447 1450 1457 1463 1465 1481 1486 1497 1507 1507 1513 1578 1578 1578 1585 1594 1594 1594 1610 1612 1613 1642 1644 1670 1741'
with open('integer_mass_table.txt') as f:
    masses = sorted(list(set([int(line.strip().split()[1]) for line in f])))

spectrum = [int(i) for i in input.strip().split()]
#print spectrum
#print masses


def cyclopeptide(peptide):
    def subpeptide(peptide, pos, length):
        if pos+length <= len(peptide):
            return peptide[pos: pos+length]
        else:
            return peptide[pos:] + peptide[:length + pos - len(peptide)]
    return [subpeptide(peptide, p, l) for p in range(len(peptide))
            for l in range(1, len(peptide) + 1)]


def cyclospectrum(peptide):
    return sorted([sum(p) for p in cyclopeptide(peptide)] + [0])


def expand_list(peptides, masses):
    if len(peptides) == 0:
        return [[m] for m in masses]
    return [p + [m] for p in peptides for m in masses]


def score(peptide, spectrum_map):
    peptide_map = defaultdict(int)
    for p in peptide:
        peptide_map[p] += 1
    return sum([min(peptide_map[k], spectrum_map[k])
               for k in peptide_map.keys()])


def cut(peptides, spectrum_map, n):
    scores = sorted([(p, score(cyclospectrum(p), spectrum_map))
                    for p in peptides],
                    key=lambda tup: tup[1], reverse=True)
    leaders = [s for s in scores if n >= len(scores) or s[1] >= scores[n][1]]
    return [leader[0] for leader in leaders]


spectrum_map = defaultdict(int)
for i in spectrum:
    spectrum_map[i] += 1

leaders = []
best = (0, 0)
for i in range(50):
    expanded = expand_list(leaders, masses)
    leaders = cut([p for p in expanded], spectrum_map, n)
    top_score = score(cyclospectrum(leaders[0]), spectrum_map)
    if top_score > best[1]:
        best = (leaders[0], top_score)
    print('-'.join(str(i) for i in best[0]))
    leaders = [p for p in leaders if sum(p) <= max(spectrum)]
    if len(leaders) == 0:
        break
