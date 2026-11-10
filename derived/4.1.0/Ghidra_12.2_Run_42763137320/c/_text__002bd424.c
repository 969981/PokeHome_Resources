/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002bd424; name: FUN_.text__002bd424
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002bd424(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong local_40;
  ulong local_38;
  undefined4 local_14;
  
  puVar1 = _DAT_0089f510;
  local_14 = 0;
  uVar2 = FUN__text__002b145c(*_DAT_0089f510,&local_14);
  local_38 = param_1 + 0x60;
  local_40 = 0x220;
  FUN__text__002bd5a0(uVar2,_DAT_008a2408,&local_38,&local_40);
  local_38 = local_38 & 0xffffffff00000000;
  uVar2 = FUN__text__002b145c(*puVar1,&local_38);
  FUN__text__002bd7d0(uVar2,_DAT_008a2410,param_1 + 0x4a0);
  local_38 = local_38 & 0xffffffff00000000;
  uVar2 = FUN__text__002b145c(*puVar1,&local_38);
  FUN__text__002bd7d0(uVar2,_DAT_008a2418,param_1 + 0x4a1);
  local_38 = local_38 & 0xffffffff00000000;
  uVar2 = FUN__text__002b145c(*puVar1,&local_38);
  FUN__text__002bd7d0(uVar2,_DAT_008a2420,param_1 + 0x4a2);
  local_38 = local_38 & 0xffffffff00000000;
  uVar2 = FUN__text__002b145c(*puVar1,&local_38);
  FUN__text__002bd7d0(uVar2,_DAT_008a2428,param_1 + 0x4a3);
  local_40 = local_40 & 0xffffffff00000000;
  uVar2 = FUN__text__002b145c(*puVar1,&local_40);
  local_38 = 0x20;
  FUN__text__002bd9f0(uVar2,_DAT_008a2430,param_1 + 0x4a4,&local_38);
  local_38 = local_38 & 0xffffffff00000000;
  uVar2 = FUN__text__002b145c(*puVar1,&local_38);
  FUN__text__002bdc20(uVar2,_DAT_008a2438,param_1 + 0x4c4);
  local_38 = local_38 & 0xffffffff00000000;
  uVar2 = FUN__text__002b145c(*puVar1,&local_38);
  FUN__text__002bdc20(uVar2,_DAT_008a2440,param_1 + 0x4c6);
  local_40 = local_40 & 0xffffffff00000000;
  uVar2 = FUN__text__002b145c(*puVar1,&local_40);
  local_38 = 0x20;
  FUN__text__002bd9f0(uVar2,_DAT_008a2448,param_1 + 0x4c8,&local_38);
  return;
}


