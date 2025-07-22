# collatz
Simple, brute force [Collatz Conjecture](https://en.wikipedia.org/wiki/Collatz_conjecture) tester in JavaScript.

After running for a couple of days this was the output:

```
% node collatz.js
2 had 1 steps.
3 had 7 steps.
6 had 8 steps.
7 had 16 steps.
9 had 19 steps.
18 had 20 steps.
25 had 23 steps.
27 had 111 steps.
54 had 112 steps.
73 had 115 steps.
97 had 118 steps.
129 had 121 steps.
171 had 124 steps.
231 had 127 steps.
313 had 130 steps.
327 had 143 steps.
649 had 144 steps.
703 had 170 steps.
871 had 178 steps.
1161 had 181 steps.
2223 had 182 steps.
2463 had 208 steps.
2919 had 216 steps.
3711 had 237 steps.
6171 had 261 steps.
10971 had 267 steps.
13255 had 275 steps.
17647 had 278 steps.
23529 had 281 steps.
26623 had 307 steps.
34239 had 310 steps.
35655 had 323 steps.
52527 had 339 steps.
77031 had 350 steps.
106239 had 353 steps.
142587 had 374 steps.
156159 had 382 steps.
216367 had 385 steps.
230631 had 442 steps.
410011 had 448 steps.
511935 had 469 steps.
626331 had 508 steps.
837799 had 524 steps.
1117065 had 527 steps.
1501353 had 530 steps.
1723519 had 556 steps.
2298025 had 559 steps.
3064033 had 562 steps.
3542887 had 583 steps.
3732423 had 596 steps.
5649499 had 612 steps.
6649279 had 664 steps.
8400511 had 685 steps.
11200681 had 688 steps.
14934241 had 691 steps.
15733191 had 704 steps.
31466382 had 705 steps.
36791535 had 744 steps.
63728127 had 949 steps.
127456254 had 950 steps.
169941673 had 953 steps.
226588897 had 956 steps.
268549803 had 964 steps.
537099606 had 965 steps.
670617279 had 986 steps.
1341234558 had 987 steps.
1412987847 had 1000 steps.
1674652263 had 1008 steps.
2610744987 had 1050 steps.
4578853915 had 1087 steps.
4890328815 had 1131 steps.
9780657630 had 1132 steps.
12212032815 had 1153 steps.
12235060455 had 1184 steps.
13371194527 had 1210 steps.
17828259369 had 1213 steps.
```

So I can confirm the conjecture holds up to 17 billion (1.7 x 10^10) or so. This conjecture has been checked up to [2.36 × 10^21](https://en.wikipedia.org/wiki/Collatz_conjecture#cite_note-Barina-13) so I've only redone the first 10^11th of that. That is, the first 100 billionth. Geesh.
