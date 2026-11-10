/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047cb90; name: FUN_.text__0047cb90
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0047cb90(long param_1)

{
  char *pcVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = *(uint *)(param_1 + 0x28);
    if ((uVar2 & 1) == 0) {
      uVar3 = *(short *)(param_1 + 0x20) + 1;
      *(ushort *)(param_1 + 0x20) = uVar3;
      if (uVar3 < *(ushort *)(param_1 + 0x22)) {
        if ((uVar2 & 2) == 0) {
          return 0x11;
        }
        *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 0x18;
        goto LAB__text__0047cd14;
      }
      if ((uVar2 & 2) != 0) {
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
      }
      bVar6 = true;
      *(undefined2 *)(param_1 + 0x20) = 0;
    }
    else {
      lVar9 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
      *_DAT_008a45e8 = lVar9;
      uVar3 = *(ushort *)(param_1 + 0x22);
      uVar4 = 0;
      uVar7 = (uint)((ulong)lVar9 >> 0x21);
      if (uVar3 != 0) {
        uVar4 = uVar7 / uVar3;
      }
      uVar7 = uVar7 - uVar4 * uVar3;
      *(short *)(param_1 + 0x20) = (short)uVar7;
      if ((uVar2 >> 1 & 1) != 0) {
        *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 8) + (ulong)uVar7 * 0x18;
      }
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 == (long *)0x0) {
        bVar6 = false;
      }
      else {
        uVar2 = *(uint *)(plVar8 + 1);
        if (uVar2 == 0) {
          bVar6 = true;
LAB__text__0047cce4:
          *(undefined1 *)(*plVar8 + ((ulong)uVar7 & 0xffff)) = 1;
          uVar2 = *(uint *)(param_1 + 0x28);
        }
        else {
          uVar10 = 0;
          bVar6 = true;
          do {
            while (!bVar6) {
              uVar10 = uVar10 + 1;
              bVar6 = false;
              if (uVar10 == uVar2) goto LAB__text__0047cce4;
            }
            pcVar1 = (char *)(*plVar8 + uVar10);
            uVar10 = uVar10 + 1;
            bVar6 = *pcVar1 != '\0';
          } while (uVar10 != uVar2);
          if (*pcVar1 == '\0') {
            bVar6 = false;
            *(undefined1 *)(*plVar8 + ((ulong)uVar7 & 0xffff)) = 1;
            uVar2 = *(uint *)(param_1 + 0x28);
          }
          else {
            uVar10 = 0;
            do {
              *(undefined1 *)(*plVar8 + uVar10) = 0;
              uVar10 = uVar10 + 1;
            } while (uVar10 < *(uint *)(plVar8 + 1));
            bVar6 = true;
            *(undefined1 *)(**(long **)(param_1 + 0x10) + (ulong)*(ushort *)(param_1 + 0x20)) = 1;
            uVar2 = *(uint *)(param_1 + 0x28);
          }
        }
      }
    }
    if ((uVar2 & 2) != 0) {
      bVar5 = false;
      if (*(char *)(param_1 + 0x2d) == '\0') {
        bVar5 = bVar6;
      }
      if (!bVar5) {
LAB__text__0047cd14:
        *(undefined2 *)(param_1 + 0x24) = 0;
        return 1;
      }
    }
  }
  return 0x11;
}


