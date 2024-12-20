" VIM Configuration File
set enc=utf-8
set fenc=utf-8
set termencoding=utf-8
set nocompatible
set autoindent
set smartindent
set tabstop=4
set shiftwidth=4
set expandtab
set textwidth=80
set t_Co=256
syntax on
colorscheme industry
set number
set showmatch
"set comments=sl:/*,mb:\ *,elx:\ */
set rnu
"Remove all trailing whitespace by pressing F5
"nnoremap <F5> :let _s=@/<Bar>:%s/\s\+$//e<Bar>:let @/=_s<Bar><CR>
" type :w for remote tralling whitespace
autocmd BufWritePre * :%s/\s\+$//e
set wrap
set linebreak
" note trailing space at end of next line
set showbreak=>\ \ \
"filetype plugin indent on
filetype off                  " required
set shell=/bin/bash

call plug#begin()

" List your plugins here
Plug 'tpope/vim-sensible'
Plug 'gmarik/Vundle.vim'
" On-demand loading: loaded when the specified command is executed
Plug 'preservim/nerdtree', { 'on': 'NERDTreeToggle' }

" On-demand loading: loaded when a file with a specific file type is opened
Plug 'tpope/vim-fireplace', { 'for': 'clojure' }

call plug#end()

let $MYLOCALVIMRC = $HOME . "~/.vim/config/nvim/"
if filereadable($MYLOCALVIMRC)
    source $MYLOCALVIMRC
endif

" set runtimepath^=/home/administrator/.vim/config/nvim " runtimepath+=~/.vim/config/nvim/after
" let &packpath = &runtimepath
source /home/administrator/.vim/config/nvim/.vimrc
