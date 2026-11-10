/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c79a0; name: FUN_.text__005c79a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005c79a0(long param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  plVar7 = *(long **)(param_1 + 0xb0);
  plVar9 = *(long **)(param_1 + 0xb8);
  if (plVar7 != plVar9) {
    do {
      if ((*plVar7 == 0) || (*(int *)(*plVar7 + 0x54) == 0)) {
        plVar2 = plVar7;
        if (plVar7 != plVar9) {
          while (plVar2 = plVar2 + 1, plVar2 != plVar9) {
            if ((*plVar2 != 0) && (*(int *)(*plVar2 + 0x54) != 0)) {
              if (*plVar7 != 0) {
                (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
                *plVar7 = 0;
              }
              lVar5 = *plVar2;
              *plVar2 = 0;
              *plVar7 = lVar5;
              plVar7 = plVar7 + 1;
            }
          }
        }
        goto LAB__text__005c7a58;
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar9);
    plVar7 = plVar9;
  }
LAB__text__005c7a58:
  plVar9 = *(long **)(param_1 + 0xb8);
  if (plVar7 != plVar9) {
    if ((long *)((long)plVar7 + ((long)plVar9 - (long)plVar7)) != plVar9) {
      lVar5 = (long)plVar9 - (long)plVar7 >> 3;
      plVar2 = plVar7;
      do {
        if (*plVar2 != 0) {
          (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
          *plVar2 = 0;
        }
        lVar6 = plVar2[lVar5];
        plVar2[lVar5] = 0;
        plVar7 = plVar2 + 1;
        *plVar2 = lVar6;
        plVar2 = plVar7;
      } while (plVar7 + lVar5 != plVar9);
      plVar9 = *(long **)(param_1 + 0xb8);
    }
    if (plVar9 != plVar7) {
      do {
        plVar2 = plVar9 + -1;
        if (*plVar2 != 0) {
          (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
          plVar9[-1] = 0;
        }
        plVar9 = plVar2;
      } while (plVar2 != plVar7);
    }
    *(long **)(param_1 + 0xb8) = plVar7;
  }
  plVar9 = *(long **)(param_1 + 0xb0);
  lVar5 = 0;
  if (plVar7 != plVar9) {
    lVar5 = LZCOUNT((long)plVar7 - (long)plVar9 >> 3) * -2 + 0x7e;
  }
  FUN__text__005c7c30(plVar9,plVar7,lVar5,1);
  piVar1 = _DAT_008a0300;
  plVar7 = *(long **)(param_1 + 0xb0);
  plVar9 = *(long **)(param_1 + 0xb8);
  do {
    if (plVar7 == plVar9) {
      return;
    }
    if ((*plVar7 == 0) || (puVar8 = *(undefined8 **)(*plVar7 + 0x60), puVar8 == (undefined8 *)0x0))
    {
      uVar4 = (**(code **)(lRam0000000000000000 + 0x58))(0);
joined_r0x005c7bc4:
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = (long *)(**(code **)*puVar8)(puVar8);
      plVar3 = (long *)FUN__text__003ead60();
      if (plVar3 != plVar2) {
        do {
          plVar2 = (long *)*plVar2;
        } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
        if (plVar2 == (long *)0x0) {
          uVar4 = (**(code **)(lRam0000000000000000 + 0x58))(0);
          goto joined_r0x005c7bc4;
        }
      }
      plVar2 = puVar8 + -10;
      uVar4 = (**(code **)(*plVar2 + 0x58))(plVar2);
    }
    if ((((uVar4 & 1) != 0) && (lVar5 = plVar2[0xc], *(char *)(lVar5 + 0x108) != '\0')) &&
       (*(char *)(lVar5 + 0x109) != '\0')) {
      FUN__text__006ede40(*(long *)(*(long *)(param_1 + 0x60) + 0x58) + (long)*piVar1 * 0x168,
                          *(long *)(lVar5 + 0x58) + (long)*piVar1 * 0x168);
    }
    plVar7 = plVar7 + 1;
  } while( true );
}


