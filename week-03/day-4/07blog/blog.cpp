//
// Created by Kata on 2019. 04. 30..
//

#include "blog.h"

void Blog::addBlog(BlogPost blog)
{
    _blogs.push_back(blog);
}

void Blog::deletePost(int index)
{
    _blogs.erase(_blogs.begin() + (index - 1));
}

void Blog::updatePost(int index, BlogPost newBlog)
{
    _blogs.erase(_blogs.begin() + (index - 1));
    _blogs.insert(_blogs.begin() + (index - 1), newBlog);
}

void Blog::print()
{
    if (_blogs.empty()) {
        std::cout << "There is no post at the blog." << std::endl;
    } else {
        for (int i = 0; i < _blogs.size(); i++) {
            std::cout << _blogs.at(i).getAuthorName() << std::endl;
        }
    }
}
