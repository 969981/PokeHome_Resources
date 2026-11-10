/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d4490; name: FUN_.text__001d4490
 */


bool FUN__text__001d4490(long param_1,undefined1 *param_2,uint *param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined2 *puVar11;
  undefined4 uVar12;
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined4 uStack_70;
  long local_6c;
  undefined2 local_64;
  undefined1 local_62;
  
  lVar10 = *(long *)(param_1 + 0x18);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  bVar5 = (param_4 & 1) == 0;
  lVar2 = 0x20;
  if (bVar5) {
    lVar2 = 0x30;
  }
  lVar1 = param_1 + 0x20;
  if (bVar5) {
    lVar1 = param_1 + 0x30;
  }
  lVar7 = FUN__text__00195844(*(undefined8 *)(lVar10 + 0x10),*(undefined4 *)(param_1 + lVar2));
  iVar3 = *(int *)(lVar7 + 0xc);
  if (iVar3 == 0) {
    bVar5 = false;
  }
  else {
    lVar7 = 0;
    uVar9 = 0;
    lVar1 = lVar1 + 4;
    puVar11 = (undefined2 *)((ulong)local_78 | 1);
    bVar5 = true;
    do {
      uVar12 = *(undefined4 *)(param_1 + lVar2);
      uVar6 = FUN__text__00191358(lVar1);
      local_78[0] = 0;
      *puVar11 = local_64;
      *(undefined1 *)(puVar11 + 1) = local_62;
      local_74 = uVar12;
      uStack_70 = uVar6;
      local_6c = lVar7;
      uVar8 = FUN__text__001a96cc(lVar10,local_78,iVar3);
      if ((uVar8 & (long)(1 << (ulong)(*param_3 & 0x1f))) != 0) goto LAB__text__001d476c;
      uVar12 = *(undefined4 *)(param_1 + lVar2);
      uVar6 = FUN__text__00191358(lVar1);
      local_78[0] = 0;
      *puVar11 = local_64;
      *(undefined1 *)(puVar11 + 1) = local_62;
      local_74 = uVar12;
      uStack_70 = uVar6;
      local_6c = lVar7 + 1;
      uVar8 = FUN__text__001a96cc(lVar10,local_78,iVar3);
      lVar4 = lVar7 + 1;
      if ((uVar8 & (long)(1 << (ulong)(*param_3 & 0x1f))) != 0) {
LAB__text__001d4764:
        lVar7 = lVar4;
LAB__text__001d476c:
        *param_2 = 0;
        *(undefined2 *)(param_2 + 1) = local_64;
        *(undefined4 *)(param_2 + 4) = uVar12;
        *(undefined4 *)(param_2 + 8) = uVar6;
        *(long *)(param_2 + 0xc) = lVar7;
        param_2[3] = local_62;
        return bVar5;
      }
      uVar12 = *(undefined4 *)(param_1 + lVar2);
      uVar6 = FUN__text__00191358(lVar1);
      local_78[0] = 0;
      *puVar11 = local_64;
      *(undefined1 *)(puVar11 + 1) = local_62;
      local_74 = uVar12;
      uStack_70 = uVar6;
      local_6c = lVar7 + 2;
      uVar8 = FUN__text__001a96cc(lVar10,local_78,iVar3);
      lVar4 = lVar7 + 2;
      if ((uVar8 & (long)(1 << (ulong)(*param_3 & 0x1f))) != 0) goto LAB__text__001d4764;
      uVar12 = *(undefined4 *)(param_1 + lVar2);
      uVar6 = FUN__text__00191358(lVar1);
      local_78[0] = 0;
      *puVar11 = local_64;
      *(undefined1 *)(puVar11 + 1) = local_62;
      local_74 = uVar12;
      uStack_70 = uVar6;
      local_6c = lVar7 + 3;
      uVar8 = FUN__text__001a96cc(lVar10,local_78,iVar3);
      lVar4 = lVar7 + 3;
      if ((uVar8 & (long)(1 << (ulong)(*param_3 & 0x1f))) != 0) goto LAB__text__001d4764;
      uVar12 = *(undefined4 *)(param_1 + lVar2);
      uVar6 = FUN__text__00191358(lVar1);
      local_78[0] = 0;
      *puVar11 = local_64;
      *(undefined1 *)(puVar11 + 1) = local_62;
      local_74 = uVar12;
      uStack_70 = uVar6;
      local_6c = lVar7 + 4;
      uVar8 = FUN__text__001a96cc(lVar10,local_78,iVar3);
      lVar4 = lVar7 + 4;
      if ((uVar8 & (long)(1 << (ulong)(*param_3 & 0x1f))) != 0) goto LAB__text__001d4764;
      uVar12 = *(undefined4 *)(param_1 + lVar2);
      uVar6 = FUN__text__00191358(lVar1);
      local_78[0] = 0;
      *puVar11 = local_64;
      *(undefined1 *)(puVar11 + 1) = local_62;
      local_74 = uVar12;
      uStack_70 = uVar6;
      local_6c = lVar7 + 5;
      uVar8 = FUN__text__001a96cc(lVar10,local_78,iVar3);
      lVar4 = lVar7 + 5;
      if ((uVar8 & (long)(1 << (ulong)(*param_3 & 0x1f))) != 0) goto LAB__text__001d4764;
      lVar7 = lVar7 + 0x100000000;
      bVar5 = uVar9 < 4;
      uVar9 = uVar9 + 1;
    } while (uVar9 != 5);
  }
  return bVar5;
}


