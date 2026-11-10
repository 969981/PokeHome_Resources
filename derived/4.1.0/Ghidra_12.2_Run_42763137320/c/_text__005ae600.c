/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ae600; name: FUN_.text__005ae600
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005ae600(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long local_60;
  undefined8 uStack_58;
  
  piVar1 = _DAT_008a0300;
  local_60 = 0;
  uStack_58 = 0;
  lVar8 = *(long *)(*(long *)(param_1 + 0x160) + 0x58) + (long)*_DAT_008a0300 * 0x168;
  thunk_FUN__text__006ec64c
            (*(long *)(param_1 + 0x1d8) + (long)*_DAT_008a0300 * 0x70 + 0x58,&local_60);
  FUN__text__006edec4(lVar8,&local_60);
  *(uint *)(lVar8 + 0x160) = *(uint *)(lVar8 + 0x160) | 0x800;
  FUN__text__006ede7c(*(long *)(*(long *)(param_1 + 0x160) + 0x58) + (long)*piVar1 * 0x168,
                      DAT_008e1498 + 0x50);
  FUN__text__006ede7c(*(long *)(*(long *)(param_1 + 0x160) + 0x58) + (long)*piVar1 * 0x168,
                      DAT_00b11098 + 0x50);
  FUN__text__005b5780(DAT_008e1488,*(undefined8 *)(param_1 + 0x160));
  uVar2 = FUN__text__005b2424(*(undefined8 *)(param_1 + 0x168),0,0);
  uVar3 = FUN__text__005b2444(*(undefined8 *)(param_1 + 0x168),0,0);
  FUN__text__006eda8c(*(long *)(*(long *)(param_1 + 0x160) + 0x58) + (long)*piVar1 * 0x168,uVar2,
                      *(long *)(param_1 + 0x168) + 0x98,0);
  lVar8 = *(long *)(*(long *)(param_1 + 0x168) + 0xa8);
  FUN__text__006edc94(*(undefined4 *)(lVar8 + 0x580),
                      *(long *)(*(long *)(param_1 + 0x160) + 0x58) + (long)*piVar1 * 0x168,uVar3,
                      *(undefined4 *)(lVar8 + 0x584),3,0);
  plVar9 = *(long **)(param_1 + 0x170);
  plVar11 = *(long **)(param_1 + 0x178);
  if (plVar9 != plVar11) {
    do {
      if ((*plVar9 == 0) || (*(int *)(*plVar9 + 0x54) == 0)) {
        plVar4 = plVar9;
        if (plVar9 != plVar11) {
          while (plVar4 = plVar4 + 1, plVar4 != plVar11) {
            if ((*plVar4 != 0) && (*(int *)(*plVar4 + 0x54) != 0)) {
              if (*plVar9 != 0) {
                (**(code **)(*(long *)(*plVar9 + 0x48) + 0x18))();
                *plVar9 = 0;
              }
              lVar8 = *plVar4;
              *plVar4 = 0;
              *plVar9 = lVar8;
              plVar9 = plVar9 + 1;
            }
          }
        }
        goto LAB__text__005ae7d8;
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar11);
    plVar9 = plVar11;
  }
LAB__text__005ae7d8:
  plVar11 = *(long **)(param_1 + 0x178);
  if (plVar9 != plVar11) {
    if ((long *)((long)plVar9 + ((long)plVar11 - (long)plVar9)) != plVar11) {
      lVar8 = (long)plVar11 - (long)plVar9 >> 3;
      plVar4 = plVar9;
      do {
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          *plVar4 = 0;
        }
        lVar7 = plVar4[lVar8];
        plVar4[lVar8] = 0;
        plVar9 = plVar4 + 1;
        *plVar4 = lVar7;
        plVar4 = plVar9;
      } while (plVar9 + lVar8 != plVar11);
      plVar11 = *(long **)(param_1 + 0x178);
    }
    if (plVar11 != plVar9) {
      do {
        plVar4 = plVar11 + -1;
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          plVar11[-1] = 0;
        }
        plVar11 = plVar4;
      } while (plVar4 != plVar9);
    }
    *(long **)(param_1 + 0x178) = plVar9;
  }
  plVar11 = *(long **)(param_1 + 0x170);
  lVar8 = 0;
  if (plVar9 != plVar11) {
    lVar8 = LZCOUNT((long)plVar9 - (long)plVar11 >> 3) * -2 + 0x7e;
  }
  FUN__text__005ae9d0(plVar11,plVar9,lVar8,1);
  plVar9 = *(long **)(param_1 + 0x170);
  plVar11 = *(long **)(param_1 + 0x178);
  do {
    if (plVar9 == plVar11) {
      local_60 = 0;
      uStack_58 = 0;
      lVar8 = *(long *)(*(long *)(param_1 + 0x160) + 0x58) + (long)*piVar1 * 0x168;
      thunk_FUN__text__006ec64c(*(long *)(param_1 + 0x1d8) + (long)*piVar1 * 0x70 + 0x58,&local_60);
      local_60 = local_60 + 0x10;
      FUN__text__006edec4(lVar8,&local_60);
      *(uint *)(lVar8 + 0x160) = *(uint *)(lVar8 + 0x160) | 0x800;
      return;
    }
    if ((*plVar9 != 0) && (puVar10 = *(undefined8 **)(*plVar9 + 0x60), puVar10 != (undefined8 *)0x0)
       ) {
      plVar4 = (long *)(**(code **)*puVar10)(puVar10);
      plVar5 = (long *)FUN__text__0012d4b4();
      if (plVar5 != plVar4) {
        do {
          plVar4 = (long *)*plVar4;
        } while (plVar4 != plVar5 && plVar4 != (long *)0x0);
        if (plVar4 == (long *)0x0) goto LAB__text__005ae8c0;
      }
      uVar6 = (**(code **)(puVar10[-10] + 0x58))();
      if ((((uVar6 & 1) != 0) && (lVar8 = puVar10[2], *(char *)(lVar8 + 0x108) != '\0')) &&
         (*(char *)(lVar8 + 0x109) != '\0')) {
        FUN__text__006ede40(*(long *)(*(long *)(param_1 + 0x160) + 0x58) + (long)*piVar1 * 0x168,
                            *(long *)(lVar8 + 0x58) + (long)*piVar1 * 0x168);
      }
    }
LAB__text__005ae8c0:
    plVar9 = plVar9 + 1;
  } while( true );
}


