/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0026825c; name: FUN_.text__0026825c
 */


void FUN__text__0026825c(undefined8 *param_1,long param_2,long *param_3,long param_4,
                        undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long local_48;
  
  lVar2 = *param_3;
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_2 + 0x58);
    if (lVar2 == 0) {
      *param_3 = 0;
      local_48 = lVar2;
      goto LAB__text__002682a0;
    }
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    lVar1 = *param_3;
    *param_3 = lVar2;
    if (lVar1 == 0) goto LAB__text__0026828c;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    local_48 = *param_3;
    if (local_48 == 0) goto LAB__text__002682a0;
  }
  else {
LAB__text__0026828c:
    local_48 = lVar2;
  }
  (**(code **)(*(long *)(local_48 + 0x48) + 0x10))((long *)(local_48 + 0x48));
LAB__text__002682a0:
  FUN__text__0026836c(param_1,param_2,&local_48,param_5);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if ((param_4 != 0) || (param_4 = *(long *)(param_2 + 0x70), param_4 != 0)) {
    (**(code **)(*(long *)(param_4 + 0x48) + 0x10))();
  }
  FUN__text__00129094(param_4,*param_1);
  (**(code **)(*(long *)(param_4 + 0x48) + 0x18))((long *)(param_4 + 0x48));
  return;
}


