/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00415080; name: FUN_.text__00415080
 */


void FUN__text__00415080(int param_1,uint *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  undefined4 local_4c;
  undefined2 local_48;
  uint local_44;
  
  if (*param_2 < 0x2e && (1L << ((ulong)*param_2 & 0x3f) & 0x380000000020U) != 0) {
    uVar2 = (ulong)DAT_00aea228;
    if (DAT_00aea228 != 0) {
      plVar3 = DAT_00aea220;
      plVar6 = DAT_00aea220;
      do {
        lVar4 = *plVar6;
        iVar5 = 0;
        if (*(long *)(lVar4 + 0x68) != 0) {
          iVar5 = *(int *)(*(long *)(lVar4 + 0x68) + 0x20);
        }
        if ((iVar5 == param_1) && (*(long *)(lVar4 + 8) != 0)) {
          local_44 = param_2[1];
          local_4c = 0;
          local_48 = 0x101;
          (**(code **)(**(long **)(lVar4 + 8) + 0x20))
                    (param_2[3],param_2[4],*(long **)(lVar4 + 8),&local_4c,*param_2);
          uVar2 = (ulong)DAT_00aea228;
          plVar3 = DAT_00aea220;
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar3 + uVar2);
    }
  }
  else {
    uVar2 = (ulong)DAT_00aea228;
    if (DAT_00aea228 != 0) {
      plVar3 = DAT_00aea220;
      plVar6 = DAT_00aea220;
      do {
        lVar4 = *(long *)(*plVar6 + 0x68);
        iVar5 = 0;
        if (lVar4 != 0) {
          iVar5 = *(int *)(lVar4 + 0x20);
        }
        if ((iVar5 == param_1) && (plVar1 = *(long **)(*plVar6 + 8), plVar1 != (long *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,1,*param_2);
          uVar2 = (ulong)DAT_00aea228;
          plVar3 = DAT_00aea220;
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar3 + uVar2);
    }
  }
  return;
}


