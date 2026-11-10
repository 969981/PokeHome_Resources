/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0017f87c; name: FUN_.text__0017f87c
 */


void FUN__text__0017f87c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_8;
  
  *(undefined4 *)(param_1 + 0x648) = 5;
  local_8 = 0x598d0e60e0a45d28;
  lVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_8);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  }
  uVar1 = 0x71b5cf;
  if (*(int *)(*(long *)(param_1 + 0x640) + 4) != 2) {
    uVar1 = 0x710294;
  }
  FUN__text__0012c300(param_1 + 0x110,uVar1);
  return;
}


