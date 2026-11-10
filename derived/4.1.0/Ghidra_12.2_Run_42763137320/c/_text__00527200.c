/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00527200; name: FUN_.text__00527200
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00527200(float param_1,long param_2,long param_3,undefined4 param_4,
                        undefined8 param_5)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  puVar6 = _DAT_008a4768;
  piVar5 = _DAT_008a3828;
  plVar8 = *(long **)(param_3 + 0x10);
  if (plVar8 != (long *)0x0) {
    if (*(char *)((long)plVar8 + 0xe1) == '\0') {
      plVar8 = (long *)*_DAT_008a4768;
      if (plVar8 == (long *)0x0) {
        lVar7 = _DAT_008a3f88 + 0x10;
        do {
          if (plVar8 == (long *)0x0) {
            plVar8 = (long *)FUN__text__00400f80(4,0xf0);
            if (plVar8 != (long *)0x0) {
              plVar8[1] = 0;
              plVar8[2] = 0;
              piVar2 = *(int **)(piVar5 + 2);
              lVar3 = *(long *)(piVar5 + 4);
              iVar4 = *piVar5;
              plVar8[3] = (long)piVar2;
              *(long **)(piVar5 + 2) = plVar8;
              piVar1 = piVar5;
              if (lVar3 != 0) {
                piVar1 = piVar2;
              }
              *(long **)(piVar1 + 4) = plVar8;
              *(undefined2 *)(plVar8 + 0x1c) = 0x101;
              plVar8[8] = 0;
              plVar8[9] = 0;
              plVar8[0xc] = 0;
              plVar8[0xd] = 0;
              *piVar5 = iVar4 + 1;
              *plVar8 = lVar7;
              plVar8[0x12] = 0;
              plVar8[0x13] = 0;
              plVar8[0x16] = 0;
              plVar8[0x17] = 0;
              plVar8[0x1a] = 0;
              plVar8[0x1b] = 0;
            }
            *puVar6 = plVar8;
          }
        } while (*(char *)((long)plVar8 + 0xe1) == '\0');
      }
      else if (*(char *)((long)plVar8 + 0xe1) == '\0') {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
    if ((int)plVar8[0x17] != 0) {
      plVar9 = (long *)plVar8[0x16];
      do {
        lVar7 = -4;
        if (*(long *)(param_2 + 0x78) != -1) {
          lVar7 = *(long *)(param_2 + 0x78);
        }
        if ((*plVar9 != lVar7) &&
           (lVar7 = FUN__text__00492e60(param_5,param_4,*plVar9,0), lVar7 != 0)) {
          *(float *)(lVar7 + 0x54) = param_1 * 100.0;
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != (long *)(plVar8[0x16] + (ulong)*(uint *)(plVar8 + 0x17) * 8));
    }
    if (0.0 < *(float *)(param_2 + 0xac)) {
      lVar7 = -4;
      if (*(long *)(param_2 + 0x78) != -1) {
        lVar7 = *(long *)(param_2 + 0x78);
      }
      lVar7 = FUN__text__00492e60(param_5,param_4,lVar7,0);
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x48) = 0;
        *(undefined8 *)(lVar7 + 0x50) = 0;
      }
    }
  }
  return;
}


