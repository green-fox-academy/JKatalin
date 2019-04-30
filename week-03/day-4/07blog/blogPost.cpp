//
// Created by Kata on 2019. 04. 30..
//

#include "blogPost.h"


BlogPost::BlogPost(std::string authorName, std::string title, std::string text, std::string publicationDate)
{
    setAuthorName(authorName);
    setTitle(title);
    setText(text);
    setPublicationDate(publicationDate);
}

void BlogPost::setAuthorName(const std::string &authorName)
{
    _authorName = authorName;
}

void BlogPost::setTitle(const std::string &title)
{
    _title = title;
}

void BlogPost::setText(const std::string &text)
{
    _text = text;
}

void BlogPost::setPublicationDate(const std::string &publicationDate)
{
    _publicationDate = publicationDate;
}

const std::string &BlogPost::getAuthorName() const
{
    return _authorName;
}

const std::string &BlogPost::getTitle() const
{
    return _title;
}

const std::string &BlogPost::getText() const
{
    return _text;
}

const std::string &BlogPost::getPublicationDate() const
{
    return _publicationDate;
}