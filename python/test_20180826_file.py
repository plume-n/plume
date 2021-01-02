# #打开和关闭文件
# fp = open('file_test.txt','w')
# fp.write('this is a test')
# fp.close()

# #文件的编码
# fp = open('file_test.txt','w',encoding='utf-8')
# fp.write('中国')
# fp.close()

# #文件的打开模式
# #读
# fp = open('file_test.txt','r')
# string = fp.read()
# print(string)
# fp.close()

# #追加
# fp = open('file_test.txt','a')j
# fp.write('南京')
# fp.close()

# #文件的读写
# fp = open('file_test.txt','r+')
# print(fp.read())
# fp.close()

# #r+
# fp = open('file_test.txt','r+')
# fp.write('江苏')
# fp.close()
# fp = open('file_test.txt','r+')
# string = fp.read()
# print(string) 
# fp.close()

#w+
# fp =open('file_test.txt','w+')
# fp.write('hello')
# fp.flush() #刷新缓存到文件
# fp.seek(0,0) #移动光标到开始
# string = fp.read()
# print(string)
# fp.close()

#a+
# fp = open('file_test.txt','a+')
# fp.write(' china')
# string = fp.read()
# print(string)
# fp.close()

#关闭文件	

#文件读取的几种方式
#read
# fp = open('file_test.txt','r')
# string = fp.read(5)
# print(string)
# fp.close()

#readline
# fp =open('file_test.txt','r')
# line = fp.readline()
# line = fp.readline()
# print(line)
# fp.close()

# fp =open('file_test.txt','r')
# while True:
# 	line = fp.readline()
# 	if not line:
# 		break
# 	else:
# 		print(line)
# fp.close()

# readlines
# fp =open('file_test.txt','r')
# lines = fp.readlines()
# print(lines)
# for x in lines:
# 	print(x)
# fp.close()

#writelines
# fp =open('file_test.txt','w')
# a = ['test1\n','test2\n','test3\n']
# fp.writelines(a)
# fp.close()

#文件定位
#tell函数
# fp =open('file_test.txt','r')
# fp.read()
# pos = fp.tell()
# print(pos)
# fp.close()

#seek函数 seek(offset,from) 
#offset:偏移量 0:文件开始，1：当前位置，2: 文件末尾
# fp =open('file_test.txt','rb')
# fp.seek(5,0)
# fp.seek(5,1)
# fp.seek(-5,2)
# pos = fp.tell()
# print(pos)
# print(fp.read())
# fp.close()

#with 语句优化文件操作

# try:
#     a = 1
#     b = 0
#     c = a/b
# except:
#     print('error')
# finally:
#     print('hello')
# with open('file_test.txt','w') as fp:
#     fp.write('this is a test')

#拷贝文件
# with open('file_test.txt','r') as fp:
#     with open('file_test1.txt','w') as fp1:
#         for line in fp:
#             fp1.write(line)

#遍历






