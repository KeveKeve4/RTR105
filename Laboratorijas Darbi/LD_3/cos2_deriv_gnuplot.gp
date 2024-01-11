set terminal svg size 600,600
set out "cos2_atvas.svg"

set xlabel "x" 
set ylabel "y" 
set grid
set title "F-jas cos^2(x) un tās atvasinājumu garfiki"
plot "derivative.dat" using 1:2 with lines title "(cos^2(x))' analytical fomula",\
 "derivative.dat"  using 1:3 with points title "(cos^2(x))' analytical fomula",\
 "derivative.dat"  using 1:4 with lines title "(cos^2(x))' finite difference",\
 "derivative.dat"  using 1:5 with points title "(cos^2(x))'' analytical fomula",\
 "derivative.dat"  using 1:6 with lines title "(cos^2(x))'' finite difference"
