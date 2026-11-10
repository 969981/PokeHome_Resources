/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049e7d0; name: FUN_.text__0049e7d0
 */


long * FUN__text__0049e7d0(long param_1,undefined4 param_2,ulong param_3)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 uStack_41;
  
  puVar1 = (ushort *)(param_1 + 0x13d);
  if ((*puVar1 >> 7 & 1) != 0) {
    if (*(long **)(param_1 + 0x120) != (long *)0x0) {
      return *(long **)(param_1 + 0x120);
    }
    plVar5 = (long *)FUN__text__00400f80(0,0x38);
    if (plVar5 != (long *)0x0) {
      FUN__text__004cd54c(plVar5,param_2);
      iVar3 = FUN__text__004cd580(plVar5,*(undefined2 *)(param_1 + 0x13a));
      if (iVar3 != 1) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        *(undefined8 *)(param_1 + 0x120) = 0;
        return (long *)0x0;
      }
      if ((*puVar1 >> 3 & 1) != 0) {
        uVar4 = (**(code **)(**(long **)(param_1 + 0x108) + 0x68))();
        *(undefined4 *)(plVar5 + 1) = uVar4;
        *(undefined4 *)((long)plVar5 + 0xc) = uVar4;
      }
    }
    *(long **)(param_1 + 0x120) = plVar5;
    return plVar5;
  }
  uVar6 = *(uint *)(param_1 + 0x118);
  if (uVar6 != 0) {
    lVar7 = *(long *)(param_1 + 0x110);
    iVar3 = 0;
    do {
      uVar2 = iVar3 + (uVar6 >> 1);
      uVar8 = *(ulong *)(lVar7 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4))
      ;
      if (uVar8 == param_3) {
        return *(long **)(lVar7 + (long)(int)uVar2 * 0x10 + 8);
      }
      if (uVar8 < param_3) {
        iVar3 = uVar2 + 1;
      }
      uVar2 = uVar6 - (uVar8 < param_3);
      uVar6 = uVar2 >> 1;
    } while (1 < uVar2);
  }
  plVar5 = (long *)FUN__text__00400f80(0,0x38);
  if (plVar5 == (long *)0x0) {
    return (long *)0x0;
  }
  FUN__text__004cd54c(plVar5,param_2);
  iVar3 = FUN__text__004cd580(plVar5,*(undefined2 *)(param_1 + 0x13a));
  if (iVar3 != 1) goto LAB__text__0049e9b0;
  if ((*puVar1 >> 3 & 1) != 0) {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x108) + 0x68))();
    *(undefined4 *)(plVar5 + 1) = uVar4;
    *(undefined4 *)((long)plVar5 + 0xc) = uVar4;
  }
  plVar9 = *(long **)(param_3 + 0x28);
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)FUN__text__00400f80(4,0x48);
    if (plVar9 == (long *)0x0) goto LAB__text__0049e9b0;
    FUN__text__0044a854();
    *(long **)(param_3 + 0x28) = plVar9;
    plVar9[1] = param_3;
    iVar3 = (**(code **)(*plVar9 + 0x10))(plVar9,*(undefined8 *)(param_3 + 0x58));
    if (iVar3 != 1) {
      (**(code **)*plVar9)(plVar9);
      FUN__text__00400fc0(4,plVar9);
      *(undefined8 *)(param_3 + 0x28) = 0;
      goto LAB__text__0049e9b0;
    }
  }
  iVar3 = FUN__text__0044ac30(plVar9,param_1);
  if ((iVar3 == 1) &&
     (lVar7 = FUN__text__004a0d30((long *)(param_1 + 0x110),param_3,&uStack_41), lVar7 != 0)) {
    *(long **)(lVar7 + 8) = plVar5;
    return plVar5;
  }
LAB__text__0049e9b0:
  (**(code **)(*plVar5 + 0x10))(plVar5);
  return (long *)0x0;
}


