/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019a628; name: FUN_.text__0019a628
 */


void FUN__text__0019a628(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  void *__dest;
  undefined8 *puVar4;
  ulong uVar5;
  long local_80 [4];
  long *local_60;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  plVar2 = (long *)param_2[6];
  if (plVar2 == (long *)0x0) {
    uVar5 = param_2[9];
    local_60 = (long *)0x0;
    *param_1 = uVar3;
    param_1[6] = 0;
    param_1[1] = uVar1;
    param_1[8] = 0;
    param_1[9] = uVar5;
    param_1[10] = 0;
joined_r0x0019a6dc:
    if (uVar5 == 0) goto LAB__text__0019a798;
LAB__text__0019a724:
    if ((ulong)param_1[1] < uVar5) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __dest = (void *)(**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar5 * 0x1c,4);
    param_1[8] = __dest;
    param_1[10] = uVar5;
    if (local_60 == local_80) goto LAB__text__0019a7a8;
LAB__text__0019a760:
    if (local_60 == (long *)0x0) goto LAB__text__0019a7c0;
    puVar4 = (undefined8 *)(*local_60 + 0x28);
    plVar2 = local_60;
  }
  else {
    if (plVar2 == param_2 + 2) {
      local_60 = local_80;
      (**(code **)(*plVar2 + 0x18))(plVar2,local_80);
      uVar5 = param_2[9];
      *param_1 = uVar3;
      param_1[1] = uVar1;
    }
    else {
      local_60 = (long *)(**(code **)(*plVar2 + 0x10))();
      uVar5 = param_2[9];
      *param_1 = uVar3;
      param_1[1] = uVar1;
    }
    if (local_60 == (long *)0x0) {
      param_1[6] = 0;
      param_1[8] = 0;
      param_1[9] = uVar5;
      param_1[10] = 0;
    }
    else {
      if (local_60 != local_80) {
        uVar3 = (**(code **)(*local_60 + 0x10))();
        param_1[6] = uVar3;
        param_1[8] = 0;
        param_1[9] = uVar5;
        param_1[10] = 0;
        goto joined_r0x0019a6dc;
      }
      param_1[6] = param_1 + 2;
      (**(code **)(local_80[0] + 0x18))(local_80);
      param_1[8] = 0;
      param_1[9] = uVar5;
      param_1[10] = 0;
    }
    if (uVar5 != 0) goto LAB__text__0019a724;
LAB__text__0019a798:
    __dest = (void *)0x0;
    if (local_60 != local_80) goto LAB__text__0019a760;
LAB__text__0019a7a8:
    puVar4 = (undefined8 *)(local_80[0] + 0x20);
    plVar2 = local_80;
  }
  (*(code *)*puVar4)(plVar2);
  __dest = (void *)param_1[8];
LAB__text__0019a7c0:
  if (((param_2[9] != 0) && ((void *)param_2[8] != (void *)0x0)) && (__dest != (void *)0x0)) {
    memmove(__dest,(void *)param_2[8],param_2[9] * 0x1c);
  }
  return;
}


