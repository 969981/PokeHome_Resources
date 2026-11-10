/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fd48c; name: FUN_.text__005fd48c
 */


undefined4 FUN__text__005fd48c(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_30 [16];
  
  if (param_1 < 0x725) {
    FUN__text__005fd06c(auStack_30,param_1);
    uVar1 = FUN__text__005fd0b8(auStack_30,param_2);
    FUN__text__005fd0b4(auStack_30);
    return uVar1;
  }
  return 0;
}


