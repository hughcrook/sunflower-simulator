sizemem 20000000
srecl "jpeg-6a/djpeg.sr"
ff
setquantum 1000000000
registerstabs "jpeg-6a/djpeg.stabs"
run "djpeg -dct int -ppm -outfile output_large_decode.ppm input_large.jpg"
on
