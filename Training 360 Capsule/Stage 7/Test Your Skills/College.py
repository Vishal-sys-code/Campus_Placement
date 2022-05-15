class college:
    name=' '
    city=' '
    year=0
    per=0.0
n=int(input("Enter Number of colleges: "))
s=list(college( ))
for i in range(n):
      print("Enter details of college " , (i+1))
      s[i].name = input("Enter name: ")
      s[i].city = input("Enter City: ")
      s[i].year = input("Enter year: ")
      s[i].per = input("Enter percentage: ")  
s= sorted(s, key=lambda x: x.name)
print("Details of college\n")
for i in range(n):
      print("College ", (i+1), ":\n Name : ", s[i].name, "\n City: ", s[i].city,             "\n Year : ", s[i].year, "\n Percentage:" , s[i].per, "\n")