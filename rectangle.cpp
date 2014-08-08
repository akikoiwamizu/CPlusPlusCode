struct Rectangle
{
    double length;
    double width;
    double perimeter;
    double area;
};

int main()
{
    Rectangle rect[4];
    rect[0].length = 7;
    rect[0].width = 5;
    rect[1].length = 9;
    rect[1].width = 4;
    rect[2].length = 6;
    rect[2].width = 3;
    rect[3].length = 8;
    rect[3].width = 7;

    void displayRectangle(Rectangle);
    displayRectangle(rect[4]);

}

void displayRectangle(Rectangle rect)
{
    for(int i = 0; i < 4; i++)
    {
        rect[i].perimeter = (2.0(rect[i].length) + 2.0(rect[i].width));
        cout << "Rectangle perimeter: " << rect[i].perimeter << endl;
        rect[i].area = rect[i].length * rect[i].width;
        cout << "Rectangle area: " << rect[i].area << endl;
        cout << "---------------------------------------" << endl;
    }
}
