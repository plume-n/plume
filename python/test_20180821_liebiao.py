# # # # # # alist = ['apple','orange','banana']
# # # # # # a = alist[0]
# # # # # # b = alist[1]

# # # # # # print(a,b)
# # # # # # print(alist)

# # # # # # for index in alist:
# # # # # # 	print (index)


# # # # # # index = 0
# # # # # # count = len(alist)
# # # # # # while index < count:
# # # # # # 	print(alist[index])
# # # # # # 	index+=1


# # # # # #列表的嵌套
# # # # # # test_list = [1,2,3,['a','b','c']]
# # # # # # # print(test_list)

# # # # # # for index in test_list:
# # # # # # 	if type(index) == list:
# # # # # # 		for x in index:
# # # # # # 			print(x)
# # # # # # 	else:
# # # # # # 		print(index)

# # # # # #列表相加
# # # # # a = [1,2,3]
# # # # # b = [4,5,6]
# # # # # c = a + b
# # # # # print(c)

# # # # #列表切片
# # # # a = [1,2,3,4,5,6,7,8,9]
# # # # tmp = a[0:3]
# # # # print(tmp)
# # # # tmp = a[0:]
# # # # print(tmp)

# # # # tmp = a[0::2]
# # # # print(tmp)

# # # # # tmp = a[-3:]
# # # # # tmp = a[-1:-4:-1]
# # # # tmp = a[-1::-1]
# # # # print(tmp)


# # # #列表操作方法
# # # a = [1,2]
# # # a.append(3)
# # # print (a)

# # # a = ['to','to','test']
# # # result = a.count('to')
# # # print(result)

# # # a = [1,2,3]
# # # b = [4,5,6]
# # # a.extend(b)
# # # print(a)
# # # index = a.index(1)
# # # print(index)

# # # a.insert(0,0)
# # # print(a)

# # # tmp = a.pop()
# # # print(tmp)

# # # a.remove(4)
# # # print(a)

# # # #反转
# # # a.reverse()
# # # print(a)

# # # a.sort()
# # # print(a)

# # # del a[0]
# # # print(a)

# # # if 1 in a:
# # # 	print('TRUE')
# # # #转换为列表
# # # test = 'hello'
# # # print(list(test))

# # #元组 不可修改的列表
# # a = (1,2,3)
# # print(type(a))
# # print(a)

# # b = [1,2,3]
# # c = tuple(b)
# # print(c)

# # a = 'najw',18,'man'
# # name,age,_ = a
# # print (name) 
# # print (age)


# # a_tuple = 'username',
# # a_dict = {a_tuple:'najw'}
# # print(a_dict)

# #字典
# # person = {'username':'najw','age':18}
# # print(person)

# # person = dict(username='najw',age=18)
# # print(person)

# # print(len(person))
# # print(person['username'])
# # del person['age']
# # print(person)

# # person['height'] = 180
# # print(person)

# # # person.clear()
# # # print(person)

# # if 'username' in person:
# # 	print(person['username'])

# # person = {('najw','age'):'number'}
# # print(person)

# person = {'username':'najw','age':18}

# # a = person.get('p')
# # print(a)

# # d = person.pop('age')
# # print(d)


# # d = person.popitem()
# # print(d)


# # person2 = {'heigh':160}
# # person.update(person2)
# # print(person)

# #遍历字典
# # for x in person.keys():
# # 	print(x)

# # iterkeys = person.keys()
# # print(iterkeys)

# # for x in person.values():
# # 	print(x)

# items = person.items()
# print(items)

# for x in items:
# 	key,value = x
# 	print(key,value)

# for key,value in items:
# 	print(key,value)



