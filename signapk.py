#!/usr/bin/python
# -*- coding:utf-8 -*-

import os, sys, getopt
from os import path

script_dir = path.dirname(path.realpath(sys.argv[0]))
signapk_dir = path.join(script_dir, 'signapk')
signapk_jar = path.join(signapk_dir, 'signapk.jar')
jdk_lib_dir = path.join(signapk_dir, 'javalib/lib64')
key_dir = path.join(signapk_dir, 'security')


def format_output(msg, color=31):
    return '''\033[0;%d;1m%s\033[0m''' % (color, msg)

def usage():
    print('''signapk.py [options] <input> <output>:

options可选项有:
               
-p 使用platform秘钥签名
-r 使用releasekey秘钥签名
-t 使用testkey秘钥签名
-m 使用media秘钥签名
-s 使用shared秘钥签名
--key=<name> 使用name秘钥签名,秘钥对应的pk8和x509.pem须放入秘钥存放路径'%s' ''' % key_dir)

def main(argv):
   name = 'platform' # 默认
   try:
      opts, args = getopt.getopt(argv,'prtms',['key=', 'help'])
   except getopt.GetoptError:
      usage()
      sys.exit(2)
   for opt, arg in opts:
      if opt in('-h', '--help'):
         usage()
         sys.exit()
      elif opt == '-p':
         name = 'platform'
      elif opt == '-r':
         name = 'releasekey'
      elif opt == '-t':
         name = 'testkey'
      elif opt == '-m':
         name = 'media'
      elif opt == '-s':
         name = 'shared'
      elif opt == '--key':
         name = arg

      break

   pem_file = path.join(key_dir, name + '.x509.pem')
   pk8_file = path.join(key_dir, name + '.pk8')

   if len(args) < 2:
       print(format_output('\n必须指定输入输出文件！！！\n'))
       usage()
       sys.exit(3)

   inputapk = args[0]
   outputapk = args[1]

   cmd = 'java -Djava.library.path=%s -jar %s %s %s %s %s' % (jdk_lib_dir, signapk_jar, pem_file, pk8_file, inputapk, outputapk)
   # print(cmd)
   os.system(cmd)

if __name__ == "__main__":
   main(sys.argv[1:])
