execute pathogen#infect()
syntax on
filetype plugin indent on

" Save File
nnoremap <C-s> :w<CR>

" Quick Search
nnoremap <C-f> /

" Change Tab
nnoremap <C-b> :tabNext<CR>

" Vim NerdTree
autocmd VimEnter * NERDTree | wincmd p
nnoremap <C-t> :NERDTreeToggle<CR>
autocmd bufenter * if (winnr("$") == 1 && exists("b:NERDTree") 
      \ && b:NERDTree.isTabTree()) | q | endif
set encoding=utf-8
