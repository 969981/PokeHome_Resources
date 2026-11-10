/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ffa40; name: FUN_.text__004ffa40
 */


void FUN__text__004ffa40(long param_1)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  plVar3 = *(long **)(param_1 + 0x18);
  plVar4 = plVar3;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      if (((long *)plVar4[2] != (long *)0x0) && ((*(uint *)(*plVar4 + 0x30) & 0xfffffffd) != 1)) {
        (**(code **)(*(long *)plVar4[2] + 0x10))();
      }
      plVar4[2] = 0;
      plVar4 = plVar4 + 3;
      plVar3 = *(long **)(param_1 + 0x18);
    } while (plVar4 != plVar3 + (ulong)*(uint *)(param_1 + 0x20) * 3);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (plVar3 != (long *)0x0) {
    FUN__text__00400fc0(0,plVar3);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  lVar5 = *(long *)(param_1 + 0x38);
  lVar7 = lVar5;
  if (*(int *)(param_1 + 0x40) != 0) {
    do {
      (**(code **)(**(long **)(lVar7 + 8) + 0x10))();
      lVar5 = *(long *)(param_1 + 0x38);
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != lVar5 + (ulong)*(uint *)(param_1 + 0x40) * 0x18);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (lVar5 != 0) {
    FUN__text__00400fc0(0,lVar5);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x48);
  lVar7 = 0;
  if (puVar6 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x50) != 0) {
      lVar7 = (ulong)*(uint *)(param_1 + 0x50) << 4;
      do {
        piVar2 = (int *)*puVar6;
        if ((piVar2 != (int *)0x0) && (iVar1 = *piVar2, *piVar2 = iVar1 + -1, iVar1 + -1 == 0)) {
          FUN__text__00400fc0(*(undefined4 *)((long)puVar6 + 0xc),*puVar6);
        }
        *puVar6 = 0;
        lVar7 = lVar7 + -0x10;
        *(undefined4 *)(puVar6 + 1) = 0;
        puVar6 = puVar6 + 2;
      } while (lVar7 != 0);
      puVar6 = *(undefined8 **)(param_1 + 0x48);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN__text__00400fc0(0,puVar6);
    lVar7 = *(long *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  lVar5 = lVar7;
  if (*(int *)(param_1 + 0x40) != 0) {
    do {
      (**(code **)(**(long **)(lVar5 + 8) + 0x10))();
      lVar7 = *(long *)(param_1 + 0x38);
      lVar5 = lVar5 + 0x18;
    } while (lVar5 != lVar7 + (ulong)*(uint *)(param_1 + 0x40) * 0x18);
  }
  if (lVar7 != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN__text__00400fc0(0,lVar7);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return;
}


