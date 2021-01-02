#task1 实现一个函数，求两个数之和
print('task1 实现函数sum_fun，求123+456之和：')
#函数实现
def sum_fun(a,b):
	result = a + b
	print('a:',a)
	print('b:',b)
	print('sum:',result)
#函数调用测试
sum_fun(123,456)

#task2 实现一个函数，可以求任意数之和
print('\ntask2 实现一个函数，可以求任意数之和：')
#函数实现
def sum_fun_any(*args,**kwargs):
	result = 0;
	for x in args:
		result += x
	for y in kwargs.values():
		result += y
	print('sum:',result)
#函数调用测试 
sum_fun_any(1)
sum_fun_any(1,2)
sum_fun_any(1,2,3)
sum_fun_any(1,a=1)
sum_fun_any(1,2,a=1)
sum_fun_any(1,2,a=1,b=2)
sum_fun_any(a=1,b=2,c=3)


