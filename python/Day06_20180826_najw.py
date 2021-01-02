
person_list = []
g_seq = 0 

def show_list():
	print('*'*24)
	print('1.新增学生信息')
	print('2.查询所有学生信息')
	print('3.按学号查询学生信息')
	print('4.按学号删除学生信息')
	print('5.退出学生管理系统')
	print('*'*24)

def student_load():
	global g_seq
	with open('stu_db.txt','r+') as fp:
		for line in fp:
			test_dict = eval(line)
			person_list.append(test_dict)
			g_seq = int(test_dict['number'])

def student_update():
	with open('stu_db.txt','w+') as fp:
		for index in person_list:
			fp.write(str(index))
			fp.write('\n')

def show_student_info(info):
	print("学号:%s 姓名:%s 年龄:%s 班级:%s"%(info['number'],info['name'],info['age'],info['grade']))

def student_add():
	global g_seq
	person = {'number':'','name':'','age':'','grade':''}
	person['name'] = input('姓名：')
	person['age'] = input('年龄：')
	person['grade'] = input('班级：')
	g_seq += 1
	person['number'] = g_seq
	person_list.append(person)
	with open('stu_db.txt','a+') as fp:
		fp.write(str(person))
		fp.write('\n')

def student_del():
	del_num = input('请输入学号：')
	for x in person_list:
		y = x.get('number')
		if int(y) == int(del_num):
			print('删除学员：')
			show_student_info(x)
			person_list.remove(x)
			student_update()
			return
	print('未查询到该学生信息')

def student_query():
	sear_name = input('请输入学号：')
	for index in person_list:
		result = index.get('number')
		if int(result) == int(sear_name):
			print('学生信息：')
			show_student_info(index)
			return
	print('未查询到该学生信息')

def student_show():
	for x in person_list:
		show_student_info(x)

#主程序
print()
student_load()
print('欢迎使用学生管理系统：')
while True:
	show_list()
	inStr = input('请输入序号操作：')
	if inStr == '1':
		student_add()
	elif inStr == '2':
		print('学生信息：')
		student_show()
		print()
	elif inStr == '3':
		student_query()
		print()
	elif inStr == '4':
		student_del()
	elif inStr == '5':
		break
print()


