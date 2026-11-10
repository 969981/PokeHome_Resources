/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0017f55c; name: FUN_.text__0017f55c
 */


void FUN__text__0017f55c(long param_1)

{
  long lVar1;
  undefined8 local_8;
  
  *(undefined4 *)(param_1 + 0x648) = 2;
  local_8 = 0x598d0e60e0a45d28;
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_8);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  }
  FUN__text__0012c300(param_1 + 0x110,0x710294);
  return;
}


