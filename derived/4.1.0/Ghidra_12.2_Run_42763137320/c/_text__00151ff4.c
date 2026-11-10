/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00151ff4; name: FUN_.text__00151ff4
 */


void FUN__text__00151ff4(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  *(undefined1 *)(param_1 + 0x10) = 1;
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 3) {
    plVar3 = (long *)(param_1 + 0x28);
    lVar1 = *plVar3;
    if (lVar1 != 0) {
LAB__text__00152054:
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      *plVar3 = 0;
      goto LAB__text__00152064;
    }
    iVar2 = 3;
  }
  else {
    if (iVar2 == 1) {
      if (*(long *)(param_1 + 0x38) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      plVar3 = (long *)(param_1 + 0x18);
      lVar1 = *plVar3;
      if (lVar1 != 0) goto LAB__text__00152054;
LAB__text__00152064:
      iVar2 = *(int *)(param_1 + 0x14);
    }
    if (5 < iVar2) {
      lVar1 = *(long *)(param_1 + 0x38);
      goto joined_r0x001520ec;
    }
  }
  *(int *)(param_1 + 0x14) = iVar2 + 1;
  lVar1 = *(long *)(param_1 + 0x38);
joined_r0x001520ec:
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


