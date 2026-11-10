/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042db90; name: FUN_.text__0042db90
 */


void FUN__text__0042db90(long *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  int *piVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  
  plVar6 = (long *)(**(code **)(*param_1 + 0x80))();
  if ((plVar6 != (long *)0x0) && (lVar12 = *plVar6, lVar12 != 0)) {
    do {
      *plVar6 = *(long *)(lVar12 + 0x10);
      *(undefined8 *)(lVar12 + 0x10) = 0;
      FUN__text__00430ec0(DAT_00ae9a48,*(undefined4 *)(lVar12 + 0x38),lVar12);
      uVar9 = (ulong)*(uint *)(lVar12 + 0x30);
      if (*(uint *)(lVar12 + 0x30) != 0) {
LAB__text__0042dc34:
        lVar11 = uVar9 << 4;
        plVar7 = (long *)(*(int **)(lVar12 + 0x28) + 2);
        iVar3 = **(int **)(lVar12 + 0x28);
LAB__text__0042dc44:
        if ((int)plVar7[-1] != iVar3) goto code_r0x0042dc50;
        if (lVar11 != 0) {
          FUN__text__00432270(*plVar7);
          plVar7 = (long *)*plVar7;
          piVar8 = (int *)((long)plVar7 + 0x14);
          do {
            iVar1 = *piVar8;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar5) {
              *piVar8 = iVar1 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar1 + -1 == 0) {
            (**(code **)(*plVar7 + 0x20))();
          }
          piVar10 = *(int **)(lVar12 + 0x28);
          uVar2 = *(uint *)(lVar12 + 0x30);
          uVar9 = (ulong)uVar2;
          piVar8 = piVar10;
          if (uVar2 == 0) {
LAB__text__0042dcd0:
            if (piVar8 != piVar10 + (ulong)uVar2 * 4) {
              uVar9 = (ulong)(uVar2 - 1);
              if (piVar8 < piVar10 + uVar9 * 4) {
                memmove(piVar8,piVar8 + 4,
                        (ulong)(uint)((int)(piVar10 + uVar9 * 4) - (int)piVar8) & 0xfffffff0);
                uVar9 = (ulong)(*(int *)(lVar12 + 0x30) - 1);
              }
              *(int *)(lVar12 + 0x30) = (int)uVar9;
            }
          }
          else {
            lVar11 = uVar9 << 4;
            do {
              if (*piVar8 == iVar3) goto LAB__text__0042dcd0;
              piVar8 = piVar8 + 4;
              lVar11 = lVar11 + -0x10;
            } while (lVar11 != 0);
          }
        }
        goto LAB__text__0042dc30;
      }
LAB__text__0042dbe0:
      FUN__text__004303d0(lVar12);
      FUN__text__00400fc0(2,lVar12);
      lVar12 = *plVar6;
    } while (lVar12 != 0);
    if ((param_2 & 1) != 0) {
      FUN__text__0042d4a0(param_1);
      return;
    }
  }
  return;
code_r0x0042dc50:
  lVar11 = lVar11 + -0x10;
  plVar7 = plVar7 + 2;
  if (lVar11 == 0) goto LAB__text__0042dc30;
  goto LAB__text__0042dc44;
LAB__text__0042dc30:
  if ((int)uVar9 == 0) goto LAB__text__0042dbe0;
  goto LAB__text__0042dc34;
}


