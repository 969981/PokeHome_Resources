/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d2a78; name: FUN_.text__004d2a78
 */


undefined8 FUN__text__004d2a78(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = FUN__text__0040a740(param_1 + 0x68);
  if (lVar2 == 0) {
    return 2;
  }
  *param_2 = *(undefined4 *)(lVar2 + 0x60);
  uVar1 = *(undefined8 *)(lVar2 + 0x98);
  *param_3 = *(undefined8 *)(lVar2 + 0x90);
  *(int *)(param_3 + 1) = (int)uVar1;
  *(short *)((long)param_3 + 0xc) = (short)((ulong)uVar1 >> 0x20);
  return 1;
}


