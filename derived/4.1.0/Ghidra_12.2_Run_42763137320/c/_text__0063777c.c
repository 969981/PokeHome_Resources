/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063777c; name: FUN_.text__0063777c
 */


uint FUN__text__0063777c(void *param_1)

{
  uint uVar1;
  undefined1 auStack_188 [32];
  undefined1 auStack_168 [328];
  
  memcpy(auStack_168,param_1,0x148);
  FUN__text__00641210(auStack_188);
  FUN__text__00641254(auStack_188,auStack_168,0);
  uVar1 = FUN__text__00641264(auStack_188);
  FUN__text__0064122c(auStack_188);
  return uVar1 & 1;
}


