/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f1ea4; name: FUN_.text__004f1ea4
 */


undefined8 FUN__text__004f1ea4(long param_1)

{
  ulong uVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = FUN__text__004f132c(*(undefined8 *)(param_1 + 0x398),param_1,&local_4,&local_8);
  if ((uVar1 & 1) == 0) {
    return 2;
  }
  *(undefined4 *)(param_1 + 0x330) = local_4;
  *(undefined4 *)(param_1 + 0x30c) = local_8;
  *(uint *)(param_1 + 0x313) = *(uint *)(param_1 + 0x313) & 0xfe3fffff | 0x400000;
  return 1;
}


