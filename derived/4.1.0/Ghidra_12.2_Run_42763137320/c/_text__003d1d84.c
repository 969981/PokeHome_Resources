/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d1d84; name: FUN_.text__003d1d84
 */


void FUN__text__003d1d84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_60 [24];
  long local_48;
  long local_28;
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    uVar1 = FUN__text__005d5edc(param_1[3],*(undefined4 *)(param_1 + 0x4a));
    plVar3 = (long *)*param_1;
    FUN__text__00109fd4(&local_28,uVar1);
    uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,0x200,0x10);
    uVar5 = tpidr_el0;
    uVar5 = uVar5 & 0xffffffffffffe000;
    if (*(long *)(uVar5 + 0x98) == 0x10) goto LAB__text__003d1f64;
    *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = plVar3;
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
    FUN__text__005e9290(auStack_60,&local_28);
    FUN__text__005d4c20(uVar1,param_1 + 2,auStack_60);
  }
  else {
    FUN__text__003d1f68(param_1);
    uVar1 = FUN__text__005d601c(param_1[0x49],*(undefined4 *)(param_1 + 0x4a));
    plVar3 = (long *)*param_1;
    FUN__text__00109fd4(&local_28,uVar1);
    uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,0x200,0x10);
    uVar5 = tpidr_el0;
    uVar5 = uVar5 & 0xffffffffffffe000;
    if (*(long *)(uVar5 + 0x98) == 0x10) {
LAB__text__003d1f64:
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = plVar3;
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
    FUN__text__005e9290(auStack_60,&local_28);
    FUN__text__005d4e98(uVar1,param_1 + 0x48,auStack_60);
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
  lVar4 = param_1[0x4b];
  param_1[0x4b] = uVar1;
  if (lVar4 != 0) {
    FUN__text__0014821c(lVar4);
    (**(code **)(*(long *)param_1[0x4c] + 0x18))
              ((long *)param_1[0x4c],lVar4,param_1[0x4d],param_1[0x4e]);
  }
  param_1[0x4c] = plVar3;
  param_1[0x4d] = 0x200;
  param_1[0x4e] = 0x10;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  param_1[0x50] = 0xffffffffffffffff;
  puVar2 = (undefined8 *)FUN__text__005d54d0(param_1[0x4b]);
  param_1[0x50] = *puVar2;
  return;
}


