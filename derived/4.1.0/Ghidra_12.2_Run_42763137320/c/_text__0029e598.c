/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029e598; name: FUN_.text__0029e598
 */


undefined8 FUN__text__0029e598(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    *(undefined4 *)(param_1 + 0x400090) = 4;
    return 1;
  }
  if ((*(byte *)(*(long *)(param_1 + 0x58) + 0x25a) & 1) == 0) {
    return 0;
  }
  FUN__text__005e8af0(*(undefined8 *)(param_1 + 0x58));
  lVar1 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  uVar2 = 4;
  if (*(int *)(param_1 + 0x400088) != 0) {
    uVar2 = 5;
  }
  *(undefined4 *)(param_1 + 0x400090) = uVar2;
  return 1;
}


