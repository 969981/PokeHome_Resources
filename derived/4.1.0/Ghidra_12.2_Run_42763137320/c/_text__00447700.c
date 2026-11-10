/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00447700; name: FUN_.text__00447700
 */


void FUN__text__00447700(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    plVar9 = (long *)**(undefined8 **)(param_1 + 0x30);
    if (plVar9 == (long *)0x0) {
      uVar14 = 0;
      do {
        if (*(int *)(param_1 + 0x38) - 1 == uVar14) {
          return;
        }
        plVar9 = (long *)(*(undefined8 **)(param_1 + 0x30))[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (plVar9 == (long *)0x0);
    }
    else {
      uVar14 = 0;
    }
    plVar11 = (long *)0x0;
    do {
      uVar4 = plVar9[1];
      if (uVar4 == 0xfffffffffffffffe) {
LAB__text__004477cc:
        plVar11 = (long *)*plVar9;
        plVar10 = plVar9;
        plVar9 = plVar11;
        uVar4 = uVar14;
        if (plVar11 == (long *)0x0) {
          uVar6 = (int)uVar14 + 1;
          if (*(uint *)(param_1 + 0x38) <= uVar6) {
            return;
          }
          puVar12 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)uVar6 * 8);
          while( true ) {
            uVar4 = (ulong)uVar6;
            if ((long *)*puVar12 != (long *)0x0) break;
            uVar6 = uVar6 + 1;
            puVar12 = puVar12 + 1;
            if (*(uint *)(param_1 + 0x38) == uVar6) {
              return;
            }
          }
          plVar10 = (long *)0x0;
          plVar9 = (long *)*puVar12;
        }
      }
      else {
        puVar12 = (undefined8 *)plVar9[2];
        if ((param_2 != 0) && (uVar6 = *(uint *)(param_2 + 0x18), uVar6 != 0)) {
          iVar7 = 0;
          do {
            iVar1 = iVar7 + (uVar6 >> 1);
            uVar8 = *(ulong *)(*(long *)(param_2 + 0x10) + (long)iVar1 * 8);
            if (uVar8 == uVar4) goto LAB__text__004477cc;
            if (uVar8 < uVar4) {
              iVar7 = iVar1 + 1;
            }
            uVar3 = uVar6 - (uVar8 < uVar4);
            uVar6 = uVar3 >> 1;
          } while (1 < uVar3);
        }
        iVar7 = *(int *)(puVar12 + 0xc);
        *(undefined1 *)((long)puVar12 + 100) = 0;
        *(int *)(puVar12 + 0xc) = iVar7 + -1;
        if ((iVar7 + -1 == 0) && (FUN__text__004473f0(puVar12), *(int *)(puVar12 + 0xc) == 0)) {
          (**(code **)*puVar12)(puVar12);
          FUN__text__00400fc0(4,puVar12);
          plVar5 = (long *)*plVar9;
        }
        else {
          plVar5 = (long *)*plVar9;
        }
        uVar4 = uVar14 & 0xffffffff;
        plVar13 = plVar5;
        plVar10 = plVar11;
        if (plVar5 == (long *)0x0) {
          uVar3 = *(uint *)(param_1 + 0x38);
          uVar6 = (int)uVar14 + 1;
          uVar4 = (ulong)uVar6;
          if (uVar6 < uVar3) {
            puVar12 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)uVar6 * 8);
            do {
              plVar13 = (long *)*puVar12;
              if (plVar13 != (long *)0x0) {
                plVar10 = (long *)0x0;
                goto LAB__text__00447780;
              }
              uVar6 = (int)uVar4 + 1;
              uVar4 = (ulong)uVar6;
              puVar12 = puVar12 + 1;
            } while (uVar3 != uVar6);
            plVar13 = (long *)0x0;
            uVar4 = (ulong)uVar3;
            plVar10 = (long *)0x0;
          }
          else {
            plVar13 = (long *)0x0;
          }
        }
LAB__text__00447780:
        plVar2 = (long *)(*(long *)(param_1 + 0x30) + (uVar14 & 0xffffffff) * 8);
        if (plVar11 != (long *)0x0) {
          plVar2 = plVar11;
        }
        *plVar2 = (long)plVar5;
        FUN__text__00400fc0(0,plVar9);
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        plVar9 = plVar13;
      }
      uVar14 = uVar4;
      plVar11 = plVar10;
    } while (plVar9 != (long *)0x0);
  }
  return;
}


