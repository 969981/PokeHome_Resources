/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b93f0; name: FUN_.text__004b93f0
 */


uint FUN__text__004b93f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint unaff_w25;
  long local_58;
  undefined2 local_38 [2];
  undefined1 auStack_34 [4];
  
  if (*(long *)(param_1 + 0x60) != 0) {
    do {
      uVar3 = *(uint *)(*(long **)(param_1 + 0x60) + 1);
      if (uVar3 == 0) goto LAB__text__004b95ec;
      lVar9 = **(long **)(param_1 + 0x60) + (ulong)uVar3 * 0x28;
      if (*(long *)(lVar9 + -0x10) == 0) {
        uVar6 = FUN__text__00496580(*(undefined8 *)(lVar9 + -0x28),param_2,0);
        if ((uVar6 & 1) == 0) {
          lVar9 = FUN__text__0049f650(*(undefined8 *)(lVar9 + -0x28),param_3,local_38,auStack_34,
                                      lVar9 + -0x20,lVar9 + -0x18);
          if (lVar9 == 0) {
            iVar7 = 3;
          }
          else {
            *(undefined2 *)(param_1 + 0x68 + (ulong)(*(int *)(param_1 + 0x68) - 1) * 2 + 4) =
                 local_38[0];
            *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar9 + 0x20);
            piVar2 = (int *)(lVar9 + 0x24);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar1 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar1) {
                *piVar2 = iVar7 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 1) {
              (**(code **)(*(long *)(lVar9 + 0x10) + 0x20))();
            }
            unaff_w25 = 0;
            iVar7 = 1;
          }
        }
        else {
          iVar7 = *(int *)(param_1 + 0x68);
          uVar6 = (ulong)(iVar7 - 1);
          do {
            if (uVar6 == 0) {
              iVar7 = 0;
              break;
            }
            uVar8 = uVar6 - 1;
            iVar7 = iVar7 + -1;
            bVar1 = 0x20 < uVar6;
            uVar6 = uVar8;
          } while ((bVar1) || ((1L << (uVar8 & 0x3f) & (ulong)*(uint *)(param_1 + 0xac)) == 0));
          plVar10 = *(long **)(param_1 + 0x60);
          *(int *)(param_1 + 0x68) = iVar7;
          FUN__text__0049d9d0(*plVar10 + (ulong)*(uint *)(plVar10 + 1) * 0x28 + -0x28);
          iVar7 = 0;
          *(int *)(plVar10 + 1) = (int)plVar10[1] + -1;
        }
      }
      else {
        local_58 = 0;
        FUN__text__0049cd50(*(undefined8 *)(lVar9 + -0x10),*(undefined8 *)(lVar9 + -8),&local_58);
        plVar10 = *(long **)(param_1 + 0x60);
        FUN__text__0049d9d0(*plVar10 + (ulong)*(uint *)(plVar10 + 1) * 0x28 + -0x28);
        lVar9 = local_58;
        *(int *)(plVar10 + 1) = (int)plVar10[1] + -1;
        if (local_58 == 0) {
          lVar5 = *(long *)(param_1 + 0x60);
          unaff_w25 = 1;
          *(undefined8 *)(param_1 + 0x60) = 0;
        }
        else {
          FUN__text__0049dbd4(local_58);
          lVar5 = *(long *)(param_1 + 0x60);
          *(long *)(param_1 + 0x60) = lVar9;
        }
        if (lVar5 != 0) {
          FUN__text__0049dbf0();
        }
        if (local_58 != 0) {
          FUN__text__0049dbf0();
        }
        if (lVar9 == 0) goto LAB__text__004b95f8;
        iVar7 = 0;
      }
    } while (iVar7 == 0);
    if (iVar7 == 1) goto LAB__text__004b95f8;
    if (*(int *)(*(long *)(param_1 + 0x60) + 8) == 0) {
LAB__text__004b95ec:
      *(undefined8 *)(param_1 + 0x60) = 0;
      FUN__text__0049dbf0();
    }
  }
  unaff_w25 = 1;
LAB__text__004b95f8:
  return unaff_w25 & 1;
}


