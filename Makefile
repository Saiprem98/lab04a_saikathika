# Makefile for Lab04a Sai KAthika

CXX = g++

Wordcount: WordCount.cpp WordCount.h
	${CXX} WordCount.cpp WordCount.h -o Wordcount
