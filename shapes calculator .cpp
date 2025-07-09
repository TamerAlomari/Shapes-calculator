#include <iostream>
#include <cmath>

using namespace std;

void square(double x)
{
	cout <<"\nThe area of the Square  = "<<(x*x)<<" . "<<endl;
    cout <<"The circumference of Square  = "<<(4.0*x)<<" . "<<endl;
}

const double PI = 3.14159;
void circle(double r)
{
	cout <<"\nThe area of the circle  = "<<(PI*(r*r))<<" . "<<endl;
	cout <<"The circumference of the circle = "<<(PI*(2.0*r))<<" . "<<endl;
}

void triangle(double x , double y , double z)
{
	double circumference = (x+y+z);
	double s=(circumference/2.0);
	double a= s*(s-x)*(s-z)*(s-y);
	double area = sqrt(a);
	cout <<"\nThe area of the triangle = "<<area<<" . "<<endl;
	cout <<"The circumference of the triangle = "<<circumference<<" . "<<endl;
}

void cube (double x)
{
	cout <<"\nThe volume of the cube = "<<(x*x*x)<<" . "<<endl;
	cout <<"The surface area of the cube = "<<(6.0*(x*x))<<" . "<<endl;
}

void sphere(double n)
{
    cout <<"\nThe volume of the sphere = "<<1.25*PI*(n*n*n)<<" . "<<endl;;
	cout <<"The surface area of the sphere = "<<4.0*PI*(n*n)<<" . "<<endl;

}

void pyramid(double x , double y)
{
	double base=(x*x);
	double volume =(1.0/3.0)*base*y;
	double p = 4.0*x;
	double la =0.5 * p * y ;
	double surface = base + la ;
	cout <<"\nThe volume of the pyramid = "<<volume<<" . "<<endl;
	cout <<"The surface area of the pyramid = "<<surface<<" . "<<endl;

}

void corn(double r , double h)
{
	double volume = PI*(r*r)*h*(1.0/3.0) ;
	double a = (r*r)*(h*h);
	double l = sqrt (a);
	double surface = (PI*r*l)+(PI*(r*r));
	cout <<"\nThe volume of the corn = "<<volume<<" . "<<endl;
	cout <<"The surface area of the corn = "<<surface<<" . "<<endl;

}

void trapezoid(double q ,double w ,double e,double r)
{
	double s=(q+w+e+r)/2;
	double a=(s-q)*(s-w)*(s-e)*(s-r);
	double area = sqrt(a);
	cout <<"\nThe area of trapezoid = "<<area<<" . "<<endl;
	cout <<"The circumference of trapezoid = "<<(q+w+e+r)<<" . "<<endl;

}

void pentagon(double x)
{
	double y=sqrt(5.0);
	double z=sqrt(5.0*(5.0+2.0*y));
	double area = 0.25*z*(x*x);
	double p=x*5.0;
	cout <<"\nThe area of pentagon = "<<area<<" . "<<endl;
	cout <<"The circumference of pentagon = "<<p<<" . "<<endl;


}

void cuboid (double x, double y, double z)
{
	double volume =x*y*z;
	double sur = 2.0*(x*y)+2.0*(x*z)+2.0*(z*y);
	cout <<"\nThe volume of cuboid = "<<volume<<" . "<<endl;
	cout <<"The surface area of cuboid = "<<sur<<" . "<<endl;
}

int main()
{
	while (true)
	{
	    int chose ;
	    cout << "Welcome to shape calculator.\n";
	    cout<< "-------------Choice menu-------------\n";
	    cout << "1.  Square \n";
		cout << "2.  Circle \n";
	    cout << "3.  Triangle \n";
		cout << "4.  Cube \n";
		cout << "5.  Sphere \n";
		cout << "6.  Pyramid \n";
		cout << "7.  Cone \n";
		cout << "8.  Trapezoid \n";
		cout << "9.  Pentagon \n";
		cout << "10. Cuboid /rectangular prism \n";
		cout << "11. Exit \n";
		cout <<"Please choose the number of the shape you interested in : ";
		cin>> chose;
		cout << "\n-------------------------------\n";
	    if (chose == 1)
	    {
	    	while (true)
	    	{
	    	    double l;
	    	    cout << "\nGreat!, so you would like to know more about the square.\n";
	    	    cout <<"Please insert the length of one side : ";
	    	    cin >> l;
	    	    if(l < 0)
	    	    {
	    	    	cout<<"Please enter a positive number : ";
	    	    	cin>>l;
				}
	    	    square(l);
	    	    break;
	        }
	    }
	    else if (chose == 2 )
	    {
	    	while (true)
	    	{
	    	    double x;
	    	    cout<<"\nGreat!, so you would like to know more about the circle.\n";
	    	    cout<<"Please insert the radius : ";
	    	    cin>>x;
	    	    if(x < 0)
	    	    {
	    	    	cout << "Please enter a positive number : ";
	    	    	cin >> x;
				}
	    	    circle(x);
	    	    break;
	        }
	    }
	    else if (chose == 3 )
	    {
	    	while (true)
	    	{
	    		double x,y,z;
	    		cout << "\nGreat!, so you would like to know more about the Triangle.\n";
	    		cout << "Please insert the length for first side : ";
	    		cin >> x;
	    		if( x < 0)
	    	    {
	    	    	cout << "Please enter a positive number : ";
	    	    	cin >> x;
				}
	    		cout << "Please insert the length for second side : ";
	    		cin >> y;
	    		if(y < 0)
	    	    {
	    	    	cout << "Please enter a positive number : ";
	    	    	cin >> y;
				}
	    		cout << "Please insert the length for third side : ";
	    		cin >> z;
	    		if(z < 0)
	    	    {
	    	    	cout << "Please enter a positive number : ";
	    	    	cin >> z;
				}
				if (x + y > z && x + z > y && y + z > x){
					triangle(x,y,z);
			}
				else
				{
                cout << "The given sides do not form a valid triangle." << endl;
                }
	    		break;
			}
	    }
	    else if (chose == 4 )
	    {
	    	while(true)
			{
				double x;
				cout << "\nGreat!, so you would like to know more about the Cube.\n";
				cout << "Please insert the length of one side : ";
				cin >> x;
				if( x < 0)
	    	    {
	    	    	cout << "Please enter a positive number : ";
	    	    	cin >> x;
				}
				cube(x);
				break;
			} 
	    }
	    else if (chose == 5 )
	    {
	    	while(true)
	    	{
	    		double x;
	    		cout << "\nGreat!, so you would like to know more about the sphere.\n";
	    	    cout << "Please insert the radius : ";
	    	    cin>> x ;
	    	    if(x < 0)
	    	    {
	    	    	cout << "Please enter a positive number : ";
	    	    	cin >> x;
				}
	    	    sphere(x);
	    	    break;
			}
	    }
	    else if (chose == 6 )
	    {
	    	while (true)
	    	{
	    		double x,y;
	    		cout << "\nGreat!, so you would like to know more about the Pyramid.\n";
	    	    cout << "Please insert the length of one side from the base : ";
	    	    cin >> x;
	    	    if(x < 0)
	    	    {
	    	    	cout << "Please enter a positive number : ";
	    	    	cin >> x;
				}
	    	    cout << "And the length of one side from the lateral rib of the pyramid : ";
	    	    cin >> y;
	    	    if(y < 0)
	    	    {
	    	    	cout << "Please enter a positive number : ";
	    	    	cin >> y;
				}
	    	    pyramid(x,y);
	    	    break;
			}
	    }
	    else if (chose == 7 )
	    {
	    	while (true)
	    	{
	    		double r,h;
	    		cout << "\nGreat!, so you would like to know more about the Corn.\n";
	    		cout << "Please insert the radius of the base : ";
	    		cin >> r;
	    		if(r < 0)
	    	    {
	    	    	cout << "Please enter a positive number : ";
	    	    	cin >> r;
				}
	    		cout << "And the height : ";
	    		cin >> h;
	    		if(h < 0)
	    	    {
	    	    	cout << "Please enter a positive number : ";
	    	    	cin >> h;
				}
	    		corn(r,h);
	    		break;
			}
	    }
	    else if (chose == 8 )
	    {
	    	while (true)
	    	{
	    		double q,w,e,r;
	    		cout << "\nGreat!, so you would like to know more about the Trapezoid.\n";
	    		cout <<"Please insert the length of the first base : ";
	    		cin >> q;
	    		if(q < 0)
	    	    {
	    	    	cout << "Please enter a positive number : ";
	    	    	cin >> q;
				}
	    		cout << "Please insert the length of the second base : ";
	    		cin >> w;
	    		if(w < 0)
	    	    {
	    	    	cout << "Please enter a positive number : ";
	    	    	cin >> w;
				}
	    		cout << "And the length of the first side : ";
	    		cin >> e;
	    		if(e < 0)
	    	    {
	    	    	cout <<"Please enter a positive number : ";
	    	    	cin >> e;
				}
	    		cout <<"And the length of the second side : ";
	    		cin >> r;
	    		if(r < 0)
	    	    {
	    	    	cout <<"Please enter a positive number : ";
	    	    	cin >> r;
				}
	    		trapezoid(q,w,e,r);
	    		break;
			}
	    }
	    else if (chose == 9 )
	    {
	    	while (true)
	    	{
	    		double x;
	    		cout << "\nGreat!, so you would like to know more about the Pentagon.\n";
	    		cout <<"Please insert the length of one side : ";
	    		cin >> x;
	    		if(x < 0)
	    	    {
	    	    	cout <<"Please enter a positive number : ";
	    	    	cin >> x;
				}
	    		pentagon(x);
	    		break;
			}
	    }
	    else if (chose == 10 )
	    {
	    	while(true)
	    	{
	    		double x,y,z;
	    		cout << "\nGreat!, so you would like to know more about the Cuboid /rectangular prism.\n";
	    		cout <<"Please insert length : ";
	    		cin >> x;
	    		if(x < 0)
	    	    {
	    	    	cout <<"Please enter a positive number : ";
	    	    	cin >> x;
				}
	    		cout <<"Please insert width : ";
	    		cin >> y;
	    		if(y < 0)
	    	    {
	    	    	cout <<"Please enter a positive number : ";
	    	    	cin>> y;
				}
	    		cout <<"Please insert height : ";
	    		cin >> z;
	    		if(z < 0)
	    	    {
	    	    	cout <<"Please enter a positive number : ";
	    	    	cin >> z;
				}
	    		cuboid(x,y,z);
	    		break;
			}
	    }
	    else if (chose == 11)
	    {
	    	cout <<"Thank you for using our program.\n";
	    	break;
	    
	}
	else {while (true){
	
	        cout << "Invalid choice, please try again.\n";
            
		}
	}break;
	   
	    
    }
    return 0;
}
