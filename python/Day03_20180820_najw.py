
#task1 
str_srouce = "West Virginia is testing the new method, which uses blockchain\
technology to store and secure digital votes, at a time of heightened concern\
about election meddling. U.S. intelligence officials warn that Russia could interfere\
in the congressional midterms on Nov. 6, and on July 31, Facebook Inc. said it’s\
investigating interference on its social media platforms, similar to that seen during\
the 2016 presidential election. At a conference of election officials in July,\
cybersecurity dominated the discussions. The West Virginia experiment could help\
determine whether blockchain, widely used in cryptocurrency, has a place in\
election security. But computer scientists say mobile voting is risky."

str_now = str_srouce.replace(" ", "")
print('\ntask1：')
print('1.去空格后的字符串：')
print(str_now)
print("2.单词个数:",len(str_now))

lower_str = str_srouce.lower()
str_list = lower_str.split(" ")
print ("3.以w开头的单词:")
for str_idx in str_list:
	if str_idx.startswith('w'):
		print(str_idx)

print ("4.所有的数字:")
tmp_str = str_srouce.replace(","," ")
tmp_str = tmp_str.replace("."," ")
digit_list = tmp_str.split(" ")
for index in digit_list:
	if index.isdigit():
		print(index)

#task2 format应用
print("\ntaks2 :")
#用户名
DB_USERNAME = 'root'
#密码
DB_PAASWORD = 'root'
#主机
DB_HOST = '127.0.0.1'
#端口号
DB_PORT = 3306
#数据库名称
DB_NAME = 'zhiliao'

sql_str = 'mysql+pymysql://{}:{}@{}:{}/{}?charset=utf8'.format(DB_USERNAME,DB_PAASWORD,DB_HOST,DB_PORT,DB_NAME)
print(sql_str)

