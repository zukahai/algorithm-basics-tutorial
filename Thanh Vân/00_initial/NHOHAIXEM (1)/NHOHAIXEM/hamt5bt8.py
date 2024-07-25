x=int(input("hay nhap so nguyen x: "))
kt=0
for i in range(1,x+1):
    for j in range(i+1,x):
        for k in range(j+1,x-1):
            if i+j+k==x and pow(k,2)==pow(i,2)+pow(j,2):
                print(1)
                kt=1
if kt==0:            
    print(0)

 
