/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b0c68; name: FUN_.text__006b0c68
 */


void FUN__text__006b0c68(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long local_40;
  long lStack_38;
  undefined1 local_30 [16];
  
  if ((*(uint *)(param_1 + 0x10) >> 0x10 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x10) >> 0x11 & 1) == 0) {
      plVar1 = (long *)(*(long *)(*(long *)(param_3 + 200) + 0x10) +
                       (long)*(int *)(*(long *)(param_3 + 200) + 0x30) * 0x10);
      lStack_38 = plVar1[1];
      local_40 = *plVar1 + (ulong)*(uint *)(param_1 + 0x34);
      if (*(long *)(param_1 + 0x38) == 0) {
        lVar8 = 0x90;
      }
      else {
        lVar8 = (ulong)*(uint *)(*(long *)(param_1 + 0x38) + 4) + 0x90;
      }
      FUN__text__006ee1d4(param_2,*(undefined4 *)
                                   (*(long *)(*(long *)(param_1 + 0x20) + 0x28) +
                                   (ulong)*(ushort *)(param_1 + 0x4a) * 4),4,&local_40,lVar8);
      uVar3 = *(uint *)(param_1 + 0x14) & 3;
      if (uVar3 != 0) {
        uVar4 = *(uint *)(param_1 + 0x10);
        uVar9 = (ulong)(uVar4 >> 2) & 3;
        lVar6 = ((ulong)uVar4 & 3) * 0x10;
        lVar8 = *(long *)(param_1 + 0x18) + lVar6 + uVar9 * 0x14;
        if (*(char *)(lVar8 + 1) != '\a') {
          if ((uVar3 == 1) || (*(char *)(lVar8 + 0x11) == '\a')) {
            uVar10 = 1;
          }
          else if (uVar3 == 2) {
            uVar10 = 2;
          }
          else {
            uVar10 = 2;
            if (*(char *)(lVar8 + 0x21) != '\a') {
              uVar10 = 3;
            }
          }
          if (uVar3 <= uVar10) {
            return;
          }
        }
        plVar1 = (long *)(*(long *)(*(long *)(param_3 + 200) + 0x10) +
                         (long)*(int *)(*(long *)(param_3 + 200) + 0x30) * 0x10);
        lStack_38 = plVar1[1];
        plVar2 = (long *)(*(long *)(param_1 + 0x18) +
                         (((ulong)uVar4 & 0x30) + lVar6 | (ulong)(uVar4 >> 6) & 8) +
                         ((ulong)(uVar4 >> 8) & 0xc) + ((ulong)(uVar4 >> 4) & 0x1c) +
                         ((ulong)(uVar4 >> 0xc) & 8) +
                         ((ulong)(uVar4 >> 0xd) & 0x60) + (ulong)(-(uVar4 >> 0xc & 1) & 0xc) +
                         (ulong)(-(uVar4 >> 0x10 & 1) & 0x1c) +
                         ((ulong)(uVar4 >> 0xc) & 0x10) * ((ulong)(uVar4 >> 6) & 7) +
                         (ulong)((int)(uVar4 << 0xe) >> 0x1f & 0x74) +
                         (((ulong)(uVar4 >> 0xd) & 3) + uVar9) * 0x14);
        local_40 = *plVar1 + *plVar2;
        FUN__text__006ee1d4(param_2,(int)plVar2[1],4,&local_40,0xc0);
      }
      return;
    }
    iVar5 = *(int *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) +
                    (ulong)*(ushort *)(param_1 + 0x4a) * 4);
    if (iVar5 < 0) {
      return;
    }
    uVar7 = 0x220;
  }
  else {
    uVar7 = 0xe0;
    iVar5 = *(int *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) +
                    (ulong)*(ushort *)(param_1 + 0x4a) * 4);
  }
  FUN__text__006ee1d4(param_2,iVar5,4,local_30 + 0x10,uVar7);
  return;
}


