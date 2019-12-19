int line(double x, double y, double px, double py, double qx, double qy){
double a = py - qy;
double b = qx -px;
double c = qx*py -px*qy;
double distance = a*x + b*y +c;
if (distance<0.5){
   return 1;
} else{
return 0;
}

}