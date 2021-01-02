#task 1 排序
a = [1,2,3,4,5,6,7,8,9]
a.reverse()
print('task1 逆序操作:')
print(a)

#学生管理系统
print('\ntask2 学生管理系统：')

person_list = []
num = 1

str_in = input('学生管理系统：\
	\n 1.新增学生\
	\n 2.查找所有学生\
	\n 3.根据学号查找学生\
	\n 4.根据学号删除学生\
	\n 5.退出\
	\n 请输入序号操作：')
while str_in != '5':
	if str_in == '1':
		person = {'number':'','name':'','age':'','class':''}
		person['name'] = input('姓名：')
		person['age'] = input('年龄：')
		person['class'] = input('班级：')
		person['number'] = num
		num += 1
		person_list.append(person)
	elif str_in == '2':
		for index in person_list:
			print(index)
	elif str_in == '3':
		sear_num = input('请输入学号：')
		for index in person_list:
			result = index.get('number')
			if int(result) == int(sear_num):
				print(index)
	elif str_in == '4':
		del_num = input('请输入要删除的学号：')
		for x in person_list:
			y = x.get('number')
			if int(y) == int(del_num):
				person_list.remove(x)
				print('已删除学员：',x)
	str_in = input('请选择操作：')


