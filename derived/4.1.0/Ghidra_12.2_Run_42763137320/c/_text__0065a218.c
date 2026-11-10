/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065a218; name: FUN_.text__0065a218
 */


void FUN__text__0065a218(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long local_8;
  
  if (*(long *)(param_1 + 0x1c0) == 0) {
    return;
  }
  local_8 = 0;
  FUN__text__0065afa0(param_1,&local_8);
  if (local_8 < 0) {
    if ((*(long *)(param_1 + 0x1d0) == 0) && (*(int *)(param_1 + 0x1d8) == 0)) {
      return;
    }
    lVar2 = -1;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0xb0);
    if ((*(long *)(lVar2 + 0x20) == *(long *)(param_1 + 0x1d0)) &&
       (*(int *)(lVar2 + 0x28) == *(int *)(param_1 + 0x1d8))) {
      return;
    }
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(param_1 + 0x1d0) = *(long *)(lVar2 + 0x20);
    *(undefined8 *)(param_1 + 0x1d8) = uVar1;
    lVar2 = local_8;
  }
                    /* WARNING: Could not recover jumptable at 0x0065a2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x1c0))(param_1,lVar2,*(undefined8 *)(param_1 + 0x1c8));
  return;
}


