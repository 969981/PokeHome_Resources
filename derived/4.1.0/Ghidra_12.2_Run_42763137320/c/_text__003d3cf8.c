/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d3cf8; name: FUN_.text__003d3cf8
 */


void FUN__text__003d3cf8(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    FUN__text__005d9290(*(long *)(param_1 + 0x68),param_1 + 0x60);
    lVar1 = *(long *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x003d3d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


