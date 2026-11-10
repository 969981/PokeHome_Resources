/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042b810; name: FUN_.text__0042b810
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0042b810(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_a0;
  undefined2 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    uVar1 = param_2[1];
    *(undefined8 *)(param_1 + 0x10) = *param_2;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    uVar3 = param_2[5];
    *(undefined8 *)(param_1 + 0x30) = param_2[4];
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    iVar4 = *(int *)(param_1 + 0x80);
    puVar5 = _DAT_008a45f0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x80);
    puVar5 = _DAT_008a45f0;
  }
  _DAT_008a45f0 = puVar5;
  if (iVar4 != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x78);
    do {
      FUN__text__00433670(param_1 + 8,*puVar7);
      FUN__text__00435a30(*puVar5,puVar7[2],param_1 + 0x10);
      lVar6 = puVar7[2];
      FUN__text__0042bd20(param_1,1,*(undefined4 *)(lVar6 + 4),*(undefined4 *)(lVar6 + 8),
                          *(undefined1 *)(lVar6 + 0xc));
      puVar7 = puVar7 + 3;
    } while (puVar7 != (undefined8 *)
                       (*(long *)(param_1 + 0x78) + (ulong)*(uint *)(param_1 + 0x80) * 0x18));
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_a0 = *param_2;
    local_58 = 2;
    local_98 = 0xff00;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0x100000000;
    uStack_70 = 0;
    FUN__text__0046cff0(DAT_00ae9a90,&local_68,*(long *)(param_1 + 0x58) + 0x50,&local_a0,param_3);
  }
  return;
}


