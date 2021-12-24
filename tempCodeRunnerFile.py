list1=[12,23,351,65,45,3,56]
def min_max(x):
    min = list1[0]
    max = list1[0]
    for i in list1:
        if i >max:
            max = i 
        elif i<min:
            min = i
    return min, max
print(min_max(list1))