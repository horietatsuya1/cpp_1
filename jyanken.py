import random

def jyanken(a,b):
    if a == b:
        print('あいこです')
    elif a == 1 and b == 2:
        print('相手はチョキを出しました。あなたの勝ちです')
    elif a == 1 and b == 3:
        print('相手はパーを出しました。あなたの負けです')
    elif a == 2 and b == 1:
        print('相手はグーを出しました。あなたの負けです。')
    elif a == 2 and b == 3:
        print('相手はパーを出しました。あなたの勝ちです。')
    elif a == 3 and b == 1:
        print('相手はグーを出しました。あなたの勝ちです。')
    elif a == 3 and b == 2:
        print('相手はチョキを出しました。あなたの負けです。')
    else:
        print('ルール違反です')

a = int(input('(グー: 1,チョキ: 2,パー: 3)あなたが出す手は？: '))
b = random.randint(1, 3)
jyanken(a,b)
