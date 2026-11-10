/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00343be4; name: FUN_.text__00343be4
 */


void FUN__text__00343be4(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  size_t sVar7;
  long lVar8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
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
  
  lVar5 = FUN__text__00321ac0();
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uVar6 = FUN__text__00317e00(param_1,&local_d0,0x715ffb,param_2);
  if ((uVar6 & 1) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = atoi((char *)&local_d0);
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uVar6 = FUN__text__00317e00(param_1,&local_d0,0x712a0a,param_2);
  if ((uVar6 & 1) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = atoi((char *)&local_d0);
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uVar6 = FUN__text__00317e00(param_1,&local_d0,0x70fa0a,param_2);
  if ((uVar6 & 1) != 0) {
    iVar4 = atoi((char *)&local_d0);
    *(short *)(&DAT__text__0019376a + lVar5) = (short)iVar4;
  }
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
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uVar6 = FUN__text__00319030(param_1,&local_d0,0x71d052,param_2);
  if ((uVar6 & 1) != 0) {
    sVar7 = strlen((char *)&local_d0);
    FUN__text__005f3c10(&UNK__text__001936e8 + lVar5,0x40,&local_d0,sVar7);
  }
  local_60 = 0;
  uStack_58 = 0;
  piVar1 = (int *)(lVar5 + 0x19ad9c);
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uVar6 = FUN__text__00319030(param_1,&local_d0,0x716b07,param_2);
  if ((uVar6 & 1) != 0) {
    sVar7 = strlen((char *)&local_d0);
    FUN__text__005f3c10(&DAT__text__00193728 + lVar5,0x40,&local_d0,sVar7);
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uVar6 = FUN__text__00317e00(param_1,&local_d0,0x719529,param_2);
  if ((uVar6 & 1) != 0) {
    iVar4 = atoi((char *)&local_d0);
    (&DAT__text__00193768)[lVar5] = (char)iVar4;
  }
  FUN__text__00343e70();
  *piVar1 = 0x10;
  iVar2 = FUN__text__00344284(iVar2);
  if (iVar2 == 0) {
    iVar2 = FUN__text__003442b0(iVar3);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      lVar8 = FUN__text__00321ac0();
      if (*(ushort *)(&DAT__text__0019376a + lVar5) <= *(ushort *)(&DAT__text__0019376c + lVar8)) {
        *piVar1 = 6;
        return;
      }
      iVar2 = *piVar1;
    }
  }
  else {
    *piVar1 = iVar2;
  }
  if (iVar2 == 0x10) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  return;
}


