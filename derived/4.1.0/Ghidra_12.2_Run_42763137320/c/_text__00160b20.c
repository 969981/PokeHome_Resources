/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00160b20; name: FUN_.text__00160b20
 */


void FUN__text__00160b20(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                        undefined4 param_5,undefined4 param_6)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [8];
  
  uVar3 = FUN__text__00160c50();
  if ((uVar3 & 1) == 0) {
    return;
  }
  puVar4 = *(undefined8 **)(param_1 + 0xaf0);
  plVar5 = (long *)puVar4[8];
  lVar2 = puVar4[9];
  plVar1 = plVar5 + lVar2 * 2;
  if (lVar2 == 0) {
LAB__text__00160b8c:
    if (plVar5 != plVar1) {
      *plVar5 = param_3;
      plVar5[1] = CONCAT44(param_6,param_5);
      return;
    }
  }
  else {
    lVar6 = lVar2 << 4;
    do {
      if (*plVar5 == param_3) goto LAB__text__00160b8c;
      plVar5 = plVar5 + 2;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  local_48 = param_3;
  local_40 = param_5;
  uStack_3c = param_6;
  if (lVar2 == puVar4[10]) {
    FUN__text__00161e18(auStack_38,puVar4,plVar1,1,&local_48);
    return;
  }
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *puVar4;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  *plVar1 = param_3;
  plVar1[1] = CONCAT44(param_6,param_5);
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  puVar4[9] = puVar4[9] + 1;
  return;
}


