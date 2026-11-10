/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048f274; name: FUN_.text__0048f274
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0048f274(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (DAT_00aea8f0 == '\0') {
    return (long *)0x0;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x50);
  if (((lVar6 == 0) || (iVar1 = FUN__text__00478e4c(param_1), iVar1 != *(int *)(lVar6 + 0x28))) ||
     (plVar3 = (long *)FUN__text__00400f80(0,0x10), plVar3 == (long *)0x0)) {
    lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x38);
    if (lVar6 != 0) {
      uVar2 = FUN__text__00478e4c(param_1);
      uVar4 = FUN__text__00491290(lVar6,uVar2);
      if (((uVar4 & 1) != 0) &&
         (plVar3 = (long *)FUN__text__00400f80(0,0x10), plVar3 != (long *)0x0)) {
        lVar6 = _DAT_008a4c28;
        goto LAB__text__0048f314;
      }
    }
    if ((*(byte *)(param_1 + 0x170) >> 3 & 1) == 0) {
      return (long *)0x0;
    }
    if ((*(ushort *)(param_1 + 0x19c) & 7) == 2) {
      return (long *)0x0;
    }
    plVar3 = (long *)FUN__text__00400f80(0,0x20);
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar3[2] = 0;
    plVar3[3] = 0;
    puVar5 = (undefined8 *)&DAT_00889d18;
    *(undefined8 *)((long)plVar3 + 0x17) = 0;
  }
  else {
    lVar6 = _DAT_008a4c20;
LAB__text__0048f314:
    puVar5 = (undefined8 *)(lVar6 + 0x10);
  }
  *plVar3 = (long)puVar5;
  plVar3[1] = 0;
  iVar1 = (*(code *)*puVar5)(plVar3,param_1);
  if (iVar1 == 1) {
    return plVar3;
  }
  (**(code **)(*plVar3 + 8))(plVar3);
  FUN__text__00400fc0(0,plVar3);
  return (long *)0x0;
}


