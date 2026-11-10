/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00446f40; name: FUN_.text__00446f40
 */


void FUN__text__00446f40(long param_1,long *param_2,long *param_3,undefined4 param_4,uint param_5,
                        uint param_6,uint param_7)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  
  cVar1 = (char)*param_3;
  bVar2 = false;
  bVar3 = true;
  if (cVar1 != -2) {
    bVar2 = cVar1 + 0x11 < 0;
    bVar3 = cVar1 == -0x11;
  }
  if (((bVar3 || bVar2 != (cVar1 != -2 && SBORROW4((int)cVar1,-0x11))) &&
       *(char *)(param_1 + 0x50) == '\0') &&
     (plVar4 = (long *)FUN__text__00400f80(0,0x28), plVar4 != (long *)0x0)) {
    *plVar4 = param_1;
    lVar6 = *param_3;
    lVar9 = param_3[1];
    plVar4[4] = 0;
    plVar4[1] = lVar6;
    *(int *)(plVar4 + 2) = (int)lVar9;
    *(undefined4 *)((long)plVar4 + 0x14) = param_4;
    uVar5 = 0x40000000;
    if ((param_6 & 1) == 0) {
      uVar5 = 0;
    }
    uVar8 = 0x80000000;
    if ((param_7 & 1) == 0) {
      uVar8 = 0;
    }
    *(uint *)(plVar4 + 3) = uVar5 | param_5 & 0x3fffffff | uVar8;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    plVar7 = param_2 + 1;
    lVar9 = *plVar7;
    if (lVar9 == 0) {
      lVar9 = 0;
LAB__text__00447014:
      plVar4[4] = 0;
      if (lVar9 != 0) {
        plVar7 = (long *)(lVar9 + 0x20);
      }
      *plVar7 = (long)plVar4;
    }
    else {
      uVar5 = *(uint *)((long)plVar4 + 0x14);
      uVar8 = *(uint *)(lVar9 + 0x14);
      if (uVar5 < uVar8) {
        lVar6 = 0;
        lVar10 = lVar9;
      }
      else {
        lVar6 = 0;
        do {
          if ((uVar8 == uVar5) &&
             ((((*(uint *)(lVar9 + 0x18) >> 0x1e & 1) != 0 &&
               ((*(byte *)((long)plVar4 + 0x1b) >> 6 & 1) == 0)) ||
              ((-1 < (int)*(uint *)(lVar9 + 0x18) && ((int)plVar4[3] < 0)))))) {
            lVar10 = lVar9;
            break;
          }
          lVar10 = *(long *)(lVar9 + 0x20);
          if (lVar10 == 0) goto LAB__text__00447014;
          uVar8 = *(uint *)(lVar10 + 0x14);
          lVar6 = lVar9;
          lVar9 = lVar10;
        } while (uVar8 <= uVar5);
      }
      plVar4[4] = lVar10;
      param_2 = plVar7;
      if (lVar6 != 0) {
        param_2 = (long *)(lVar6 + 0x20);
      }
    }
    *param_2 = (long)plVar4;
  }
  return;
}


