'''
    ____        __  __              
   / __ \__  __/ /_/ /_  ____  ____ 
  / /_/ / / / / __/ __ \/ __ \/ __ \
 / ____/ /_/ / /_/ / / / /_/ / / / /
/_/    \__, /\__/_/ /_/\____/_/ /_/ 
      /____/                        
                      100 characters

Usage:
python3 gen.py [KEY] [SITE]
'''

import sys
print(sys.argv[1],end='')
for i in range(0,4):print(chr(ord(sys.argv[2][i])^37),end='')
