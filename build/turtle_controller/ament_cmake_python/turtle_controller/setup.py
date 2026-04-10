from setuptools import find_packages
from setuptools import setup

setup(
    name='turtle_controller',
    version='0.0.0',
    packages=find_packages(
        include=('turtle_controller', 'turtle_controller.*')),
)
