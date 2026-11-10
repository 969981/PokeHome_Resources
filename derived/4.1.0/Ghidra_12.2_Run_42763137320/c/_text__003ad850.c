/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ad850; name: FUN_.text__003ad850
 */


void FUN__text__003ad850(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *local_f0 [2];
  long local_e0 [4];
  long *local_c0;
  long *local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80 [4];
  long *local_60;
  undefined1 **local_48 [2];
  undefined1 *local_38;
  
  local_90 = *(undefined8 *)(param_1 + 8);
  local_60 = (long *)0x0;
  uStack_88 = 0x1fffffffffffffff;
  iVar1 = FUN__text__003b8f00(param_1 + 0x788);
  FUN__text__003ae4b0(local_f0,(long)iVar1,&local_90);
  local_48[0] = &local_38;
  local_38 = (undefined1 *)local_f0;
  FUN__text__003b3330(param_1,local_48,0);
  if (local_a8 != 0) {
    lVar5 = local_a8 << 3;
    plVar2 = local_b0;
    do {
      lVar4 = *plVar2;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      FUN__text__003a14e8(lVar4,0);
      FUN__text__003a1630(lVar4);
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      plVar2 = plVar2 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if ((*(char *)(param_1 + 0x851) != '\0') &&
     (iVar1 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x50))(), iVar1 != 0)) {
    FUN__text__003a14e8(*(undefined8 *)(param_1 + 2000),1);
  }
  if (local_a8 != 0) {
    lVar5 = local_a8;
    plVar2 = local_b0;
    do {
      if (*plVar2 != 0) {
        (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
        *plVar2 = 0;
      }
      lVar5 = lVar5 + -1;
      plVar2 = plVar2 + 1;
    } while (lVar5 != 0);
  }
  if (local_a0 != 0) {
    (**(code **)(*local_f0[0] + 0x18))(local_f0[0],local_b0,local_a0 << 3,8);
  }
  plVar2 = local_e0;
  if (local_c0 == plVar2) {
    puVar3 = (undefined8 *)(local_e0[0] + 0x20);
  }
  else {
    if (local_c0 == (long *)0x0) goto LAB__text__003ad9d4;
    puVar3 = (undefined8 *)(*local_c0 + 0x28);
    plVar2 = local_c0;
  }
  (*(code *)*puVar3)(plVar2);
LAB__text__003ad9d4:
  plVar2 = local_80;
  if (local_60 == plVar2) {
    puVar3 = (undefined8 *)(local_80[0] + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) {
      return;
    }
    puVar3 = (undefined8 *)(*local_60 + 0x28);
    plVar2 = local_60;
  }
  (*(code *)*puVar3)(plVar2);
  return;
}


