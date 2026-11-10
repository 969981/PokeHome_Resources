/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ed1f0; name: FUN_.text__004ed1f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004ed1f0(long param_1,long param_2,int param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar1 = _DAT_008a5110 + 0x10;
    lVar5 = *(long *)(param_1 + 0x30);
    do {
      lVar8 = *(long *)(lVar5 + 8);
      if ((((*(byte *)(lVar5 + 0x5a) & 0xe) == 0) &&
          (*(long *)(lVar5 + 0x80) == *(long *)(param_2 + 0x50))) &&
         (uVar4 = FUN__text__004edb20(param_2,*(undefined4 *)(lVar5 + 0x88)), (uVar4 & 1) == 0)) {
        plVar7 = *(long **)(param_1 + 0x70);
        if (plVar7 != (long *)0x0) {
          plVar6 = (long *)0x0;
          do {
            while ((iVar3 = (**(code **)(*plVar7 + 0x10))(plVar7), iVar3 == 1 &&
                   (plVar7[3] == lVar5))) {
              if ((int)plVar7[2] <= param_3) goto LAB__text__004ed250;
              plVar9 = (long *)plVar7[1];
              plVar2 = (long *)(param_1 + 0x70);
              if (*(long **)(param_1 + 0x70) != plVar7) {
                plVar2 = plVar6 + 1;
              }
              *plVar2 = (long)plVar9;
              if (*(long **)(param_1 + 0x68) == plVar7) {
                *(long **)(param_1 + 0x68) = plVar6;
              }
              (**(code **)*plVar7)(plVar7);
              FUN__text__00400fc0(0,plVar7);
              plVar7 = plVar9;
              if (plVar9 == (long *)0x0) goto LAB__text__004ed328;
            }
            plVar2 = plVar7 + 1;
            plVar6 = plVar7;
            plVar7 = (long *)*plVar2;
          } while ((long *)*plVar2 != (long *)0x0);
        }
LAB__text__004ed328:
        plVar7 = (long *)FUN__text__00400f80(0,0x30);
        if (plVar7 != (long *)0x0) {
          *(int *)(plVar7 + 2) = param_3;
          plVar7[3] = lVar5;
          *plVar7 = lVar1;
          lVar5 = *param_4;
          *(int *)(plVar7 + 5) = (int)param_4[1];
          plVar7[4] = lVar5;
          FUN__text__004ed750(param_1 + 0x60,plVar7);
        }
      }
LAB__text__004ed250:
      lVar5 = lVar8;
    } while (lVar8 != 0);
  }
  return;
}


