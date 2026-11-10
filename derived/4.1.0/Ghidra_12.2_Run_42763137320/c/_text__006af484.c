/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006af484; name: FUN_.text__006af484
 */


void FUN__text__006af484(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 local_58;
  
  uVar9 = *(uint *)(param_1 + 0x14);
  if (((uVar9 & 3) != 0) && ('\0' < (char)(*(byte *)(param_1 + 0x48) << 4))) {
    puVar3 = *(ushort **)(param_1 + 0x18);
    uVar1 = *(byte *)(param_1 + 0x48) & 0xf;
    uVar4 = *(ushort *)(param_1 + 0x4a);
    uVar2 = uVar9 & 3;
    if (uVar1 <= (uVar9 & 3)) {
      uVar2 = uVar1;
    }
    lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
    uVar9 = uVar2;
    if (uVar2 < 2) {
      uVar9 = 1;
    }
    iVar5 = FUN__text__006b1998();
    iVar5 = *(int *)(lVar11 + (long)(int)(iVar5 * (uint)uVar4) * 4);
    if (-1 < iVar5) {
      local_58 = 0;
      uVar4 = *puVar3;
      puVar6 = (undefined8 *)
               FUN__text__006d65d8(*(undefined8 *)(param_2 + 0xb8),uVar4 & 3,uVar4 >> 2 & 3,
                                   uVar4 >> 4 & 7,uVar4 >> 7 & 1);
      local_58 = *puVar6;
      FUN__text__006ee15c(param_3,iVar5,4,*(long *)(puVar3 + 4) + 8,&local_58);
    }
    if (1 < uVar2) {
      lVar11 = *(long *)(param_1 + 0x18);
      uVar4 = *(ushort *)(param_1 + 0x4a);
      lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
      iVar5 = FUN__text__006b1998();
      iVar5 = *(int *)(lVar10 + (long)(int)(iVar5 * (uint)uVar4) * 4 + 4);
      if (-1 < iVar5) {
        uVar4 = *(ushort *)(lVar11 + 0x10);
        local_58 = 0;
        puVar6 = (undefined8 *)
                 FUN__text__006d65d8(*(undefined8 *)(param_2 + 0xb8),uVar4 & 3,uVar4 >> 2 & 3,
                                     uVar4 >> 4 & 7,uVar4 >> 7 & 1);
        local_58 = *puVar6;
        FUN__text__006ee15c(param_3,iVar5,4,*(long *)(lVar11 + 0x18) + 8,&local_58);
      }
      if (uVar9 != 2) {
        lVar11 = *(long *)(param_1 + 0x18);
        uVar4 = *(ushort *)(param_1 + 0x4a);
        lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
        iVar5 = FUN__text__006b1998();
        iVar5 = *(int *)(lVar10 + (long)(int)(iVar5 * (uint)uVar4) * 4 + 8);
        if (-1 < iVar5) {
          uVar4 = *(ushort *)(lVar11 + 0x20);
          local_58 = 0;
          puVar6 = (undefined8 *)
                   FUN__text__006d65d8(*(undefined8 *)(param_2 + 0xb8),uVar4 & 3,uVar4 >> 2 & 3,
                                       uVar4 >> 4 & 7,uVar4 >> 7 & 1);
          local_58 = *puVar6;
          FUN__text__006ee15c(param_3,iVar5,4,*(long *)(lVar11 + 0x28) + 8,&local_58);
        }
      }
    }
    uVar9 = *(uint *)(param_1 + 0x14);
  }
  if ((uVar9 >> 0x11 & 1) != 0) {
    uVar7 = FUN__text__006b13f0(*(undefined8 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x4a));
    iVar5 = FUN__text__006f3f40(uVar7,4,2,0x71651e);
    if (-1 < iVar5) {
      uVar7 = FUN__text__0069df58(param_2);
      uVar8 = FUN__text__0069df60(param_2);
      FUN__text__006ee15c(param_3,iVar5,4,uVar7,uVar8);
    }
  }
  return;
}


