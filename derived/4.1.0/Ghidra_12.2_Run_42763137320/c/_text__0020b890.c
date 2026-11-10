/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0020b890; name: FUN_.text__0020b890
 */


void FUN__text__0020b890(void *param_1)

{
  long lVar1;
  void *__src;
  
  lVar1 = FUN__text__00321ac0();
  __src = (void *)FUN__text__00323c30(*(undefined4 *)(lVar1 + 0x202a28));
  memcpy(param_1,__src,0xa0);
  return;
}


