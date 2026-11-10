/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c1e4c; name: FUN_.text__003c1e4c
 */


int FUN__text__003c1e4c(long param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = DAT_008e1520;
  if ((DAT_008aaf10 == '\0') || (**(char **)(param_1 + 8) == '\0')) {
    return 0;
  }
  uVar4 = FUN__text__003eec14(DAT_008e1520);
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  local_a8 = (code *)0x0;
  iVar3 = FUN__text__003ef560(lVar1,param_1,uVar4,0);
  if (iVar3 != 0) {
    FUN__text__0015e5bc(*(undefined8 *)(lVar1 + 0x210),param_1,iVar3,uVar4,0,&local_b0,0);
    pcVar2 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      local_a8 = (code *)0x0;
      (*pcVar2)(&local_90);
    }
  }
  return iVar3;
}


