/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b6220; name: FUN_.text__004b6220
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004b6220(long param_1,long *param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 local_a4 [17];
  
  puVar5 = _DAT_008a45d8;
  if ((param_4 & 0xfffffffe) == 2) {
    puVar10 = *(undefined8 **)(param_1 + 0x38);
    if (puVar10 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
      do {
        while (plVar8 = (long *)puVar10[2], (long *)plVar8[1] != param_2) {
LAB__text__004b6280:
          puVar11 = (undefined8 *)*puVar10;
          puVar9 = puVar10;
          puVar10 = puVar11;
          if (puVar11 == (undefined8 *)0x0) goto LAB__text__004b6394;
        }
        plVar7 = param_2;
        if (param_4 == 2) {
          uVar6 = FUN__text__004b93f0(param_2,param_3,plVar8[8],plVar8);
          if ((uVar6 & 1) == 0) goto LAB__text__004b6280;
          plVar7 = (long *)plVar8[1];
        }
        local_a4[0] = 0;
        if (*(short *)((long)plVar7 + 0x34) == 0x403) {
LAB__text__004b62e8:
          (**(code **)(*plVar7 + 0x58))(plVar7,local_a4);
        }
        else if (*(short *)((long)plVar7 + 0x34) == 0x503) {
          FUN__text__004b934c();
          plVar7 = (long *)plVar8[1];
          goto LAB__text__004b62e8;
        }
        FUN__text__0048e190(*puVar5,(int)plVar8[6]);
        puVar12 = (undefined8 *)*puVar10;
        puVar11 = (undefined8 *)(param_1 + 0x38);
        if (*(undefined8 **)(param_1 + 0x38) != puVar10) {
          puVar11 = puVar9;
        }
        *puVar11 = puVar12;
        if (*(undefined8 **)(param_1 + 0x40) == puVar10) {
          *(undefined8 **)(param_1 + 0x40) = puVar9;
        }
        *puVar10 = *(undefined8 *)(param_1 + 0x48);
        *(undefined8 **)(param_1 + 0x48) = puVar10;
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
        plVar7 = (long *)plVar8[1];
        piVar1 = (int *)((long)plVar7 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          (**(code **)(*plVar7 + 0x20))();
        }
        (**(code **)(*plVar8 + 8))(plVar8);
        FUN__text__00400fc0(0,plVar8);
        puVar10 = puVar12;
      } while (puVar12 != (undefined8 *)0x0);
    }
LAB__text__004b6394:
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    if (puVar10 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
      do {
        while ((plVar8 = (long *)puVar10[2], (long *)plVar8[1] == param_2 &&
               (uVar6 = FUN__text__004b93f0(param_2,param_3,plVar8[8],plVar8), (uVar6 & 1) != 0))) {
          plVar7 = (long *)plVar8[1];
          local_a4[0] = 0;
          if (*(short *)((long)plVar7 + 0x34) == 0x403) {
LAB__text__004b640c:
            (**(code **)(*plVar7 + 0x58))(plVar7,local_a4);
          }
          else if (*(short *)((long)plVar7 + 0x34) == 0x503) {
            FUN__text__004b934c();
            plVar7 = (long *)plVar8[1];
            goto LAB__text__004b640c;
          }
          FUN__text__0048e190(*puVar5,(int)plVar8[6]);
          puVar12 = (undefined8 *)*puVar10;
          puVar11 = (undefined8 *)(param_1 + 0x60);
          if (*(undefined8 **)(param_1 + 0x60) != puVar10) {
            puVar11 = puVar9;
          }
          *puVar11 = puVar12;
          if (*(undefined8 **)(param_1 + 0x68) == puVar10) {
            *(undefined8 **)(param_1 + 0x68) = puVar9;
          }
          *puVar10 = *(undefined8 *)(param_1 + 0x70);
          *(undefined8 **)(param_1 + 0x70) = puVar10;
          *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
          plVar7 = (long *)plVar8[1];
          piVar1 = (int *)((long)plVar7 + 0x14);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            (**(code **)(*plVar7 + 0x20))();
          }
          (**(code **)(*plVar8 + 8))(plVar8);
          FUN__text__00400fc0(0,plVar8);
          puVar10 = puVar12;
          if (puVar12 == (undefined8 *)0x0) {
            return 1;
          }
        }
        puVar11 = (undefined8 *)*puVar10;
        puVar9 = puVar10;
        puVar10 = puVar11;
      } while (puVar11 != (undefined8 *)0x0);
    }
  }
  return 1;
}


