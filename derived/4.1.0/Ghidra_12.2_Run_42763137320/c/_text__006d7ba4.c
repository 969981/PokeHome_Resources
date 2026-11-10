/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d7ba4; name: FUN_.text__006d7ba4
 */


void FUN__text__006d7ba4(long param_1,undefined8 param_2,ulong param_3)

{
  long local_8;
  
  *(undefined8 *)(param_1 + 0x98) = 0;
  if ((param_3 & 1) != 0) {
    FUN__text__006d7660(param_1);
    local_8 = param_1;
    FUN__text__006d7900(&local_8);
  }
  if (*(long *)(param_1 + 0x228) != 0) {
    *(int *)(param_1 + 0x838) = *(int *)(param_1 + 0x838) + -1;
    FUN__text__006d84e0(*(long *)(param_1 + 0x228),1);
    *(undefined8 *)(param_1 + 0x228) = 0;
  }
  if (*(long *)(param_1 + 0x6e0) != 0) {
    FUN__text__006d80f0(*(undefined8 *)(param_1 + 0x6f0),*(long *)(param_1 + 0x6e0),0);
    *(undefined8 *)(param_1 + 0x6e0) = 0;
  }
  if (*(long *)(param_1 + 0x708) != 0) {
    FUN__text__006d80f0(*(undefined8 *)(param_1 + 0x718),*(long *)(param_1 + 0x708),0);
    *(undefined8 *)(param_1 + 0x708) = 0;
  }
  if (*(long *)(param_1 + 0x728) != 0) {
    FUN__text__006d80f0(*(undefined8 *)(param_1 + 0x738),*(long *)(param_1 + 0x728),0);
    *(undefined8 *)(param_1 + 0x728) = 0;
  }
  if (*(long *)(param_1 + 0x748) != 0) {
    FUN__text__006d80f0(*(undefined8 *)(param_1 + 0x758),*(long *)(param_1 + 0x748),0);
    *(undefined8 *)(param_1 + 0x748) = 0;
  }
  if (*(long *)(param_1 + 0x768) != 0) {
    FUN__text__006d80f0(*(undefined8 *)(param_1 + 0x778),*(long *)(param_1 + 0x768),0);
    *(undefined8 *)(param_1 + 0x768) = 0;
  }
  if (*(long *)(param_1 + 0x788) != 0) {
    FUN__text__006d80f0(*(undefined8 *)(param_1 + 0x798),*(long *)(param_1 + 0x788),0);
    *(undefined8 *)(param_1 + 0x788) = 0;
  }
  FUN__text__006eafe8(param_1 + 0x7a8);
  return;
}


