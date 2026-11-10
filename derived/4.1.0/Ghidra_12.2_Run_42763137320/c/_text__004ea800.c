/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ea800; name: FUN_.text__004ea800
 */


void FUN__text__004ea800(long param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong local_70;
  undefined4 local_68;
  
  plVar5 = (long *)(param_1 + 0x40);
  plVar6 = (long *)*plVar5;
  if (plVar6 != (long *)0x0) {
    plVar8 = (long *)0x0;
    do {
      lVar2 = plVar6[1];
      lVar3 = plVar6[3];
      plVar7 = plVar6;
      if (lVar2 == 0) {
        plVar9 = (long *)*plVar6;
        if ((long)(lVar3 + (ulong)*(uint *)(plVar6 + 4)) < param_2) {
          plVar7 = plVar5;
          if ((long *)*plVar5 != plVar6) {
            plVar7 = plVar8;
          }
          *plVar7 = (long)plVar9;
          iVar1 = (int)plVar6[6] + -1;
          *(int *)(plVar6 + 6) = iVar1;
          if (iVar1 == 0) {
            lVar3 = plVar6[1];
            plVar6[1] = 0;
            if (lVar3 != 0) {
              FUN__text__004eb980();
              if (plVar6[1] != 0) {
                FUN__text__004eb980();
                plVar6[1] = 0;
              }
            }
            FUN__text__00400fc0(0,plVar6);
          }
          plVar7 = plVar8;
        }
      }
      else {
        lVar4 = lVar3 - *(int *)((long)plVar6 + 0x24);
        if (lVar4 < (long)(param_2 + (ulong)param_3)) {
          if (param_2 <= lVar4) {
            local_68 = 0;
            local_70 = local_70 & 0xffffffff00000000;
            FUN__text__004ebee4(plVar6[1],&local_70);
            lVar3 = plVar6[3];
            lVar2 = plVar6[1];
          }
          lVar3 = lVar3 + (int)plVar6[5];
          if ((param_2 <= lVar3) && (lVar3 < (long)(param_2 + (ulong)param_3))) {
            local_70 = 0x400000000;
            FUN__text__004ec010(lVar2,&local_70,(int)lVar3 - (int)param_2);
            lVar2 = plVar6[1];
          }
          if (((*(byte *)(lVar2 + 0x5a) & 3) != 0) && ((*(byte *)(lVar2 + 0x5a) >> 4 & 1) == 0)) {
            local_68 = CONCAT31(local_68._1_3_,1);
            local_70 = plVar6[3] + 1;
            (**(code **)(*(long *)plVar6[1] + 0xa8))((long *)plVar6[1],param_2,param_3,&local_70);
            if ((*(byte *)(plVar6[1] + 0x5a) & 0xe) != 0) {
              plVar6[1] = 0;
              FUN__text__004eb980();
            }
          }
        }
        plVar9 = (long *)*plVar6;
      }
      plVar6 = plVar9;
      plVar8 = plVar7;
    } while (plVar6 != (long *)0x0);
  }
  return;
}


