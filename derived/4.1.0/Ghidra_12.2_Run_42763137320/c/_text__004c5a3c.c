/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c5a3c; name: FUN_.text__004c5a3c
 */


void FUN__text__004c5a3c(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 3);
  if (((uVar1 & 0x7c) == 4) && (*(long *)(param_1 + 4) != 0)) {
    FUN__text__00400fc0(0);
    uVar1 = *(ushort *)(param_1 + 3);
  }
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0xffffffff;
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 1) = 0xffffffff;
  *(ushort *)(param_1 + 3) = uVar1 & 0xf800 | 8;
  return;
}


