/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ecd40; name: FUN_.text__004ecd40
 */


void FUN__text__004ecd40(long param_1,int param_2,long param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  lVar8 = *(long *)(param_1 + 0x88);
  while( true ) {
    if (lVar8 == 0) {
      return;
    }
    if (*(long *)(lVar8 + 0x50) == param_3) break;
    lVar8 = *(long *)(lVar8 + 0x70);
  }
  plVar6 = *(long **)(param_1 + 0x70);
  if (plVar6 != (long *)0x0) {
    plVar9 = (long *)0x0;
    do {
      while (((plVar7 = plVar6, iVar4 = (**(code **)(*plVar7 + 0x10))(plVar7), iVar4 != 2 ||
              ((int)plVar7[2] < param_2)) || (plVar7[3] != lVar8))) {
        plVar6 = (long *)plVar7[1];
        plVar9 = plVar7;
        if ((long *)plVar7[1] == (long *)0x0) goto LAB__text__004ece2c;
      }
      plVar6 = (long *)plVar7[1];
      plVar1 = (long *)(param_1 + 0x70);
      if (*(long **)(param_1 + 0x70) != plVar7) {
        plVar1 = plVar9 + 1;
      }
      *plVar1 = (long)plVar6;
      if (*(long **)(param_1 + 0x68) == plVar7) {
        *(long **)(param_1 + 0x68) = plVar9;
      }
      (**(code **)*plVar7)(plVar7);
      FUN__text__00400fc0(0,plVar7);
    } while (plVar6 != (long *)0x0);
  }
LAB__text__004ece2c:
  FUN__text__004f53e0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x80));
  puVar5 = (undefined8 *)FUN__text__00400f80(0,0x28);
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  uVar2 = *(undefined4 *)(lVar8 + 0x68);
  uVar3 = *(undefined4 *)(lVar8 + 0x6c);
  *(int *)(puVar5 + 2) = param_2;
  puVar5[3] = lVar8;
  *(undefined4 *)(puVar5 + 4) = uVar3;
  *(undefined4 *)((long)puVar5 + 0x24) = uVar2;
  *puVar5 = 0x88f668;
  FUN__text__004ed750(param_1 + 0x60,puVar5);
  return;
}


