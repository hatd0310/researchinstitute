" Add numbers to each line on the left-hand side.
set number

" Break lines at word (requires Wrap lines)
set linebreak

" Wrap-broken line prefix
set showbreak=+++

" Line wrap (number of cols)
set textwidth=100

" Highlight matching brace
set showmatch

" Enable spell-checking
set spell

" Use visual bell (no beeping)
set visualbell

" Highlight all search results
set hlsearch

" Enable smart-case search
set smartcase

" Always case-insensitive
set ignorecase

" Searches for strings incrementally
set incsearch

" Auto-indent new lines
set autoindent

" Use 'C' style program indenting
set cindent

" Number of auto-indent spaces
set shiftwidth=4

  " Enable smart-indent
set smartindent

" Enable smart-tabs
set smarttab

" Number of spaces per Tab
set softtabstop=4

" Set tab width to 4 columns.
set tabstop=4

"" Advanced
" Show row and column ruler information
set ruler

" Show tab bar
set showtabline=2

" Number of undo levels
set undolevels=1000

" Backspace behaviour
set backspace=indent,eol,start

" Disable compatibility with vi which can cause unexpected issues.
set nocompatible

" Enable type file detection. Vim will be able to try to detect the type of file in use.
filetype on

colorscheme vim

" Enable plugins and load plugin for the detected file type.
filetype plugin on

" Load an indent file for the detected file type.
filetype plugin indent on

" Turn syntax highlighting on.
syntax on

" Use space characters instead of tabs.
set expandtab

" Do not save backup files.
set nobackup

" Do not let cursor scroll below or above N number of lines when scrolling.
set scrolloff=10

 " Do not wrap lines. Allow long lines to extend as far as the line goes.
set nowrap
" Show partial command you type in the last line of the screen.
set showcmd

 " Show the mode you are on the last line.
set showmode

" Set the commands to save in history default number is 20.
set history=1000

" Enable auto completion menu after pressing TAB.
set wildmenu

 " Make wildmenu behave like similar to Bash completion.
set wildmode=list:longest

" There are certain files that we would never want to edit with Vim.
" Wildmenu will ignore files with these extensions.
set wildignore=*.docx,*.jpg,*.png,*.gif,*.pdf,*.pyc,*.exe,*.flv,*.img,*.xlsx

set encoding=UTF-8  

"Todo file
autocmd BufNewFile,BufRead *.todo set syntax=todo

" Auto remove trailing spaces
autocmd BufWritePre * %s/\s\+$//e

" Some custom style
highlight Normal guibg=NONE
highlight SignColumn guibg=NONE
highlight EasyMotionTargetDefault guifg=#ffb400
highlight WildMenu guifg=#87bb7c
highlight VertSplit guifg=#1f2329 guibg=NONE
highlight CocInfoSign guifg=#55606d
highlight LineNr guifg=#454A54
highlight DiffAdd guibg=NONE
highlight DiffAdded guibg=NONE
highlight DiffChange guibg=NONE
highlight DiffDelete guibg=NONE
highlight EndOfBuffer guifg=#282c34

" PLUGINS ---------------------------------------------------------------- {{{

call plug#begin('~/.config/nvim/plugged')


  Plug 'https://github.com/preservim/nerdtree.git'
  Plug 'https://github.com/ycm-core/YouCompleteMe.git'
  Plug 'https://github.com/xavierd/clang_complete.git'

call plug#end()

" }}}



" MAPPINGS --------------------------------------------------------------- {{{

" Mappings code goes here.

" }}}

"" https://github.com/ycm-core/YouCompleteMe.git
" Let clangd fully control code completion
let g:ycm_clangd_uses_ycmd_caching = 0
" Use installed clangd, not YCM-bundled clangd which doesn't get updates.
let g:ycm_clangd_binary_path = exepath("clangd")

" VIMSCRIPT -------------------------------------------------------------- {{{

" This will enable code folding.
" Use the marker method of folding.
augroup filetype_vim
    autocmd!
    autocmd FileType vim setlocal foldmethod=marker
augroup END

" More Vimscripts code goes here.

" }}}


" STATUS LINE ------------------------------------------------------------ {{{

" Status bar code goes here.

" }}}

