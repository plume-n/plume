class Person(object):
	def __init__(self,name,age):
		self.name = name
		self.__age = age
	def __del__(self):
		print('销毁')
	def eat(self):
		print('吃饭')
	def info(self):
		print(self.__age)
		#print(self.__number)
he = Person('najw',18)
he.__number = 1
he.info()

del he


