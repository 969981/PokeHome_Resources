/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004eb068; name: FUN_.text__004eb068
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__004eb068(long param_1,long param_2,long param_3,undefined4 *param_4,long param_5,
                   undefined4 param_6,uint param_7)

{
  long *plVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar6 = (long *)FUN__text__00400f80(0,0x38);
  if (plVar6 != (long *)0x0) {
    plVar6[1] = 0;
    *(undefined4 *)(plVar6 + 6) = 1;
    plVar7 = (long *)FUN__text__00400f80(0,0x28);
    lVar8 = _DAT_008a5008;
    if (plVar7 != (long *)0x0) {
      *(undefined4 *)(plVar7 + 3) = 0;
      plVar7[4] = 0;
      *plVar7 = lVar8 + 0x10;
      *(undefined4 *)(plVar6 + 2) = *param_4;
      uVar2 = param_4[1];
      plVar6[3] = param_5;
      *(undefined4 *)((long)plVar6 + 0x14) = uVar2;
      auVar3 = SEXT816((long)((ulong)*_DAT_008a4b68 * (long)(int)param_4[4])) *
               SEXT816(0x20c49ba5e353f7cf);
      *(int *)(plVar6 + 4) = (int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f);
      *(undefined4 *)((long)plVar6 + 0x24) = param_6;
      if (param_3 != 0) {
        *(long *)(param_3 + 0x68) = param_5;
        *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + 1;
        lVar8 = plVar6[1];
        plVar6[1] = param_3;
        if (lVar8 != 0) {
          FUN__text__004eb980();
        }
        lVar8 = FUN__text__004f6038(param_3,0);
        if (lVar8 == 0) {
          iVar5 = 0;
        }
        else {
          iVar4 = FUN__text__004f4810();
          iVar5 = FUN__text__004f47f4(lVar8);
          iVar5 = iVar5 + iVar4;
        }
        *(int *)(plVar6 + 5) = iVar5;
      }
      if ((param_7 & 1) == 0) {
        *(undefined1 *)((long)plVar6 + 0x2c) = 0;
        lVar8 = *(long *)(param_1 + 0x40);
      }
      else {
        *(bool *)((long)plVar6 + 0x2c) = param_4[5] != 0;
        lVar8 = *(long *)(param_1 + 0x40);
      }
      if (lVar8 == 0) {
        *(long **)(param_1 + 0x40) = plVar6;
        *plVar6 = 0;
      }
      else {
        *plVar6 = lVar8;
        *(long **)(param_1 + 0x40) = plVar6;
      }
      plVar1 = (long *)(param_2 + 0x108);
      lVar8 = FUN__text__004f6970(param_2,0);
      lVar8 = FUN__text__004f52d4(plVar1,param_5 - lVar8);
      plVar7[1] = lVar8;
      *(int *)(plVar6 + 6) = (int)plVar6[6] + 1;
      lVar8 = plVar7[4];
      plVar7[4] = (long)plVar6;
      if ((lVar8 == 0) ||
         (iVar5 = *(int *)(lVar8 + 0x30) + -1, *(int *)(lVar8 + 0x30) = iVar5, iVar5 != 0)) {
        lVar8 = *plVar1;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      else {
        lVar9 = *(long *)(lVar8 + 8);
        *(undefined8 *)(lVar8 + 8) = 0;
        if ((lVar9 != 0) && (FUN__text__004eb980(), *(long *)(lVar8 + 8) != 0)) {
          FUN__text__004eb980();
          *(undefined8 *)(lVar8 + 8) = 0;
        }
        FUN__text__00400fc0(0,lVar8);
        lVar8 = *plVar1;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      if (lVar9 == 0) {
        *(long **)(lVar8 + 0x10) = plVar7;
        plVar7[2] = 0;
        return 1;
      }
      plVar7[2] = lVar9;
      *(long **)(lVar8 + 0x10) = plVar7;
      return 1;
    }
    iVar5 = (int)plVar6[6] + -1;
    *(int *)(plVar6 + 6) = iVar5;
    if (iVar5 == 0) {
      lVar8 = plVar6[1];
      plVar6[1] = 0;
      if ((lVar8 != 0) && (FUN__text__004eb980(), plVar6[1] != 0)) {
        FUN__text__004eb980();
        plVar6[1] = 0;
      }
      FUN__text__00400fc0(0,plVar6);
    }
  }
  return 2;
}


