/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0017f7f8; name: FUN_.text__0017f7f8
 */


void FUN__text__0017f7f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_8;
  
  *(undefined4 *)(param_1 + 0x648) = 4;
  FUN__text__00128ca0(param_1,1,1);
  local_8 = 0x598d0e60e0a45d28;
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_8);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  }
  uVar2 = FUN__text__0012cbe0(param_1 + 0x110,0x71f0e2);
  local_8 = 0;
  FUN__text__003a8304(uVar2,&local_8,1,0);
  return;
}


