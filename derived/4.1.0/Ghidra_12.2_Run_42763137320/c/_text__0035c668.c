/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0035c668; name: FUN_.text__0035c668
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0035c668(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong local_40;
  ulong local_38;
  undefined4 local_14;
  
  lVar2 = FUN__text__00321ac0();
  puVar1 = _DAT_0089f448;
  if (*(char *)(lVar2 + 0x9349d) == '\0') {
    local_14 = 0;
    uVar3 = FUN__text__00371260(*_DAT_0089f448,&local_14);
    local_38 = param_1 + 0x60;
    local_40 = 0x220;
    FUN__text__0035c9a0(uVar3,_DAT_008a2f40,&local_38,&local_40);
    local_14 = 0;
    uVar3 = FUN__text__00371260(*puVar1,&local_14);
    local_38 = param_1 + 0x4a0;
    local_40 = 0x42;
    FUN__text__0035c9a0(uVar3,_DAT_008a2f48,&local_38,&local_40);
    local_14 = 0;
    uVar3 = FUN__text__00371260(*puVar1,&local_14);
    local_38 = param_1 + 0x524;
    local_40 = 0x24;
    FUN__text__0035c9a0(uVar3,_DAT_008a2f50,&local_38,&local_40);
    local_38 = local_38 & 0xffffffff00000000;
    uVar3 = FUN__text__00371260(*puVar1,&local_38);
    FUN__text__0035cbe0(uVar3,_DAT_008a2f58,param_1 + 0x56c);
    local_38 = local_38 & 0xffffffff00000000;
    uVar3 = FUN__text__00371260(*puVar1,&local_38);
    FUN__text__0035cbe0(uVar3,_DAT_008a2f60,param_1 + 0x56d);
    local_38 = local_38 & 0xffffffff00000000;
    uVar3 = FUN__text__00371260(*puVar1,&local_38);
    FUN__text__0035cbe0(uVar3,_DAT_008a2f68,param_1 + 0x56e);
    local_38 = local_38 & 0xffffffff00000000;
    uVar3 = FUN__text__00371260(*puVar1,&local_38);
    FUN__text__0035cbe0(uVar3,_DAT_008a2f70,param_1 + 0x56f);
    local_40 = local_40 & 0xffffffff00000000;
    uVar3 = FUN__text__00371260(*puVar1,&local_40);
    local_38 = 0x20;
    FUN__text__0035cdf0(uVar3,_DAT_008a2f78,param_1 + 0x570,&local_38);
    local_38 = local_38 & 0xffffffff00000000;
    uVar3 = FUN__text__00371260(*puVar1,&local_38);
    FUN__text__0035d030(uVar3,_DAT_008a2f80,param_1 + 0x590);
    local_38 = local_38 & 0xffffffff00000000;
    uVar3 = FUN__text__00371260(*puVar1,&local_38);
    param_1 = param_1 + 0x592;
  }
  else {
    local_14 = 0;
    uVar3 = FUN__text__00371260(*_DAT_0089f448,&local_14);
    local_38 = param_1 + 0x594;
    local_40 = 0x220;
    FUN__text__0035c9a0(uVar3,_DAT_008a2f40,&local_38,&local_40);
    local_14 = 0;
    uVar3 = FUN__text__00371260(*puVar1,&local_14);
    local_38 = param_1 + 0x9d4;
    local_40 = 0x42;
    FUN__text__0035c9a0(uVar3,_DAT_008a2f48,&local_38,&local_40);
    local_14 = 0;
    uVar3 = FUN__text__00371260(*puVar1,&local_14);
    local_38 = param_1 + 0xa58;
    local_40 = 0x24;
    FUN__text__0035c9a0(uVar3,_DAT_008a2f50,&local_38,&local_40);
    local_38 = local_38 & 0xffffffff00000000;
    uVar3 = FUN__text__00371260(*puVar1,&local_38);
    FUN__text__0035cbe0(uVar3,_DAT_008a2f58,param_1 + 0xaa0);
    local_38 = local_38 & 0xffffffff00000000;
    uVar3 = FUN__text__00371260(*puVar1,&local_38);
    FUN__text__0035cbe0(uVar3,_DAT_008a2f60,param_1 + 0xaa1);
    local_38 = local_38 & 0xffffffff00000000;
    uVar3 = FUN__text__00371260(*puVar1,&local_38);
    FUN__text__0035cbe0(uVar3,_DAT_008a2f68,param_1 + 0xaa2);
    local_38 = local_38 & 0xffffffff00000000;
    uVar3 = FUN__text__00371260(*puVar1,&local_38);
    FUN__text__0035cbe0(uVar3,_DAT_008a2f70,param_1 + 0xaa3);
    local_40 = local_40 & 0xffffffff00000000;
    uVar3 = FUN__text__00371260(*puVar1,&local_40);
    local_38 = 0x20;
    FUN__text__0035cdf0(uVar3,_DAT_008a2f78,param_1 + 0xaa4,&local_38);
    local_38 = local_38 & 0xffffffff00000000;
    uVar3 = FUN__text__00371260(*puVar1,&local_38);
    FUN__text__0035d030(uVar3,_DAT_008a2f80,param_1 + 0xac4);
    local_38 = local_38 & 0xffffffff00000000;
    uVar3 = FUN__text__00371260(*puVar1,&local_38);
    param_1 = param_1 + 0xac6;
  }
  FUN__text__0035d030(uVar3,0x734ff8,param_1);
  return;
}


