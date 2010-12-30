PREREQUISITES
=============

You need the following ASDF packages:

- cl-opengl & recursive dependencies:
    - alexandria
    - babel
    - cffi
    - trivial-features
   
[Windows]
    - ASDF: you may need to set the environment variable XDG_CACHE_HOME to a path with no spaces
    - MSVC: an adapted version of cl-opengl (including all dependencies + other packages) can be found here:
      http://createuniverses.googlecode.com/files/packages.zip



RUN
===

eql run.lisp
