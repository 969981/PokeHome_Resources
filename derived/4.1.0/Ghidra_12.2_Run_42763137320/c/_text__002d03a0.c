/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d03a0; name: FUN_.text__002d03a0
 */


void FUN__text__002d03a0(long param_1)

{
  undefined2 *puVar1;
  ulong *puVar2;
  undefined2 *puVar3;
  ushort uVar4;
  ulong uVar5;
  short *psVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  short local_38;
  short sStack_36;
  uint uStack_34;
  
  lVar8 = *(long *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x50);
  uVar5 = (*(long *)(lVar8 + 0x278) - *(long *)(lVar8 + 0x270) >> 3) * 0x38e38e39;
  if ((int)uVar5 == 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  else {
    uVar10 = tpidr_el0;
    uVar9 = 0;
    uVar10 = uVar10 & 0xffffffffffffe000;
    do {
      psVar6 = (short *)(*(long *)(lVar8 + 0x270) + uVar9 * 0x48);
      local_38 = *psVar6;
      sStack_36 = psVar6[3];
      uVar4 = psVar6[2];
      uStack_34 = (uint)uVar4;
      puVar7 = *(ulong **)(param_1 + 0x50);
      puVar2 = *(ulong **)(param_1 + 0x58);
      if (puVar7 == puVar2) {
LAB__text__002d0490:
        if (puVar7 == puVar2) goto LAB__text__002d0498;
      }
      else {
        do {
          if ((((short)*puVar7 == local_38) && (*(short *)((long)puVar7 + 2) == sStack_36)) &&
             (*(uint *)((long)puVar7 + 4) == (uint)uVar4)) goto LAB__text__002d0490;
          puVar7 = puVar7 + 1;
        } while (puVar7 != puVar2);
LAB__text__002d0498:
        if (puVar2 < *(ulong **)(param_1 + 0x60)) {
          if (*(long *)(uVar10 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
            FUN__text__00102c10();
          }
          *(undefined8 *)(uVar10 + *(long *)(uVar10 + 0x98) * 8 + 0x18) =
               *(undefined8 *)(param_1 + 0x68);
          *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
          *puVar2 = (ulong)CONCAT24(uVar4,CONCAT22(sStack_36,local_38));
          *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + -1;
          *(ulong **)(param_1 + 0x58) = puVar2 + 1;
        }
        else {
          FUN__text__002d2840((undefined8 *)(param_1 + 0x50),&local_38);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != (uVar5 & 0xffffffff));
    puVar1 = *(undefined2 **)(param_1 + 0x50);
    puVar3 = *(undefined2 **)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (puVar1 != puVar3) {
      lVar8 = *(long *)(param_1 + 0x88);
      if (lVar8 == 0) {
        *(int *)(param_1 + 0x98) =
             (int)((ulong)((long)puVar3 + (0x7fffffff8 - (long)puVar1)) >> 3) + 1;
        return;
      }
      while( true ) {
        if ((lVar8 == 0) ||
           (uVar5 = FUN__text__002d3c40(lVar8,*puVar1,puVar1[1],1), (uVar5 & 1) == 0)) {
          *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
        }
        if (puVar1 + 4 == puVar3) break;
        lVar8 = *(long *)(param_1 + 0x88);
        puVar1 = puVar1 + 4;
      }
    }
  }
  return;
}


