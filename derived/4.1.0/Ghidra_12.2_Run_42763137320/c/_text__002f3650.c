/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f3650; name: FUN_.text__002f3650
 */


uint FUN__text__002f3650(long param_1,long *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 local_34;
  
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 == *(long *)(param_1 + 0x10)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    do {
      plVar3 = (long *)(lVar6 + 0x18);
      lVar6 = lVar6 + 0x20;
      lVar7 = lVar7 + *plVar3 + 4;
    } while (lVar6 != *(long *)(param_1 + 0x10));
  }
  plVar3 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
  plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
  uVar2 = (**(code **)(*plVar4 + 0x18))(plVar4,lVar7,plVar3[1]);
  if ((uVar2 & 1) != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    for (puVar8 = *(undefined4 **)(param_1 + 8); puVar8 != puVar1; puVar8 = puVar8 + 8) {
      local_34 = *puVar8;
      plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2);
      plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
      uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,4,plVar3[1]);
      if ((uVar5 & 1) != 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_34,4,0);
      }
      lVar6 = (**(code **)(*param_2 + 0x10))(param_2);
      *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 4;
      lVar7 = *(long *)(puVar8 + 2);
      lVar6 = *(long *)(puVar8 + 6);
      plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2);
      if (lVar7 != 0) {
        plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
        uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,lVar6,plVar3[1]);
        if ((uVar5 & 1) != 0) {
          (**(code **)(*plVar3 + 0x18))(plVar3,lVar7,lVar6,0);
        }
      }
      lVar7 = (**(code **)(*param_2 + 0x10))(param_2);
      *(long *)(lVar7 + 8) = *(long *)(lVar7 + 8) + lVar6;
    }
  }
  return uVar2 & 1;
}


