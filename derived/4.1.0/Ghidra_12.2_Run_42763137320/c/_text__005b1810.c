/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b1810; name: FUN_.text__005b1810
 */


ulong FUN__text__005b1810(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  
  uVar5 = (long)param_2 - (long)param_1 >> 3;
  if (uVar5 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x005b1850 */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*(code *)(&UNK__text__005b1860 + (ulong)*(byte *)(uVar5 + 0x757c90) * 4))(1);
    return uVar5;
  }
  FUN__text__005b13b0(param_1,param_1 + 1,param_1 + 2);
  if (param_1 + 3 != param_2) {
    iVar9 = 0;
    plVar4 = param_1 + 2;
    plVar8 = param_1 + 3;
    do {
      if ((*plVar8 == 0) || (puVar6 = *(undefined8 **)(*plVar8 + 0x60), puVar6 == (undefined8 *)0x0)
         ) {
LAB__text__005b1950:
        puVar6 = (undefined8 *)0x0;
      }
      else {
        plVar1 = (long *)(**(code **)*puVar6)(puVar6);
        plVar2 = (long *)FUN__text__0012d4b4();
        if (plVar2 != plVar1) {
          do {
            plVar1 = (long *)*plVar1;
          } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
          if (plVar1 == (long *)0x0) goto LAB__text__005b1950;
        }
        puVar6 = puVar6 + -10;
      }
      puVar7 = *(undefined8 **)(*plVar4 + 0x60);
      plVar1 = (long *)(**(code **)*puVar7)(puVar7);
      plVar2 = (long *)FUN__text__0012d4b4();
      if (plVar2 != plVar1) {
        do {
          plVar1 = (long *)*plVar1;
        } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
      }
      if (*(int *)(puVar6 + 0x26) < *(int *)(puVar7 + 0x1c)) {
        lVar10 = *plVar8;
        lVar3 = 0;
        *plVar8 = 0;
        plVar1 = plVar8;
        do {
          plVar2 = plVar4;
          if (lVar3 != 0) {
            (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
          }
          lVar3 = *plVar2;
          *plVar2 = 0;
          *plVar1 = lVar3;
          if (plVar2 == param_1) {
            plVar2 = param_1;
            goto LAB__text__005b18d8;
          }
          if ((lVar10 == 0) ||
             (puVar6 = *(undefined8 **)(lVar10 + 0x60), puVar6 == (undefined8 *)0x0)) {
LAB__text__005b1a40:
            puVar6 = (undefined8 *)0x0;
          }
          else {
            plVar4 = (long *)(**(code **)*puVar6)(puVar6);
            plVar1 = (long *)FUN__text__0012d4b4();
            if (plVar1 != plVar4) {
              do {
                plVar4 = (long *)*plVar4;
              } while (plVar4 != plVar1 && plVar4 != (long *)0x0);
              if (plVar4 == (long *)0x0) goto LAB__text__005b1a40;
            }
            puVar6 = puVar6 + -10;
          }
          puVar7 = *(undefined8 **)(plVar2[-1] + 0x60);
          plVar4 = (long *)(**(code **)*puVar7)(puVar7);
          plVar1 = (long *)FUN__text__0012d4b4();
          if (plVar1 != plVar4) {
            do {
              plVar4 = (long *)*plVar4;
            } while (plVar4 != plVar1 && plVar4 != (long *)0x0);
          }
          lVar3 = *plVar2;
          plVar4 = plVar2 + -1;
          plVar1 = plVar2;
        } while (*(int *)(puVar6 + 0x26) < *(int *)(puVar7 + 0x1c));
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
          *plVar2 = 0;
        }
LAB__text__005b18d8:
        iVar9 = iVar9 + 1;
        *plVar2 = lVar10;
        if (iVar9 == 8) {
          return (ulong)(plVar8 + 1 == param_2);
        }
      }
      plVar1 = plVar8 + 1;
      plVar4 = plVar8;
      plVar8 = plVar1;
    } while (plVar1 != param_2);
  }
  return 1;
}


