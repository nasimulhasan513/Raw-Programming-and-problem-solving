from os.path import isfile, join

from os import listdir

files_list = [f for f in listdir('/Python') if isfile(join('/Python'))]
