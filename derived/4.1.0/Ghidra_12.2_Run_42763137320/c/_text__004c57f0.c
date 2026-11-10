/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c57f0; name: FUN_.text__004c57f0
 */


void FUN__text__004c57f0(undefined8 *param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)((long)param_1 + 0xc);
  if (((uVar1 & 0x7c) == 4) && (param_1[2] != 0)) {
    FUN__text__00400fc0(0);
    uVar1 = *(ushort *)((long)param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0xffffffff00000000;
  param_1[2] = 0;
  *(ushort *)((long)param_1 + 0xc) = uVar1 & 0xf800;
  return;
}


