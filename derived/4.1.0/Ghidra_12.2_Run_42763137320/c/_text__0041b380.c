/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041b380; name: FUN_.text__0041b380
 */


undefined8 FUN__text__0041b380(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (*(short *)(param_2 + 0x12) == 0) {
    return 0x11;
  }
  uVar3 = (ulong)*(uint *)(param_1 + 0x60);
  uVar1 = *(uint *)(param_1 + 0x44);
  do {
    uVar2 = (*(code *)(&DAT_00aea288)[uVar3 * 6 + (ulong)*(byte *)(param_1 + 0x6c)])
                      (param_2,param_3,uVar1,param_1);
    uVar3 = (ulong)*(uint *)(param_1 + 0x60);
    if ((*(uint *)(param_1 + 0x60) == 2) && (0x3ff < *(uint *)(param_1 + 0x3c))) {
      *(undefined4 *)(param_1 + 0x60) = 1;
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
      uVar3 = 1;
    }
  } while ((*(short *)(param_2 + 0x12) != 0) &&
          (uVar1 = *(uint *)(param_1 + 0x44), *(ushort *)(param_3 + 0x12) < uVar1));
  return uVar2;
}


