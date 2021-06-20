# travis_qmake_gcc_cpp20

Branch   |[![Travis CI logo](TravisCI.png)](https://travis-ci.com)
---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
`master` |[![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20)
`develop`|[![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20.svg?branch=develop)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20)

![GitHub Actions](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp20/workflows/check/badge.svg?branch=master)

This GitHub is part of [the Travis C++ Tutorial](https://github.com/richelbilderbeek/travis_cpp_tutorial).

The goal of this project is to have a clean Travis CI build, with specs:
 * Build system: `qmake`
 * C++ compiler: `gcc`
 * C++ version: `C++20`
 * Libraries: `STL` only
 * Code coverage: none
 * Source: one single file, `main.cpp`

More complex builds:

 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_bpp.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_bpp) Add `Bio++`: [travis_qmake_gcc_cpp20_bpp](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp20_bpp)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_boost.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_boost) Add `Boost`: [travis_qmake_gcc_cpp20_boost](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp20_boost)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_boost_test.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_boost_test) Add `Boost.Test`: [travis_qmake_gcc_cpp20_boost_test](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp20_boost_test)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_clang-format.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_clang-format) [travis_qmake_gcc_cpp20_clang-format](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp20_clang-format)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_clang-tidy.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_clang-tidy) [travis_qmake_gcc_cpp20_clang-tidy](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp20_clang-tidy)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_codechecker.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_codechecker) Add CodeChecker: [travis_qmake_gcc_cpp20_codechecker](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp20_codechecker)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_doxygen.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_doxygen) Add Doxygen: [travis_qmake_gcc_cpp20_doxygen](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp20_doxygen)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_gcov.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_gcov) Add code coverage: [travis_qmake_gcc_cpp20_gcov](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp20_gcov)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_clang-tidy.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_clang-tidy) Add `clang-tidy`: [travis_qmake_gcc_cpp20_clang-tidy](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp20_clang-tidy)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_cppcheck.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_cppcheck) Add `cppcheck`: [travis_qmake_gcc_cpp20_cppcheck](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp20_cppcheck)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_fltk.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_fltk) Add `FLTK`: [travis_qmake_gcc_cpp20_fltk](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp20_fltk)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_gprof.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_gprof) Add `gprof`: [travis_qmake_gcc_cpp20_gprof](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp20_gprof)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_magic_enum.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_magic_enum) Add `magic_enum`: [travis_qmake_gcc_cpp20_magic_enum](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp20_magic_enum)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_oclint.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_oclint) Add `OCLint`: [travis_qmake_gcc_cpp20_oclint](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp20_oclint)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_perf.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_perf) Add `perf`: [travis_qmake_gcc_cpp20_perf](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp20_perf)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_qt.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_qt) Add `Qt`: [travis_qmake_gcc_cpp20_qt](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp20_qt)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_r.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_r) Add `R`: [travis_qmake_gcc_cpp20_r](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp20_r)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_sdl.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_sdl) Add `SDL`: [travis_qmake_gcc_cpp20_sdl](https://github.com/richelbilderbeek/travis_qmake_gcc_cpp20_sdl)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_sfml.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_sfml) Add `SFML`: [travis_qmake_gcc_cpp20_sfml](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp20_sfml)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_rcpp.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_rcpp) Add `Rcpp`: [travis_qmake_gcc_cpp20_rcpp](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp20_rcpp)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_urho3d.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_urho3d) Add `Urho3D`: [travis_qmake_gcc_cpp20_urho3d](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp20_urho3d)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_wt.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_wt) Add `Wt`: [travis_qmake_gcc_cpp20_wt](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp20_wt)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_xmlpp.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_xmlpp) Add `xml++`: [travis_qmake_gcc_cpp20_xmlpp](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp20_xmlpp)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_tdc.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_tdc) Travis-dependent compilation: [travis_qmake_gcc_cpp20_tdc](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp20_tdc)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_tdr.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_gcc_cpp20_tdr) Travis-dependent run: [travis_qmake_gcc_cpp20_tdr](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp20_tdr)

Builds of similar complexity:

 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_qmake_clang_cpp20.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_qmake_clang_cpp20) Use `clang` instead of `gcc`: [travis_qmake_clang_cpp20](https://www.github.com/richelbilderbeek/travis_qmake_clang_cpp20)
 * [![Build Status](https://travis-ci.com/richelbilderbeek/travis_cmake_gcc_cpp20.svg?branch=master)](https://travis-ci.com/richelbilderbeek/travis_cmake_gcc_cpp20) Use `cmake` instead of `qmake`: [travis_cmake_gcc_cpp20](https://www.github.com/richelbilderbeek/travis_cmake_gcc_cpp20)

Less complex builds:

 * Use C++98: [travis_qmake_gcc_cpp98](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp98)
 * Use C++11: [travis_qmake_gcc_cpp11](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp11)
 * Use C++14: [travis_qmake_gcc_cpp14](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14)
 * Use C++17: [travis_qmake_gcc_cpp17](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp17)

