//
// Created by Kata on 2019. 04. 30..
//

#ifndef INC_07BLOG_BLOG_H
#define INC_07BLOG_BLOG_H

#include <vector>
#include "blogPost.h"


class Blog {
public:
    void addBlog(BlogPost blog);
    void deletePost(int index);
    void updatePost(int index, BlogPost newBlog);

    void print();

private:
    std::vector<BlogPost> _blogs;

};


#endif //INC_07BLOG_BLOG_H
