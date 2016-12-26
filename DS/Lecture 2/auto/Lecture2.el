(TeX-add-style-hook "Lecture2"
 (lambda ()
    (LaTeX-add-environments
     "Summary")
    (LaTeX-add-labels
     "fig:d")
    (TeX-add-symbols
     "Fontvi"
     "Fontvia"
     "Fontviaa")
    (TeX-run-style-hooks
     "beamerthemeshadow"
     "dblfloatfix"
     "graphicx"
     "multirow"
     "caption"
     "amsmath"
     "texpower"
     "booktabs"
     "IEEEtrantools"
     "color"
     "amssymb"
     "cite"
     "algorithmicx"
     "algorithm"
     "subfig"
     "lipsum"
     "listings"
     "epstopdf"
     "latex2e"
     "beamer10"
     "beamer")))

