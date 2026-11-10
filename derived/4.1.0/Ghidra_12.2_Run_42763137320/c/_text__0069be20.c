/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069be20; name: FUN_.text__0069be20
 */


undefined8 FUN__text__0069be20(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char local_158 [8];
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_54;
  
  lVar3 = *(long *)(param_1 + 0x10);
  do {
    if (lVar3 == param_1 + 8) {
      return 0;
    }
    lVar2 = *(long *)(lVar3 + 0x10);
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_58 = 0x746e6f66;
    local_54 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158[0] = '\0';
    local_158[1] = '\0';
    local_158[2] = '\0';
    local_158[3] = '\0';
    local_158[4] = '\0';
    local_158[5] = '\0';
    local_158[6] = '\0';
    local_158[7] = '\0';
    uStack_150 = 0;
    if ((*(char *)(lVar2 + 0x40) == '.') && (*(char *)(lVar2 + 0x41) == '\0')) {
      nn::util::SNPrintf(local_158,0xff,(char *)0x70dfe8,&local_58,param_2);
      iVar1 = FUN__text__0069d0e0(lVar2 + 8,local_158);
    }
    else {
      nn::util::SNPrintf(local_158,0xff,(char *)0x7178c7,(char *)(lVar2 + 0x40),&local_58,param_2);
      iVar1 = FUN__text__0069d0e0(lVar2 + 8,local_158);
    }
    if (iVar1 != -1) {
      local_158[0] = '\0';
      local_158[1] = '\0';
      local_158[2] = '\0';
      local_158[3] = '\0';
      local_158[4] = '\0';
      local_158[5] = '\0';
      local_158[6] = '\0';
      local_158[7] = '\0';
      lVar2 = FUN__text__0069d068(lVar2 + 8,local_158,iVar1);
      if (lVar2 != 0) {
        return *(undefined8 *)(lVar3 + 0x10);
      }
    }
    lVar3 = *(long *)(lVar3 + 8);
  } while( true );
}


