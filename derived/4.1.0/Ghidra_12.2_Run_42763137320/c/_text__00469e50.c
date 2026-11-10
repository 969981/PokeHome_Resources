/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00469e50; name: FUN_.text__00469e50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00469e50(long param_1,long param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  
  uVar1 = *(uint *)(param_1 + 0xd2);
  plVar2 = (long *)FUN__text__00400f80(0,0x98);
  if (plVar2 == (long *)0x0) {
    return 2;
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xff;
  local_60 = 0xff;
  local_58 = 0;
  FUN__text__0046bd38(plVar2,&local_80);
  *(undefined4 *)(plVar2 + 0x12) = 0;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  lVar5 = _DAT_008a4aa0;
  *(undefined4 *)(plVar2 + 0xf) = 0;
  *plVar2 = lVar5 + 0x10;
  FUN__text__00463320(plVar2,param_1,param_2,param_4,uVar1 >> 10 & 1,uVar1 >> 0xb & 1);
  plVar6 = *(long **)(param_1 + 0x70);
  plVar3 = (long *)*plVar6;
  uVar1 = *(uint *)(plVar6 + 1);
  uVar7 = (ulong)uVar1;
  plVar4 = plVar3;
  if (uVar1 == 0) {
LAB__text__00469f3c:
    if (plVar4 != plVar3 + (ulong)uVar1 * 2) {
      plVar4 = plVar4 + 1;
      goto LAB__text__00469f98;
    }
  }
  else {
    lVar5 = uVar7 << 4;
    do {
      if (*plVar4 == param_2) goto LAB__text__00469f3c;
      plVar4 = plVar4 + 2;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  if (*(uint *)((long)plVar6 + 0xc) <= uVar1) {
    uVar7 = FUN__text__0046b870(plVar6);
    if (((uVar7 & 1) == 0) || (*(uint *)((long)plVar6 + 0xc) <= uVar1)) goto LAB__text__00469fa8;
    uVar7 = (ulong)*(uint *)(plVar6 + 1);
    plVar3 = (long *)*plVar6;
  }
  *(int *)(plVar6 + 1) = (int)uVar7 + 1;
  if (plVar3 != (long *)0x0) {
    plVar3[uVar7 * 2] = param_2;
    plVar4 = plVar3 + uVar7 * 2 + 1;
    *plVar4 = 0;
LAB__text__00469f98:
    *plVar4 = (long)plVar2;
    *param_3 = plVar4;
    return 1;
  }
LAB__text__00469fa8:
  *param_3 = 0;
  if (plVar2[0xd] != 0) {
    *(undefined4 *)(plVar2 + 0xe) = 0;
    FUN__text__00400fc0(0);
    plVar2[0xd] = 0;
    *(undefined4 *)((long)plVar2 + 0x74) = 0;
  }
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN__text__00400fc0(0,plVar2);
  return 2;
}


