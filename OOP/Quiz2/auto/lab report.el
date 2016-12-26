(TeX-add-style-hook "lab report"
 (lambda ()
    (LaTeX-add-environments
     "algorithm")
    (TeX-add-symbols
     "copyrightbox"
     "floatpagefraction")
    (TeX-run-style-hooks
     "IEEEtrantools"
     "retainorgcmds"
     "epstopdf"
     "algorithmic"
     "algorithm"
     "subfigure"
     "mathrsfs"
     "wasysym"
     "amsmath"
     "rotating"
     "multirow"
     "latex2e"
     "art11"
     "article"
     "11pt")))

