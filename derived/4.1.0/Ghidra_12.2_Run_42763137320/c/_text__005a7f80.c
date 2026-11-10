/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a7f80; name: FUN_.text__005a7f80
 */


void FUN__text__005a7f80(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *param_1 = *(undefined8 *)(param_2 + 0x80);
  param_1[1] = uVar1;
  lVar2 = *(long *)(param_2 + 0x98);
  param_1[2] = *(undefined8 *)(param_2 + 0x90);
  param_1[3] = lVar2;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005a7f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  return;
}


