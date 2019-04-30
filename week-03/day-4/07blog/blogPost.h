//
// Created by Kata on 2019. 04. 30..
//

#ifndef INC_07BLOG_BLOGPOST_H
#define INC_07BLOG_BLOGPOST_H


#include <iostream>

class BlogPost {
public:
    BlogPost(std::string authorName, std::string title, std::string text, std::string publicationDate);

    void setAuthorName(const std::string &authorName);
    void setTitle(const std::string &title);
    void setText(const std::string &text);
    void setPublicationDate(const std::string &publicationDate);

    const std::string &getAuthorName() const;
    const std::string &getTitle() const;
    const std::string &getText() const;
    const std::string &getPublicationDate() const;

private:
    std::string _authorName;
    std::string _title;
    std::string _text;
    std::string _publicationDate;
};


#endif //INC_07BLOG_BLOGPOST_H
