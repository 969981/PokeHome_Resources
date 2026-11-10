/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00481d28; name: FUN_.text__00481d28
 */


undefined8
FUN__text__00481d28(undefined8 *param_1,uint param_2,uint param_3,long param_4,void *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((param_3 & 0xf00) == 0x300) {
    uVar4 = 0x1f;
  }
  else {
    if (*(char *)((long)param_1 + 0x44) == '\0') {
      FUN__text__00485210(*(undefined4 *)((long)param_1 + 0x34),*(undefined4 *)(param_1 + 7),
                          *(undefined4 *)((long)param_1 + 0x3c),*(undefined4 *)(param_1 + 6),
                          *(undefined1 *)((long)param_1 + 0x45),param_2,param_3,param_5,param_4);
    }
    else {
      if (param_4 == 0) {
        return 2;
      }
      uVar3 = param_2;
      if ((param_2 & 0xf00) == 0x100) {
        uVar1 = param_2 >> 0xc & 0x637;
        uVar3 = uVar1 - (uVar1 >> 1 & 0xf1f1f1f1);
        uVar3 = (uVar3 & 0x33333333) + (uVar3 >> 2 & 0x33333333);
        uVar3 = uVar1 << 0xc | (uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | 0x100;
      }
      uVar1 = param_3 & 0xff;
      uVar2 = (uVar1 * 4 + 0xc & 0x7f0) * (param_2 & 0xff);
      memset(param_5,0,(ulong)uVar2);
      if ((uVar3 & 0xff) != 0) {
        local_80 = param_1[2];
        uStack_78 = param_1[3];
        local_70 = param_1[4];
        uStack_68 = param_1[5];
        local_90 = *param_1;
        uStack_88 = param_1[1];
        if (*(char *)((long)param_1 + 0x44) == '\x01') {
          local_90 = 0;
          uStack_88 = 0x3f800000;
          local_80 = 0x3f800000;
        }
        FUN__text__0047dfb0(param_1 + 6,&local_90,1,param_2,uVar3,param_3,uVar2 >> 2,param_4,param_5
                           );
      }
      if (((param_2 & param_3) >> 0xf & 1) != 0) {
        *(undefined4 *)
         ((long)param_5 +
         (long)(int)(uVar1 - 1) * 4 + (ulong)((uVar1 + 3 & 0x1fc) * ((param_2 & 0xff) - 1)) * 4) =
             0x3f800000;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}


