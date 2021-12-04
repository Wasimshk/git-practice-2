import random
randl=random.sample(range(1,50),10)


for i in range(len(randl)):
    for j in range(i+1, len(randl)):
        if randl[i]+randl[j]==70:
            print(randl[i], randl[j])