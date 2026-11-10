/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004df2dc; name: FUN_.text__004df2dc
 */


undefined8 FUN__text__004df2dc(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_2 == 0) {
    return 1;
  }
  iVar1 = param_2 - *(uint *)(param_1 + 0xc);
  if ((param_2 < *(uint *)(param_1 + 0xc) || iVar1 == 0) ||
     (uVar2 = FUN__text__004e01a0(param_1,iVar1), (uVar2 & 1) != 0)) {
    if ((99 < *(uint *)(param_1 + 0x1c)) ||
       (uVar2 = FUN__text__004e01a0(param_1 + 0x10,100 - *(uint *)(param_1 + 0x1c)),
       (uVar2 & 1) != 0)) {
      return 1;
    }
  }
  return 0x34;
}


