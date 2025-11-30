---
project: LowLevelTemplate
description: A templatee for C projects for Bocan Online and Bocan Studio.
language: C
environment: CMake, Make
requires:
  - Git
  - CMake
  - Make
  - Clang
startup:
  - nvim . --(open editor at project root)
other:
  - ./scripts/build-debug.sh    --(build the debug configuration)
  - ./scripts/build-release.sh  --(build the release configuration)
  - ./scripts/run-debug.sh      --(run the application with debug config)
  - ./scripts/run-release.sh    --(run the application with release config)
  - ./scripts/clean.sh          --(remove build-debug/ and build-release/) 
---
[!NOTE] The above YAML meta-data is used by the 
[Bocan Online Developer Toolkit] (https://github.com/BocanOnline/PythonUtilities)

# LowLevelTemplate Developer Guide

## TODO

[ ] Flesh out LICENSE.md
[ ] Flesh out CONTRIBUTING.md
[ ] Add .github specific files (CODE_OF_CONDUCT.md, SECURITY.md, etc.)
[ ] Add workflows template to .github
[ ] Develop a better module example (event system or something similar).
[ ] Add integration test and other test examples.
[ ] Add third-party library as demonstration.
[ ] Add docs/ files with a default hyper-link tree.
