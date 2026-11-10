/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a1ef0; name: FUN_.text__003a1ef0
 */


void FUN__text__003a1ef0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 0x1d0) = *param_2;
  *(undefined8 *)(param_1 + 0x1d8) = param_2[1];
  *(undefined8 *)(param_1 + 0x1e0) = param_2[2];
  lVar2 = param_2[3];
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x1e8);
  *(long *)(param_1 + 0x1e8) = lVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x1f0) = *param_2;
  *(undefined8 *)(param_1 + 0x1f8) = param_2[1];
  *(undefined8 *)(param_1 + 0x200) = param_2[2];
  lVar2 = param_2[3];
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x208);
  *(long *)(param_1 + 0x208) = lVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x210) = *param_2;
  *(undefined8 *)(param_1 + 0x218) = param_2[1];
  *(undefined8 *)(param_1 + 0x220) = param_2[2];
  lVar2 = param_2[3];
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x228);
  *(long *)(param_1 + 0x228) = lVar2;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a1fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  return;
}


