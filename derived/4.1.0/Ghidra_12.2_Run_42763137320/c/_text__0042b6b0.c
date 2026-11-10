/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042b6b0; name: FUN_.text__0042b6b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0042b6b0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_a0;
  undefined2 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined8 uStack_70;
  long local_68 [2];
  undefined4 local_58;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    lVar5 = param_2[2];
    *(long *)(param_1 + 0x10) = param_2[1];
    *(long *)(param_1 + 0x18) = lVar5;
    lVar5 = param_2[3];
    lVar1 = param_2[4];
    lVar2 = param_2[6];
    *(long *)(param_1 + 0x30) = param_2[5];
    *(long *)(param_1 + 0x38) = lVar2;
    *(long *)(param_1 + 0x20) = lVar5;
    *(long *)(param_1 + 0x28) = lVar1;
    iVar3 = *(int *)(param_1 + 0x80);
    puVar4 = _DAT_008a45f0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x80);
    puVar4 = _DAT_008a45f0;
  }
  _DAT_008a45f0 = puVar4;
  if (iVar3 != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x78);
    do {
      FUN__text__00433670(param_1 + 8,*puVar6);
      FUN__text__00435a30(*puVar4,puVar6[2],param_1 + 0x10);
      lVar5 = puVar6[2];
      FUN__text__0042bd20(param_1,1,*(undefined4 *)(lVar5 + 4),*(undefined4 *)(lVar5 + 8),
                          *(undefined1 *)(lVar5 + 0xc));
      puVar6 = puVar6 + 3;
    } while (puVar6 != (undefined8 *)
                       (*(long *)(param_1 + 0x78) + (ulong)*(uint *)(param_1 + 0x80) * 0x18));
  }
  lVar5 = *(long *)(param_1 + 0x58);
  if (lVar5 != 0) {
    local_58 = 0;
    local_a0 = 0;
    local_98 = 0xff00;
    local_68[0] = 0;
    local_68[1] = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0x100000000;
    uStack_70 = 0;
    if (param_2 == (long *)0x0) {
      param_2 = (long *)0x0;
      local_58 = 3;
    }
    else {
      local_68[0] = param_2[0x3a];
      (**(code **)(*param_2 + 0x68))(param_2,&local_a0,1);
      lVar5 = *(long *)(param_1 + 0x58);
      param_2 = param_2 + 0xf;
      local_78 = local_78 & 0xffffffff00000000;
    }
    FUN__text__0046cff0(*_DAT_008a4640,local_68,lVar5 + 0x50,&local_a0,param_2);
  }
  return;
}


