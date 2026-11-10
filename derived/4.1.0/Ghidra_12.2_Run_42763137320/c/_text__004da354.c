/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004da354; name: FUN_.text__004da354
 */


void FUN__text__004da354(long param_1,long param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0xf1) = 0;
  *(uint *)(param_1 + 0x54) = (uint)uVar1;
  (**(code **)(**(long **)(param_1 + 8) + 0x40))();
  FUN__text__0041aeb4(param_1 + 0x10,
                      (*(uint *)(*(long *)(param_1 + 0xe8) + 0x313) & 0x70000000) == 0);
  if (*(short *)(param_1 + 0x92) != 0) {
    FUN__text__004da3f0(param_1,param_2);
    return;
  }
  if (*(char *)(param_1 + 0xf0) != '\0') {
    *(undefined4 *)(param_2 + 0x2c) = 0x11;
  }
  return;
}


