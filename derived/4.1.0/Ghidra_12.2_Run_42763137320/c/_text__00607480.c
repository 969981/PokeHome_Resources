/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00607480; name: FUN_.text__00607480
 */


void FUN__text__00607480(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_40 [32];
  
  FUN__text__00646ff4(auStack_40);
  FUN__text__006470b4(auStack_40,param_1,param_2);
  uVar1 = FUN__text__006470c4(auStack_40);
  uVar2 = FUN__text__00609308();
  if (uVar1 != (uVar2 & 0xff)) {
    FUN__text__00649040(auStack_40,uVar2);
  }
  FUN__text__00647010(auStack_40);
  return;
}


