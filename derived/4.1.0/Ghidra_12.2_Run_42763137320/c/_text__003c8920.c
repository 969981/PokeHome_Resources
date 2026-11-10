/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c8920; name: FUN_.text__003c8920
 */


void FUN__text__003c8920(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if ((param_2 != 0) && (*(long *)(param_1 + 0x188) != 0)) {
    lVar2 = *(long *)(param_1 + 0x188) << 4;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x180) + 8);
    do {
      FUN__text__005c60c0(param_2,*puVar1);
      lVar2 = lVar2 + -0x10;
      puVar1 = puVar1 + 2;
    } while (lVar2 != 0);
  }
  return;
}


