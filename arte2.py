import turtle


myTurtle = turtle.Turtle()

MAX_DEPTH=9

def leaf(depth=0):
    if depth > MAX_DEPTH:
        # Establecemos una condición con un valor experimental,
        return
    length=100 * (2/3)**depth
    myTurtle.forward(length)
    myTurtle.left(60)
    leaf(depth+1)
    myTurtle.right(120)
    leaf(depth+1)
    myTurtle.right(120)
    myTurtle.forward(length)
    myTurtle.left(180)
    

if __name__ == "__main__":
    myWin = turtle.Screen()
    leaf()
    myWin.exitonclick()
