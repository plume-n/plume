#python version:3.7

#task1 计算体脂率
gender = input("性别(男/女):")
while gender != '男' and gender != '女':
	print("性别输入错误，请输入男或女")
	gender = input("性别(男/女):")

waist = input("腰围(cm):")
weight = input("体重(kg):")

if gender == '男':
	tag = 44.74
else:
	tag = 34.89
parm_a = float(waist) * 0.74
parm_b = float(weight) * 0.082 + tag
weight_fat = parm_a - parm_b
rate = weight_fat / float(weight) *100
print("体脂率：%.2f%%\n"%rate)


#task2 九九乘法表
print("\n九九乘法表：")
count = range(1,10)
for row in count:
	for cow in count:
		if cow <= row:
			print("%d*%d=%d"%(cow,row,cow*row),end = " ")
	print("")


#task3 找出1000内的水仙花数
print("\n1000以内的水仙花数：")
num = range(3,1000)
digit = 3
narc_num = 0

for index in num:
	narc_num = 0
	for str_indx in str(index):
		narc_num += int(str_indx) ** digit
	if index == narc_num:
		print(index)

