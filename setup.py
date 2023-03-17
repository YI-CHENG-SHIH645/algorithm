import glob
import os

# Available at setup time due to pyproject.toml
from pybind11 import get_cmake_dir
from pybind11.setup_helpers import Pybind11Extension
from setuptools import setup

__version__ = "0.0.1"

# The main interface is through Pybind11Extension.
# * You can add cxx_std=11/14/17, and then build_ext can be removed.
# * You can set include_pybind11=false to add the include directory yourself,
#   say from a submodule.
#
# Note:
#   Sort input source files if you glob sources to ensure bit-for-bit
#   reproducible builds (https://github.com/pybind/python_example/pull/53)

ext_modules = [
    *[Pybind11Extension(f"uva.{tgt}",
                        glob.glob(os.path.join(f"src/uva/{tgt}", "*.cpp")),
                        cxx_std=17,
                        # Example: passing in the version to the compiled code
                        define_macros=[('VERSION_INFO', __version__)],
                        ) for tgt in filter(lambda x: os.path.isdir(os.path.join("src/uva", x)),
                                            os.listdir("src/uva"))],
    *[Pybind11Extension(f"leetcode.{tgt}",
                        glob.glob(os.path.join(f"src/leetcode/{tgt}", "*.cpp")),
                        cxx_std=17,
                        # Example: passing in the version to the compiled code
                        define_macros=[('VERSION_INFO', __version__)],
                        ) for tgt in filter(lambda x: os.path.isdir(os.path.join("src/leetcode", x)),
                                            os.listdir("src/leetcode"))]
]

setup(
    name="algorithm",
    version=__version__,
    author="Yi-cheng",
    author_email="z2x98653322@gmail.com",
    # url="https://github.com/pybind/python_example",
    description="A repo for practicing algorithms",
    long_description="",
    ext_package="algorithm",
    ext_modules=ext_modules,
    extras_require={"tests": "pytest"},
    # Currently, build_ext only provides an optional "highest supported C++
    # level" feature, but in the future it may provide more features.
    zip_safe=False,
    python_requires=">=3.7",
)
