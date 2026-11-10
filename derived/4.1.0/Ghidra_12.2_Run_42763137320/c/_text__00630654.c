/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00630654; name: FUN_.text__00630654
 */


void FUN__text__00630654(void *param_1,void *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auStack_30 [16];
  
  memcpy(param_1,param_2,0x296);
  FUN__text__0060e784(auStack_30,param_1);
  lVar2 = FUN__text__0060e7e4(auStack_30);
  FUN__text__00630214(param_1);
  uVar1 = FUN__text__00630120(param_1);
  *(undefined4 *)(lVar2 + 10) = uVar1;
  FUN__text__0060e79c(auStack_30);
  return;
}


