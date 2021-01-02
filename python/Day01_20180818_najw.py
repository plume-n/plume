#encoding:utf-8
#python version:2.7.10

#加法计算器
print('\ntask1 加法计算器')
in_a = input("please input number a : ")
in_b = input("please input number b : ")
int_c = int(in_a) + int(in_b)
print 'total a + b = ',int_c

#将变量a='12.3'转换为整形
print('\ntask2 变量a=12.3转换为整形')
f_a = 12.3
print 'float a =',f_a
i_a = int(f_a)
print 'now a = ',i_a
print 'the type of a : ', type(i_a)
