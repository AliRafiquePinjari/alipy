c=1
while (c):
    print("select to calculate area ")
    print("1.Triangle")
    print("2.Rectangle")
    print("3.Circle")
    n=int(input("Enter your Choice "))

    if(n==1):
        base = int(input("Enter base "))
        height = int(input("Enter Height of Triangle "))
        triarea = 0.5*base*height
        print("Area of triangle is {0} ".format(triarea))
    elif(n==2):
        length = int(input("Enter length"))
        width = int(input("Enter width"))
        rectarea = length*width
        print("Area of Rectangle {0}".format(rectarea))
    elif(n==3):
        radius = int(input("Enter radius of Circle:"))
        circlearea = 3.14*radius*radius
        print("Area of Circle is {0}".format(circlearea))
    else:
        print("Wrong Choice")

    c = int(input("Enter 1 to continue or 0 to Exit"))
