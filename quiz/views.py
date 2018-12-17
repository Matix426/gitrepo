#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  quiz.py


from flask import Flask
from flask import render_template
app = Flask(__name__)

@app.route("/")
def hello():
    #return "Witaj Świecie!"
    return render_template("index.html")
    
    
@app.route("/lista")
def lista():
    return "<h1>Witaj na serwerze</h1><h2>Aplikacja Quiz</h2>"
    
@app.route("/klasa")
def klasa():
    return "<h2>Kl3ag1</h2>"


