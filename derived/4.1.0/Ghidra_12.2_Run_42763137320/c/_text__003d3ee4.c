/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d3ee4; name: FUN_.text__003d3ee4
 */


void FUN__text__003d3ee4(long param_1,long param_2,int param_3)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(long *)(param_1 + 0x60) = param_2;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x70) = 1;
  if (param_3 == 1) {
    lVar1 = 1000;
  }
  else {
    if (param_3 != 0) {
      return;
    }
    lVar1 = 1000000;
  }
  *(long *)(param_1 + 0x60) = lVar1 * param_2;
  return;
}


