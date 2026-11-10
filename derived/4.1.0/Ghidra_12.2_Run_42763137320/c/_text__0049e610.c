/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049e610; name: FUN_.text__0049e610
 */


long * FUN__text__0049e610(long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 uStack_21;
  
  if ((*(ushort *)(param_1 + 0x13d) >> 7 & 1) == 0) {
    uVar4 = *(uint *)(param_1 + 0x118);
    if (uVar4 != 0) {
      lVar5 = *(long *)(param_1 + 0x110);
      iVar2 = 0;
      do {
        uVar1 = iVar2 + (uVar4 >> 1);
        uVar6 = *(ulong *)(lVar5 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4
                                   ));
        if (uVar6 == param_2) {
          return *(long **)(lVar5 + (long)(int)uVar1 * 0x10 + 8);
        }
        if (uVar6 < param_2) {
          iVar2 = uVar1 + 1;
        }
        uVar1 = uVar4 - (uVar6 < param_2);
        uVar4 = uVar1 >> 1;
      } while (1 < uVar1);
    }
    plVar3 = (long *)FUN__text__00400f80(0,0x10);
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    FUN__text__004ce070(plVar3);
    plVar7 = *(long **)(param_2 + 0x28);
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)FUN__text__00400f80(4,0x48);
      if (plVar7 == (long *)0x0) goto LAB__text__0049e7a4;
      FUN__text__0044a854();
      *(long **)(param_2 + 0x28) = plVar7;
      plVar7[1] = param_2;
      iVar2 = (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined8 *)(param_2 + 0x58));
      if (iVar2 != 1) {
        (**(code **)*plVar7)(plVar7);
        FUN__text__00400fc0(4,plVar7);
        *(undefined8 *)(param_2 + 0x28) = 0;
        goto LAB__text__0049e7a4;
      }
    }
    iVar2 = FUN__text__0044ac30(plVar7,param_1);
    if ((iVar2 != 1) ||
       (lVar5 = FUN__text__004a0d30((long *)(param_1 + 0x110),param_2,&uStack_21), lVar5 == 0)) {
LAB__text__0049e7a4:
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return (long *)0x0;
    }
    *(long **)(lVar5 + 8) = plVar3;
  }
  else {
    plVar3 = *(long **)(param_1 + 0x120);
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)FUN__text__00400f80(0,0x10);
      if (plVar3 != (long *)0x0) {
        FUN__text__004ce070(plVar3);
      }
      *(long **)(param_1 + 0x120) = plVar3;
      return plVar3;
    }
  }
  return plVar3;
}


