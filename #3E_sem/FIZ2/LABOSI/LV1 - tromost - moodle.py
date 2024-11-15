n = 5

r = [1.25, 2.16, 3.47, 4.2, 5.02] 
I = [20.16, 22.64 , 24.496, 25.344, 27.232]
     
r2 = [i**2 for i in r] #kvadriranje udaljenosti

g = n*sum([a*b for a,b in zip(I, r2)]) - sum(r2)*sum(I)
d = n*sum([i**2 for i in r2]) - sum(r2)**2
print(g/d)
