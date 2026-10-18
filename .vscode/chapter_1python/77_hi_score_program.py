def game():
    return 342

score = game()
with open("77_hi_score.py") as f:
    hiscore = (f.read())
if hiscore == '':
    with open("77_hi_score.py", 'w') as f:
        f.write(str(score))

elif int(hiscore) < score:
    with open("77_hi_score.py", 'w') as f:
        f.write(str(score))
