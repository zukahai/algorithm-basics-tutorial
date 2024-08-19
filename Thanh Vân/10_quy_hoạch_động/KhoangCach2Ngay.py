def isNamNhuan(nam):
    if (nam % 4 == 0 and nam % 100 != 0) or (nam % 400 == 0):
        return True
    return False

def soNgayTrongThang(thang, nam):
    if thang in [1, 3, 5, 7, 8, 10, 12]: # tháng có 31 ngày
        return 31
    elif thang in [4, 6, 9, 11]: # tháng có 30 ngày
        return 30
    elif isNamNhuan(nam): # tháng 2 năm nhuận có 29 ngày
        return 29
    return 28 # tháng 2 năm không nhuận có 28 ngày
    

nd = 19
td = 12
yd = 1988

nc = 19
tc = 8
yc = 2024

c = 0

while nd != nc or td != tc or yd != yc: # nếu 2 ngày bằng nhau thì dừng
    nd += 1
    if nd > soNgayTrongThang(td, yd):
        nd = 1
        td += 1
        if td > 12:
            td = 1
            yd += 1
    c += 1

print(c)