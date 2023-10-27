string = "Goa is a state on the southwestern coast of India within the Konkan region geographically separated from the Deccan highlands by the Western Ghats It is bound by the Indian states of Maharashtra to the north and Karnataka to the east and south with the Arabian Sea in the west It is India smallest state by area and fourth smallest by population Goa has the highest GDP per capita among all Indian states two and a half times as high as the GDP per capita of the country as a whole The Eleventh Finance Commission of India named Goa the best placed state because of its infrastructure and India National Commission on Population rated it as having the best quality of life in India based on the commissions 12 Indicators It is the second highest ranking among Indian states in the human development index"
string = string.upper()
k = ''
for i in string:
    if 'Z' >= i >= 'A' or i == ' ':
        k+=i
string = string.split(' ')
print(string)
s1 = {(str(string))}
goa = {}
for i in s1:
    count = 0
    for j in string:
        count+=1
    cloud = {i:count}
    goa.update(cloud)
print(goa)
