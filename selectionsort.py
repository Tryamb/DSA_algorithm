
#Program for selection sort:

def selectionSort(a):
 for i in range(len(a)):
 min_index=i
 for j in range(i+1,len(a)):
 if(a[min_index]>a[j]):
 min_index=j
 (a[i],a[min_index])=(a[min_index],a[i])
  
print("Enter the elements:")
lis=[int(x) for x in input('').split()]
selectionSort(lis)
print("Sorted elements are:")
for i in range(len(lis)):
 print(lis[i],end=" ")

