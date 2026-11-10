/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069b4f0; name: FUN_.text__0069b4f0
 */


bool FUN__text__0069b4f0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                        undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char local_160 [8];
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
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
  undefined4 local_48;
  undefined1 local_44;
  
  lVar2 = *(long *)(param_1 + 0xb8);
  if (lVar2 == 0) {
    local_44 = 0;
    local_48 = 0x68736762;
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
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_160[0] = '\0';
    local_160[1] = '\0';
    local_160[2] = '\0';
    local_160[3] = '\0';
    local_160[4] = '\0';
    local_160[5] = '\0';
    local_160[6] = '\0';
    local_160[7] = '\0';
    uStack_158 = 0;
    if ((*(char *)(param_1 + 0x40) == '.') && (*(char *)(param_1 + 0x41) == '\0')) {
      nn::util::SNPrintf(local_160,0xff,(char *)0x70dfe8,&local_48,0x711630);
      iVar1 = FUN__text__0069d0e0(param_1 + 8,local_160);
    }
    else {
      nn::util::SNPrintf(local_160,0xff,(char *)0x7178c7,(char *)(param_1 + 0x40),&local_48,0x711630
                        );
      iVar1 = FUN__text__0069d0e0(param_1 + 8,local_160);
    }
    if (iVar1 == -1) {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      return false;
    }
    local_160[0] = '\0';
    local_160[1] = '\0';
    local_160[2] = '\0';
    local_160[3] = '\0';
    local_160[4] = '\0';
    local_160[5] = '\0';
    local_160[6] = '\0';
    local_160[7] = '\0';
    lVar2 = FUN__text__0069d068(param_1 + 8,local_160,iVar1);
    *(long *)(param_1 + 0xb8) = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  lVar3 = *(long *)(param_1 + 0xc0);
  if (lVar3 == 0) {
    local_44 = 0;
    local_48 = 0x68736762;
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
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_160[0] = '\0';
    local_160[1] = '\0';
    local_160[2] = '\0';
    local_160[3] = '\0';
    local_160[4] = '\0';
    local_160[5] = '\0';
    local_160[6] = '\0';
    local_160[7] = '\0';
    uStack_158 = 0;
    if ((*(char *)(param_1 + 0x40) == '.') && (*(char *)(param_1 + 0x41) == '\0')) {
      nn::util::SNPrintf(local_160,0xff,(char *)0x70dfe8,&local_48,0x711645);
      iVar1 = FUN__text__0069d0e0(param_1 + 8,local_160);
    }
    else {
      nn::util::SNPrintf(local_160,0xff,(char *)0x7178c7,(char *)(param_1 + 0x40),&local_48,0x711645
                        );
      iVar1 = FUN__text__0069d0e0(param_1 + 8,local_160);
    }
    if (iVar1 == -1) {
      *(undefined8 *)(param_1 + 0xc0) = 0;
      return false;
    }
    local_160[0] = '\0';
    local_160[1] = '\0';
    local_160[2] = '\0';
    local_160[3] = '\0';
    local_160[4] = '\0';
    local_160[5] = '\0';
    local_160[6] = '\0';
    local_160[7] = '\0';
    lVar3 = FUN__text__0069d068(param_1 + 8,local_160,iVar1);
    *(long *)(param_1 + 0xc0) = lVar3;
    if (lVar3 == 0) {
      return false;
    }
  }
  iVar1 = FUN__text__006c0d80(lVar3,param_4,param_5,param_6);
  if (iVar1 != -1) {
    thunk_FUN__text__006b1010
              (param_2,param_3,lVar2,lVar3,*(undefined8 *)(param_1 + 0xd0),
               (lVar2 - *(long *)(param_1 + 200)) + *(long *)(param_1 + 0xd8),
               *(undefined8 *)(param_1 + 0xe0),3);
  }
  return iVar1 != -1;
}


