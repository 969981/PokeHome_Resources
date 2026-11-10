/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00458600; name: FUN_.text__00458600
 */


undefined8 FUN__text__00458600(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if ((long *)*param_1 != (long *)0x0) {
    plVar3 = (long *)*param_1;
    plVar5 = (long *)0x0;
    do {
      plVar4 = (long *)*plVar3;
      plVar6 = plVar3 + 1;
      if (plVar3[1] != param_2) {
        plVar6 = plVar5;
      }
      plVar3 = plVar4;
      plVar5 = plVar6;
    } while (plVar4 != (long *)0x0);
    if (plVar6 != (long *)0x0) {
      puVar2 = *(undefined8 **)(param_4 + 8);
      goto joined_r0x0045871c;
    }
  }
  plVar3 = (long *)param_1[2];
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)FUN__text__00400f80(0,0x28);
    if (plVar3 == (long *)0x0) {
      return 2;
    }
    *(undefined1 *)(plVar3 + 4) = 0;
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *plVar3 = param_1[2];
    param_1[2] = (long)plVar3;
    puVar2 = (undefined8 *)param_1[1];
    if (puVar2 == (undefined8 *)0x0) goto LAB__text__004586d4;
LAB__text__0045869c:
    *puVar2 = plVar3;
    plVar3 = (long *)param_1[2];
  }
  else {
    puVar2 = (undefined8 *)param_1[1];
    if (puVar2 != (undefined8 *)0x0) goto LAB__text__0045869c;
LAB__text__004586d4:
    *param_1 = (long)plVar3;
  }
  param_1[1] = (long)plVar3;
  param_1[2] = *plVar3;
  *plVar3 = 0;
  *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + 1;
  plVar6 = (long *)(param_1[1] + 8);
  *plVar6 = param_2;
  *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + 1;
  *(int *)(*plVar6 + 0xd0) = *(int *)(*plVar6 + 0xd0) + 1;
  puVar2 = *(undefined8 **)(param_4 + 8);
joined_r0x0045871c:
  if (puVar2 == (undefined8 *)0x0) {
    return 1;
  }
  uVar1 = *(uint *)(plVar6 + 2);
  (**(code **)*puVar2)(puVar2,plVar6 + 1,*(undefined4 *)(*(long *)(param_2 + 0x68) + 0x10));
  if (((char)plVar6[3] == '\0') && (uVar1 < *(uint *)(plVar6 + 2))) {
    *(short *)(*plVar6 + 0xdc) = *(short *)(*plVar6 + 0xdc) + 1;
    *(undefined1 *)(plVar6 + 3) = 1;
    return 1;
  }
  return 1;
}


