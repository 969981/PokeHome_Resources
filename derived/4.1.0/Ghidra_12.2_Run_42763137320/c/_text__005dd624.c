/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005dd624; name: FUN_.text__005dd624
 */


void FUN__text__005dd624(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *param_1 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = uVar1;
  lVar2 = *(long *)(param_2 + 0x30);
  param_1[2] = *(undefined8 *)(param_2 + 0x28);
  param_1[3] = lVar2;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005dd640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  return;
}


