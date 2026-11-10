/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d01d0; name: FUN_.text__003d01d0
 */


void FUN__text__003d01d0(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    lVar1 = *(long *)(param_1 + 0x128);
  }
  else {
    FUN__text__005d9290(*(long *)(param_1 + 0x18),param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0x128);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x128) = 0;
    lVar1 = *(long *)(param_1 + 0x238);
  }
  else {
    FUN__text__005d9290(lVar1,param_1 + 0x120);
    lVar1 = *(long *)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x128) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0x238);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x238) = 0;
  }
  else {
    FUN__text__005d9290(lVar1,param_1 + 0x230);
    lVar1 = *(long *)(param_1 + 0x238);
    *(undefined8 *)(param_1 + 0x238) = 0;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x003d025c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


