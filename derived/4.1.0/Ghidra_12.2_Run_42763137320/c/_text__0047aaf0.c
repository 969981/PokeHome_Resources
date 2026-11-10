/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047aaf0; name: FUN_.text__0047aaf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0047aaf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
                        undefined8 param_5)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  puVar7 = _DAT_008a4768;
  piVar6 = _DAT_008a3828;
  plVar8 = param_4;
  if (*(char *)((long)param_4 + 0xe1) == '\0') {
    plVar8 = (long *)*_DAT_008a4768;
    if (plVar8 == (long *)0x0) {
      lVar1 = _DAT_008a3f88 + 0x10;
      do {
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)FUN__text__00400f80(4,0xf0);
          if (plVar8 != (long *)0x0) {
            plVar8[1] = 0;
            plVar8[2] = 0;
            piVar3 = *(int **)(piVar6 + 2);
            lVar4 = *(long *)(piVar6 + 4);
            iVar5 = *piVar6;
            plVar8[3] = (long)piVar3;
            *(long **)(piVar6 + 2) = plVar8;
            piVar2 = piVar6;
            if (lVar4 != 0) {
              piVar2 = piVar3;
            }
            *(long **)(piVar2 + 4) = plVar8;
            *(undefined2 *)(plVar8 + 0x1c) = 0x101;
            plVar8[8] = 0;
            plVar8[9] = 0;
            plVar8[0xc] = 0;
            plVar8[0xd] = 0;
            *piVar6 = iVar5 + 1;
            *plVar8 = lVar1;
            plVar8[0x12] = 0;
            plVar8[0x13] = 0;
            plVar8[0x16] = 0;
            plVar8[0x17] = 0;
            plVar8[0x1a] = 0;
            plVar8[0x1b] = 0;
          }
          *puVar7 = plVar8;
        }
      } while (*(char *)((long)plVar8 + 0xe1) == '\0');
    }
    else if (*(char *)((long)plVar8 + 0xe1) == '\0') {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  puVar7 = _DAT_008a4768;
  piVar6 = _DAT_008a3828;
  if ((char)param_4[0x1c] == '\0') {
    param_4 = (long *)*_DAT_008a4768;
    if (param_4 == (long *)0x0) {
      lVar1 = _DAT_008a3f88 + 0x10;
      do {
        if (param_4 == (long *)0x0) {
          param_4 = (long *)FUN__text__00400f80(4,0xf0);
          if (param_4 != (long *)0x0) {
            param_4[1] = 0;
            param_4[2] = 0;
            piVar3 = *(int **)(piVar6 + 2);
            lVar4 = *(long *)(piVar6 + 4);
            iVar5 = *piVar6;
            param_4[3] = (long)piVar3;
            *(long **)(piVar6 + 2) = param_4;
            piVar2 = piVar6;
            if (lVar4 != 0) {
              piVar2 = piVar3;
            }
            *(long **)(piVar2 + 4) = param_4;
            *(undefined2 *)(param_4 + 0x1c) = 0x101;
            param_4[8] = 0;
            param_4[9] = 0;
            param_4[0xc] = 0;
            param_4[0xd] = 0;
            *piVar6 = iVar5 + 1;
            *param_4 = lVar1;
            param_4[0x12] = 0;
            param_4[0x13] = 0;
            param_4[0x16] = 0;
            param_4[0x17] = 0;
            param_4[0x1a] = 0;
            param_4[0x1b] = 0;
          }
          *puVar7 = param_4;
        }
      } while ((char)param_4[0x1c] == '\0');
    }
    else if ((char)param_4[0x1c] == '\0') {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  FUN__text__0044bf10(param_1,param_2,param_3,plVar8 + 0xe,param_5,param_4 + 10);
  return;
}


