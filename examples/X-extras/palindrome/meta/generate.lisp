;;; generate Html5; uses <canvas>, JS

(defun generate-html (width)
  (let ((width/2 (truncate (+ 0.5 (/ width 2)))))
    (with-open-file (s "html/palindrome.htm" :direction :output :if-exists :supersede)
      (format s "~%<!-- best viewed in full screen mode -->~
                 ~%~
                 ~%<html>~
                 ~%<head></head>~
                 ~%<body style=\"background-color: black;\" onload=\"draw()\">~
                 ~%<div style=\"position: absolute; width: ~D; height: ~D; left: 50%; top: 50%; margin: -~D 0 0 -~D;\">~
                 ~%<canvas id=\"cv\" width=\"~D\" height=\"~D\"></canvas>~
                 ~%</div>~
                 ~%<script>
                 ~%  var cv = document.getElementById(\"cv\");~
                 ~%  var ct = cv.getContext(\"2d\");~
                 ~%  ct.rect(0, 0, ~D, ~D);~
                 ~%  var i = 0;~
                 ~%  var j = 0;~
                 ~%  var p;~
                 ~%  var images = new Array(25);~
                 ~%~
                 ~%  for(var n = 0; n < 25; n++) {~
                 ~%    images[n] = new Image;~
                 ~%    images[n].src = \"img/\" + (n + 1) + \".png\"; }~%"
              width width width/2 width/2
              width width
              width width)
      (with-open-file (in "meta/positions.js" :direction :input)
        (let ((buf (make-string (file-length in))))
          (read-sequence buf in)
          (write-sequence buf s)))
      (format s "~%  var positions = [p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, null];~
                 ~%~
                 ~%  function draw() {~
                 ~%    ct.fill();~
                 ~%    for(var n = 0; n < 25; n++) {~
                 ~%      ct.drawImage(images[n], p[i++], p[i++]); }~
                 ~%    if(p[i] == null) {~
                 ~%      j++;~
                 ~%      if(positions[j] == null) {~
                 ~%        i = 0;~
                 ~%        j = 0;~
                 ~%        p = positions[0];~
                 ~%        setTimeout(draw, 1000); }~
                 ~%      else {~
                 ~%        i = 0;~
                 ~%        p = positions[j];~
                 ~%        setTimeout(draw, 1000); }}~
                 ~%    else {~
                 ~%      setTimeout(draw, 50); }}~
                 ~%~
                 ~%  p = positions[0];~
                 ~%~
                 ~%</script>~
                 ~%</body>~
                 ~%</html>"))))

