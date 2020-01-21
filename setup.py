#!/usr/bin/python
# -*- coding:utf-8 -*-

import platform
import os

MACOS = 'Darwin'
LINUX = 'Linux'

if __name__ == "__main__":

    profiles = ['.bash_profile', '.profile', '.bash_login', '.bashrc']
    home = os.path.expanduser('~')
    profiles = [os.path.join(home, f) for f in profiles]
    profiles = list(filter(lambda path: os.path.exists(path), profiles))
    profile = (profiles and profiles[0]) or os.path.join(home, '.bash_profile')

    try:
        with open(profile, 'a+') as f:
            path = os.path.realpath(os.path.dirname(__file__))
            pos = f.tell()
            exitst = False
            f.seek(0) # 先将指针移动到文件头用于读内容
            for line in f.readlines():
                if path in line:
                    exitst = True
                    break
            if not exitst:
                f.seek(pos) # 重新定位文件指针到文件尾
                f.write('\n# script脚本加入环境变量\n')
                f.write('export PATH=$PATH:' + path)
    except Exception as e:
        print('写入环境变量失败', e)
