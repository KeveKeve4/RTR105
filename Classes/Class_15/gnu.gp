#!/usr/bin/gnuplot -persist
# set terminal pngcairo  transparent enhanced font "arial,10" fontscale 1.0 size 600, 400 
# set output 'rotate_labels.1.png'
set border 3 front lt black linewidth 1.000 dashtype solid
set angles degrees
unset key
unset parametric
set style data lines
set xtics border in scale 1,0.5 nomirror norotate  autojustify
set xtics  norangelimit 1.00000,1,12.0000
set ytics border in scale 1,0.5 nomirror norotate  autojustify
set ytics  norangelimit 1.00000,1,12.0000
set title "variable color and orientation in plotstyle 'with labels'" 
set title  offset character 0, -2, 0 font "" textcolor lt -1 norotate
set xrange [ 0.00000 : 13.0000 ] noreverse nowriteback
set x2range [ * : * ] noreverse writeback
set yrange [ 0.00000 : 13.0000 ] noreverse nowriteback
set y2range [ * : * ] noreverse writeback
set zrange [ * : * ] noreverse writeback
set cbrange [ * : * ] noreverse writeback
set rrange [ * : * ] noreverse writeback
set colorbox vertical origin screen 0.9, 0.2 size screen 0.05, 0.6 front  noinvert bdefault
NO_ANIMATION = 1
Last datafile plotted: "$Data"
plot $Data using 1:1:2:3:0 with labels rotate variable tc variable font ",20"
