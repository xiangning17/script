#!/usr/bin/python
# -*- coding:utf-8 _*-
"""
@version:
author:xiangning
@time: 2018/11/24
@file: batch-rename.py
@function:
@modify:
"""

import getopt
from os import path
import os
import sys
import re

self_name = path.basename(__file__)


class PrintColor():
    COLOR_BLACK = 30
    COLOR_RED = 31
    COLOR_GREEN = 32
    COLOR_YELLOW = 33
    COLOR_BLUE = 34
    COLOR_ZIHONG = 35  # 紫红色
    COLOR_QINGLAN = 36  # 青蓝色
    COLOR_WHITE = 37


def format_output(msg, color=PrintColor.COLOR_QINGLAN):
    return '''\033[0;%d;1m%s\033[0m''' % (color, msg)


def rename(cur_dir, pattern, repl, recursive=False, just_print=False):
    files = []
    if os.access(cur_dir, os.R_OK):
        files = os.listdir(cur_dir)
    else:
        print('不能列举目录：' + cur_dir)

    for name in files:
        file_path = path.join(cur_dir, name)
        if recursive and path.isdir(file_path):
            rename(file_path, pattern, repl, recursive, just_print)
        else:
            def replace(matched):
                cur_repl = repl
                for i, group in enumerate((matched.group(0),) + matched.groups()):
                    cur_repl = cur_repl.replace('@(%s)' % i, group)
                return cur_repl

            new_name = re.sub(pattern, replace, name)
            if new_name != name:
                new_path = path.join(cur_dir, new_name)
                if not just_print:
                    if os.access(file_path, os.W_OK):
                        print('重命名：%s -> %s' % (file_path, new_path))
                        os.rename(file_path, new_path)
                    else:
                        print('没有权限重命名：%s -> %s' % (file_path, new_path))
                else:
                    print('%s -> %s' % (file_path, new_path))


def delete(cur_dir, pattern, recursive=False, just_print=False):
    files = []
    if os.access(cur_dir, os.R_OK):
        files = os.listdir(cur_dir)
    else:
        print('不能列举目录：' + cur_dir)

    for name in files:
        file_path = path.join(cur_dir, name)
        if recursive and path.isdir(file_path):
            delete(file_path, pattern, recursive, just_print)
        else:
            if re.findall(pattern, name):
                if not just_print:
                    if os.access(file_path, os.W_OK):
                        print('删除 : %s' % file_path)
                        os.remove(file_path)
                    else:
                        print('没有权限删除 : %s' % file_path)
                else:
                    print(file_path)


def usage():
    print(format_output("%s：使用正则替换重命名目录及子目录下的文件" % self_name))

    print('')
    print(format_output("使用方式："))
    print(format_output("%s [-d 目标路径] [-r] 查找模式 替换模式 : " % self_name)
          + "替换所有满足'查找模式'的文件名部分为'替换模式'所指定的内容，'替换模式'中可使用'@(数字)'使用正则捕获的分组内容")
    print(format_output("%s [-d 目标路径] [-r] -D 删除模式 : " % self_name)
          + "删除文件名包含'删除模式'的文件")

    print('')
    print(format_output("选项："))
    print("-d 目标路径: 指定搜索目录，不指定时默认当前目录")
    print("-r: 开启递归搜索子目录")

    print('')
    print(format_output("示例："))
    print("batch-rename.py %s : 对当前目录所有文件加上'account_'前缀" %
          format_output("'.*' 'account_@(0)'"))
    print("batch-rename.py %s : " % format_output("'(.*)\.png' 'account_@(1).jpg'")
          + "对当前目录所有文件加上'account_'前缀，改变后缀。"
          + format_output("注意：bash中书写正则模式时，'('，')', '$'等特殊字符需要加上单引号取消bash特殊含义", PrintColor.COLOR_RED))
    print("batch-rename.py %s : 删除当前目录所有以'account_'打头的文件" %
          format_output("-D 'account_.*'"))


if __name__ == '__main__':
    targetDir = "."
    recursive = False
    deletePattern = None
    try:
        opts, args = getopt.getopt(sys.argv[1:], 'hd:D:r')
    except getopt.GetoptError:
        usage()
        sys.exit(2)
    for opt, arg in opts:
        if opt == '-h':
            usage()
            sys.exit()
    for opt, arg in opts:
        if opt == '-r':
            recursive = True
        elif opt == '-d':
            targetDir = arg
        elif opt == '-D':
            deletePattern = arg

    if deletePattern is not None:
        print(format_output("% s : 将会删除以下文件" %
                            self_name, PrintColor.COLOR_RED))
        delete(targetDir, deletePattern, recursive, True)
        confirm = raw_input(format_output(
            "是否继续？(y/n) : ", PrintColor.COLOR_RED))
        if confirm.lower() in ("", "y"):
            delete(targetDir, deletePattern, recursive, False)
    else:
        print(format_output("% s : 将会进行以下重命名" %
                            self_name, PrintColor.COLOR_RED))
        rename(targetDir, args[0], args[1], recursive, True)
        confirm = raw_input(format_output(
            "是否继续？(y/n) : ", PrintColor.COLOR_RED))
        if confirm == "" or 'y' == confirm.lower():
            rename(targetDir, args[0], args[1], recursive, False)
