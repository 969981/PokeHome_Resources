/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a6c80; name: FUN_.text__004a6c80
 */


int FUN__text__004a6c80(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *__dest;
  
  iVar3 = *(int *)(param_2 + 2) + -1;
  *(int *)(param_2 + 2) = iVar3;
  if (iVar3 != 0) {
    return iVar3;
  }
  uVar8 = (ulong)*(uint *)(param_2 + 1);
  if (*(uint *)(param_2 + 1) != 0) {
    puVar9 = (undefined8 *)*param_2;
    __dest = puVar9;
    do {
      while (*(char *)((long)__dest + 0xc) != '\x01') {
        __dest = __dest + 3;
        if (__dest == puVar9 + uVar8 * 3) goto LAB__text__004a6d3c;
      }
      FUN__text__00400fc0(*(undefined4 *)(__dest + 2),*__dest);
      uVar8 = (ulong)(*(int *)(param_2 + 1) - 1);
      puVar9 = (undefined8 *)*param_2;
      if (__dest < puVar9 + uVar8 * 3) {
        memmove(__dest,__dest + 3,(ulong)(uint)((int)(puVar9 + uVar8 * 3) - (int)__dest));
        uVar8 = (ulong)(*(int *)(param_2 + 1) - 1);
        puVar9 = (undefined8 *)*param_2;
      }
      *(int *)(param_2 + 1) = (int)uVar8;
    } while (__dest != puVar9 + uVar8 * 3);
LAB__text__004a6d3c:
    if (*(int *)(param_2 + 2) != 0) {
      return *(int *)(param_2 + 2);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x98);
  if (uVar1 != 0) {
    uVar2 = *(uint *)((long)param_2 + 0x14);
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = uVar2 / uVar1;
    }
    uVar8 = (ulong)(uVar2 - uVar4 * uVar1);
    plVar6 = (long *)(*(long *)(param_1 + 0x90) + uVar8 * 8);
    plVar5 = (long *)0;
    do {
      lVar7 = (long)plVar5;
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return 0;
      }
      plVar5 = plVar6;
    } while (*(uint *)(plVar6 + 1) != uVar2);
    FUN__text__004ad290(param_1 + 0x88,uVar8,plVar6,lVar7);
  }
  return 0;
}


