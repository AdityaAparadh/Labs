print("Input number of days")
d = input()
days = int(d)
years = int(int(days)/365)
days %= 365
weeks = int(int(days)/7)
days %= 7

print(years,"years",weeks,"weeks",days,"days")
