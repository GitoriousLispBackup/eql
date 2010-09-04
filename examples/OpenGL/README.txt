PREREQUISITES

1) On the Lisp side, you need the following ASDF packages:
    - cl-opengl & recursive dependencies:
        - alexandria
        - babel
        - cffi
        - trivial-features

2) On the EQL side you need to:
    - add the opengl module in helper/qt-modules.lisp
    - follow the helper/README (parse & generate)
    - uncomment the opengl module in src/eql.pro (section: optional modules)
    - make a clean rebuild of EQL (from src/eql.pro)


RUN

../../eql run.lisp
