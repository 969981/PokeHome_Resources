/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00193510; name: FUN_.text__00193510
 */


void FUN__text__00193510(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  lVar3 = FUN__text__00195358();
  if ((lVar3 != 0) && (*(int *)(lVar3 + 0x18) != 0)) {
    lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) +
                                          (*(ulong *)(lVar3 + 8) & 0xffffffff) * 0x20 + 0x10) + 0x10
                               ) + 8);
    if (lVar6 != 0) {
      uVar7 = *(ulong *)(lVar3 + 8) >> 0x20;
      uVar8 = *(undefined8 *)(lVar3 + 0x10);
      plVar5 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      iVar1 = (int)uVar8 + (int)((ulong)uVar8 >> 0x20) * 6;
      puVar4 = (undefined8 *)FUN__text__00302eb4(lVar6,uVar7,iVar1);
      uStack_80 = puVar4[1];
      local_78 = puVar4[2];
      local_88 = *puVar4;
      local_68 = puVar4[4];
      uStack_60 = puVar4[5];
      local_58 = *(undefined4 *)(puVar4 + 6);
      local_70 = puVar4[3];
      lVar3 = FUN__text__00195358(param_1,param_3);
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0x18) != 0)) {
        lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) +
                                              (*(ulong *)(lVar3 + 8) & 0xffffffff) * 0x20 + 0x10) +
                                   0x10) + 8);
        if (lVar9 != 0) {
          uVar10 = *(ulong *)(lVar3 + 8) >> 0x20;
          uVar8 = *(undefined8 *)(lVar3 + 0x10);
          plVar11 = (long *)(lVar9 + 0x48);
          (**(code **)(*plVar11 + 0x10))(plVar11);
          iVar2 = (int)uVar8 + (int)((ulong)uVar8 >> 0x20) * 6;
          puVar4 = (undefined8 *)FUN__text__00302eb4(lVar9,uVar10,iVar2);
          uStack_b8 = puVar4[1];
          local_b0 = puVar4[2];
          local_c0 = *puVar4;
          local_a0 = puVar4[4];
          uStack_98 = puVar4[5];
          local_90 = *(undefined4 *)(puVar4 + 6);
          local_a8 = puVar4[3];
          FUN__text__00302f68(lVar6,uVar7,iVar1,&local_c0);
          FUN__text__00302f68(lVar9,uVar10,iVar2,&local_88);
          (**(code **)(*plVar11 + 0x18))(plVar11);
        }
      }
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  return;
}


