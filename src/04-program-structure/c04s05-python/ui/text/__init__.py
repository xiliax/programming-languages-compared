from .. import UIPrompter

def factory():
	print("Creating Text Prompter")
	return TextPrompter()


class TextPrompter(UIPrompter):
	def __init__(self):
		super(UIPrompter, TextPrompter).__init__("text-UI")
		print('Creating TextPrompter object')


	def write(self, b):
		print("Writing prompt to user")
		return 0

	def read(self, b):
		print("Reading data from user")
		return 0

