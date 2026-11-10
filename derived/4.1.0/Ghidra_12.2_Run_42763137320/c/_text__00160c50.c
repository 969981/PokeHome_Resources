/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00160c50; name: FUN_.text__00160c50
 */


undefined8
FUN__text__00160c50(undefined8 param_1,short *param_2,undefined8 param_3,long param_4,int param_5,
                   int param_6,undefined4 param_7)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  long *plVar4;
  short *psVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  plVar4 = (long *)FUN__text__006bf32c(param_3);
  if ((plVar4 == (long *)0x0) || (iVar3 = (**(code **)(*plVar4 + 0x48))(), iVar3 == 2)) {
    if (param_5 - 2U < 9) {
      lVar7 = *(long *)((long)(int)(param_5 - 2U) * 8 + 0x725258);
    }
    else {
      lVar7 = 0;
    }
    lVar7 = *(long *)(DAT_008e1550 + lVar7 * 0x20 + (long)param_6 * 8 + 0x1c0);
    if (lVar7 != 0) {
      plVar4 = (long *)(lVar7 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    uVar10 = 0;
    lVar8 = lVar7;
    if ((*param_2 != 0) && (0 < param_4)) {
      psVar1 = param_2 + param_4;
      uVar10 = 0;
      do {
        psVar5 = (short *)FUN__text__005f3780(param_2);
        if (param_2 == psVar5) {
          uVar6 = FUN__text__00157154(*param_2);
          if ((uVar6 & 1) == 0) {
            uVar6 = FUN__text__00157130(*param_2,0);
            if ((uVar6 & 1) == 0) {
              FUN__text__00162550(lVar8,*param_2,param_7);
              uVar10 = 1;
              lVar9 = lVar8;
            }
            else {
              iVar3 = FUN__text__0015711c(*param_2);
              if (iVar3 - 2U < 9) {
                lVar9 = *(long *)(DAT_008e1550 +
                                  *(long *)((long)(int)(iVar3 - 2U) * 8 + 0x725258) * 0x20 +
                                  (long)param_6 * 8 + 0x1c0);
              }
              else {
                lVar9 = *(long *)(DAT_008e1550 + (long)param_6 * 8 + 0x1c0);
              }
              if (lVar9 != 0) {
                (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
              }
              if (lVar8 != 0) {
                (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
              }
            }
          }
          else {
            if (lVar7 != 0) {
              (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))((long *)(lVar7 + 0x48));
            }
            lVar9 = lVar7;
            if (lVar8 != 0) {
              (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
            }
          }
          sVar2 = param_2[1];
          param_2 = param_2 + 1;
          lVar8 = lVar9;
        }
        else {
          sVar2 = *psVar5;
          param_2 = psVar5;
        }
      } while ((sVar2 != 0) && (param_2 < psVar1));
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}


